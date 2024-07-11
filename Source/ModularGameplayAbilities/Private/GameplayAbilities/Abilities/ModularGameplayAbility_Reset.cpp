// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameplayAbilities/Abilities/ModularGameplayAbility_Reset.h"

#include "ModularAbilityTags.h"
#include "ActorComponent/ModularAbilitySystemComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "ModularGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularGameplayAbility_Reset)

UModularGameplayAbility_Reset::UModularGameplayAbility_Reset(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;

	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		// Add the ability trigger tag as default to the CDO.
		FAbilityTriggerData TriggerData;
		TriggerData.TriggerTag = ModularGameplayTags::GameplayEvent_RequestReset;
		TriggerData.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
		AbilityTriggers.Add(TriggerData);
	}
}

void UModularGameplayAbility_Reset::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	check(ActorInfo);

	UModularAbilitySystemComponent* AbilityComponent = CastChecked<UModularAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get());

	FGameplayTagContainer AbilityTypesToIgnore;
	AbilityTypesToIgnore.AddTag(ModularAbilityTags::Ability_Behavior_SurvivesDeath);

	// Cancel all abilities and block others from starting.
	AbilityComponent->CancelAbilities(nullptr, &AbilityTypesToIgnore, this);

	SetCanBeCanceled(false);

	// Execute the reset from the character
	if (AModularCharacter* ModularChar = Cast<AModularCharacter>(CurrentActorInfo->AvatarActor.Get()))
	{
		ModularChar->Reset();
	}

	// Let others know a reset has occurred
	FModularPlayerResetMessage Message;
	Message.OwnerPlayerState = CurrentActorInfo->OwnerActor.Get();
	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(this);
	MessageSystem.BroadcastMessage(ModularGameplayTags::GameplayEvent_Reset, Message);

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	constexpr bool bReplicateEndAbility = true;
	constexpr bool bWasCanceled = false;
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, bReplicateEndAbility, bWasCanceled);
}
