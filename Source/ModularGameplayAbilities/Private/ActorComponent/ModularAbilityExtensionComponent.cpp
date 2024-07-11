// Copyright Chronicler.

#include "ActorComponent/ModularAbilityExtensionComponent.h"

#include "AbilitySystemInterface.h"
#include "ModularAbilityTags.h"
#include "ModularGameplayAbilitiesLogChannels.h"
#include "ModularGameplayTags.h"
#include "ModularPlayerState.h"
#include "Actor/ModularExperienceCharacter.h"
#include "ActorComponent/ModularAbilitySystemComponent.h"
#include "ActorComponent/ModularInputComponent.h"
#include "ActorComponent/ModularInputConfigComponent.h"
#include "Components/GameFrameworkComponentManager.h"
#include "DataAsset/IAbilityPawnDataInterface.h"
#include "Misc/UObjectToken.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularAbilityExtensionComponent)

const FName UModularAbilityExtensionComponent::NAME_ActorFeatureName("ModularAbilityExtension");

UModularAbilityExtensionComponent::UModularAbilityExtensionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);

	AbilitySystemComponent = nullptr;
}

void UModularAbilityExtensionComponent::InitializeAbilitySystem(UModularAbilitySystemComponent* InASC, AActor* InOwnerActor)
{
	check(InASC);
	check(InOwnerActor);

	if (AbilitySystemComponent == InASC)
	{
		// The ability system component hasn't changed.
		return;
	}

	if (AbilitySystemComponent)
	{
		// Clean up the old ability system component.
		UninitializeAbilitySystem();
	}

	AModularExperienceCharacter* Pawn = GetPawnChecked<AModularExperienceCharacter>();
	const AActor* ExistingAvatar = InASC->GetAvatarActor();

	UE_LOG(LogModularGameplayAbilities, Verbose, TEXT("Setting up ASC [%s] on pawn [%s] owner [%s], existing [%s] "), *GetNameSafe(InASC), *GetNameSafe(Pawn), *GetNameSafe(InOwnerActor), *GetNameSafe(ExistingAvatar));

	if ((ExistingAvatar != nullptr) && (ExistingAvatar != Pawn))
	{
		UE_LOG(LogModularGameplayAbilities, Log, TEXT("Existing avatar (authority=%d)"), ExistingAvatar->HasAuthority() ? 1 : 0);

		// There is already a pawn acting as the ASC's avatar, so we need to kick it out
		// This can happen on clients if they're lagged: their new pawn is spawned + possessed before the dead one is removed
		ensure(!ExistingAvatar->HasAuthority());

		if (UModularAbilityExtensionComponent* OtherExtensionComponent = ExistingAvatar->FindComponentByClass<UModularAbilityExtensionComponent>())
		{
			OtherExtensionComponent->UninitializeAbilitySystem();
		}
	}

	AbilitySystemComponent = InASC;
	AbilitySystemComponent->InitAbilityActorInfo(InOwnerActor, Pawn);

	const UModularPawnComponent* ModularPawnComponent = Pawn->GetComponentByClass<UModularPawnComponent>();
	if (const IAbilityPawnDataInterface* PawnData = ModularPawnComponent->GetPawnData<IAbilityPawnDataInterface>();
		ensure(PawnData))
	{
		InASC->SetTagRelationshipMapping(PawnData->GetTagRelationshipMapping());
	}

	OnAbilitySystemInitialized.Broadcast();
}

void UModularAbilityExtensionComponent::UninitializeAbilitySystem()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	// Uninitialize the ASC if we're still the avatar actor (otherwise another pawn already did it when they became the avatar actor)
	if (AbilitySystemComponent->GetAvatarActor() == GetOwner())
	{
		FGameplayTagContainer AbilityTypesToIgnore;
		AbilityTypesToIgnore.AddTag(ModularAbilityTags::Ability_Behavior_SurvivesDeath);

		AbilitySystemComponent->CancelAbilities(nullptr, &AbilityTypesToIgnore);
		AbilitySystemComponent->ClearAbilityInput();
		AbilitySystemComponent->RemoveAllGameplayCues();

		if (AbilitySystemComponent->GetOwnerActor() != nullptr)
		{
			AbilitySystemComponent->SetAvatarActor(nullptr);
		}
		else
		{
			// If the ASC doesn't have a valid owner, we need to clear *all* actor info, not just the avatar pairing
			AbilitySystemComponent->ClearActorInfo();
		}

		OnAbilitySystemUninitialized.Broadcast();
	}

	AbilitySystemComponent = nullptr;
}

void UModularAbilityExtensionComponent::HandleControllerChanged()
{
	if (AbilitySystemComponent && (AbilitySystemComponent->GetAvatarActor() == GetPawnChecked<APawn>()))
	{
		ensure(AbilitySystemComponent->AbilityActorInfo->OwnerActor == AbilitySystemComponent->GetOwnerActor());
		if (AbilitySystemComponent->GetOwnerActor() == nullptr)
		{
			UninitializeAbilitySystem();
		}
		else
		{
			AbilitySystemComponent->RefreshAbilityActorInfo();
		}
	}

	CheckDefaultInitialization();
}

void UModularAbilityExtensionComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn) return;

	if (const APlayerController* PlayerController = GetController<APlayerController>(); !PlayerController) return;

	InputActionMapping(PlayerInputComponent, Pawn);
}

void UModularAbilityExtensionComponent::InputActionMapping(UInputComponent* PlayerInputComponent, const APawn* Pawn)
{
	const UModularPawnComponent* PawnExtComp = UModularPawnComponent::FindModularPawnComponent(Pawn);
	if (!PawnExtComp) return;
	const UModularPawnData* PawnData = PawnExtComp->GetPawnData<UModularPawnData>();
	if (!PawnData) return;
	const UModularInputConfig* InputConfig = PawnData->InputConfig;
	if (!InputConfig) return;
	if (UModularInputConfigComponent* InputConfigComponent = Cast<UModularInputConfigComponent>(PlayerInputComponent);
		ensureMsgf(InputConfigComponent, TEXT("Unexpected Input Component class! The Gameplay Abilities will not be bound to their inputs. Change the input component to UInputConfigComponent or a subclass of it.")))
	{
		// This is where we actually bind and input action to a gameplay tag, which means that Gameplay Ability Blueprints will
		// be triggered directly by these input actions Triggered events.
		TArray<uint32> BindHandles;
		InputConfigComponent->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, /*out*/ BindHandles);
	}
}

void UModularAbilityExtensionComponent::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>();
		!Pawn)
	{
		return;
	}
	if (UModularAbilitySystemComponent* ModularASC = GetModularAbilitySystemComponent())
	{
		ModularASC->AbilityInputTagPressed(InputTag);
	}
}

void UModularAbilityExtensionComponent::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>();
		!Pawn)
	{
		return;
	}
	if (UModularAbilitySystemComponent* ModularASC = GetModularAbilitySystemComponent())
	{
		ModularASC->AbilityInputTagReleased(InputTag);
	}
}

/**
 * @ingroup IGameFrameworkInitStateInterface
 * @{
 */

bool UModularAbilityExtensionComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager,
	FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	AModularExperienceCharacter* Pawn = GetPawnChecked<AModularExperienceCharacter>();
	if (!CurrentState.IsValid()
		&& DesiredState == ModularGameplayTags::InitState_Spawned)
	{
		// As long as we are on a valid pawn, we count as spawned
		if (Pawn)
		{
			return true;
		}
	}
	if (CurrentState == ModularGameplayTags::InitState_Spawned
		&& DesiredState == ModularGameplayTags::InitState_DataAvailable)
	{
		// The player state is required.
		if (!GetPlayerState<AModularPlayerState>())
		{
			return false;
		}

		// If we're authority or autonomous, we need to wait for a controller with registered ownership of the player state.
		if (Pawn->GetLocalRole() != ROLE_SimulatedProxy)
		{
			AController* Controller = GetController<AController>();

			const bool bHasControllerPairedWithPS = (Controller != nullptr) && \
				(Controller->PlayerState != nullptr) && \
				(Controller->PlayerState->GetOwner() == Controller);

			if (!bHasControllerPairedWithPS)
			{
				return false;
			}
		}

		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		const bool bIsBot = Pawn->IsBotControlled();

		if (bIsLocallyControlled && !bIsBot)
		{
			AModularPlayerController* ModularPC = GetController<AModularPlayerController>();

			// The input component and local player is required when locally controlled.
			if (!Pawn->InputComponent || !ModularPC || !ModularPC->GetLocalPlayer())
			{
				return false;
			}
		}

		return true;
	}
	else if (CurrentState == ModularGameplayTags::InitState_DataAvailable
		&& DesiredState == ModularGameplayTags::InitState_DataInitialized)
	{
		// Wait for player state ASC and extension component.
		const IAbilitySystemInterface* ModularPS = Cast<IAbilitySystemInterface>(GetPlayerState<AModularPlayerState>());

		return ModularPS->GetAbilitySystemComponent() && Manager->HasFeatureReachedInitState(Pawn, UModularPawnComponent::NAME_ActorFeatureName, ModularGameplayTags::InitState_DataInitialized);
	}
	else if (CurrentState == ModularGameplayTags::InitState_DataInitialized
		&& DesiredState == ModularGameplayTags::InitState_GameplayReady)
	{
		// @todo add ability initialization checks?
		return true;
	}

	return false;
}

void UModularAbilityExtensionComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager,
	const FGameplayTag CurrentState,
	const FGameplayTag DesiredState)
{
	if (CurrentState == ModularGameplayTags::InitState_DataAvailable
		&& DesiredState == ModularGameplayTags::InitState_DataInitialized)
	{
		const APawn* Pawn = GetPawn<APawn>();
		AModularPlayerState* ModularPS = GetPlayerState<AModularPlayerState>();
		const IAbilitySystemInterface* ModularAbilityPS = Cast<IAbilitySystemInterface>(ModularPS);
		UAbilitySystemComponent* ModularASC = ModularAbilityPS->GetAbilitySystemComponent();
		if (!ensure(Pawn && ModularPS && ModularASC))
		{
			return;
		}
		// The player state holds the persistent data for this player (state that persists across deaths and multiple pawns).
		// The ability system component and attribute sets live on the player state.
		InitializeAbilitySystem(Cast<UModularAbilitySystemComponent>(ModularASC), ModularPS);
		if (Pawn->InputComponent != nullptr)
		{
			InitializePlayerInput(Pawn->InputComponent);
		}
	}
}

void UModularAbilityExtensionComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	if (Params.FeatureName == UModularPawnComponent::NAME_ActorFeatureName)
	{
		if (Params.FeatureState == ModularGameplayTags::InitState_DataInitialized)
		{
			// If the extension component says all all other components are initialized, try to progress to next state.
			CheckDefaultInitialization();
		}
	}
}

void UModularAbilityExtensionComponent::CheckDefaultInitialization()
{
	static const TArray<FGameplayTag> StateChain =
	{
		ModularGameplayTags::InitState_Spawned,
		ModularGameplayTags::InitState_DataAvailable,
		ModularGameplayTags::InitState_DataInitialized,
		ModularGameplayTags::InitState_GameplayReady
	};

	// This will try to progress from spawned (which is only set in BeginPlay) through the data initialization stages
	// until it gets to gameplay ready.
	ContinueInitStateChain(StateChain);
}

/**
 * @}
 */

void UModularAbilityExtensionComponent::OnRegister()
{
	Super::OnRegister();

	if (!GetPawn<APawn>())
	{
		UE_LOG(LogModularGameplayAbilities, Error,
			TEXT("[UModularAbilityExtensionComponent::OnRegister] This component has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint."));

#if WITH_EDITOR
		if (GIsEditor)
		{
			static const FText Message = NSLOCTEXT("ModularAbilityExtensionComponent", "NotOnPawnError", "has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint. This will cause a crash if you PIE!");
			static const FName MessageLogName = TEXT("ModularAbilityExtensionComponent");

			FMessageLog(MessageLogName).Error()
				->AddToken(FUObjectToken::Create(this, FText::FromString(GetNameSafe(this))))
				->AddToken(FTextToken::Create(Message));

			FMessageLog(MessageLogName).Open();
		}
#endif
	}
	else
	{
		// Register with the init state system early, this will only work if this is a game world.
		RegisterInitStateFeature();
	}
}

void UModularAbilityExtensionComponent::BeginPlay()
{
	Super::BeginPlay();

	// Listen for when the pawn extension component changes init state
	BindOnActorInitStateChanged(UModularInputComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	// Notifies that we are done spawning, then try the rest of initialization
	ensure(TryToChangeInitState(ModularGameplayTags::InitState_Spawned));
	CheckDefaultInitialization();
}

void UModularAbilityExtensionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}
