#include "ModularAbilityPlayerController.h"

#include "ModularAbilityPlayerState.h"
#include "ActorComponent/ModularAbilitySystemComponent.h"

AModularAbilityPlayerController::AModularAbilityPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	AbilitySystemComponent = nullptr;
}

void AModularAbilityPlayerController::OnPossess(APawn* APawn)
{
	Super::OnPossess(APawn);

	if (auto* PS = GetPlayerState<AModularAbilityPlayerState>())
	{
		AbilitySystemComponent = PS->GetModularAbilitySystemComponent();
	}
}

void AModularAbilityPlayerController::OnUnPossess()
{
	AbilitySystemComponent = nullptr;
	
	Super::OnUnPossess();
}

void AModularAbilityPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (AbilitySystemComponent.IsValid())
	{
		AbilitySystemComponent->ProcessAbilityInput(DeltaTime, bGamePaused);
	}
	
	Super::PostProcessInput(DeltaTime, bGamePaused);
}

UModularAbilitySystemComponent* AModularAbilityPlayerController::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

void AModularAbilityPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (const auto* PS = GetPlayerState<AModularAbilityPlayerState>())
	{
		AbilitySystemComponent = PS->GetModularAbilitySystemComponent();
	}
}
