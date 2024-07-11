// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameplayAbilities/Abilities/ModularAbilityCost_PlayerTagStack.h"

#include "ModularAbilityPlayerState.h"
#include "GameFramework/Controller.h"
#include "GameplayAbilities/ModularGameplayAbility.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularAbilityCost_PlayerTagStack)

class AModularAbilityPlayerState;

UModularAbilityCost_PlayerTagStack::UModularAbilityCost_PlayerTagStack()
{
	Quantity.SetValue(1.0f);
}

bool UModularAbilityCost_PlayerTagStack::CheckCost(const UModularGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (const AController* PlayerController = Ability->GetControllerFromActorInfo())
	{
		if (const AModularAbilityPlayerState* PlayerState = Cast<AModularAbilityPlayerState>(PlayerController->PlayerState))
		{
			const int32 AbilityLevel = Ability->GetAbilityLevel(Handle, ActorInfo);

			const float NumStacksReal = Quantity.GetValueAtLevel(AbilityLevel);
			const int32 NumStacks = FMath::TruncToInt(NumStacksReal);

			return PlayerState->GetStatTagStackCount(Tag) >= NumStacks;
		}
	}
	return false;
}

void UModularAbilityCost_PlayerTagStack::ApplyCost(const UModularGameplayAbility* Ability, const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	if (ActorInfo->IsNetAuthority())
	{
		if (const AController* PlayerController = Ability->GetControllerFromActorInfo())
		{
			if (AModularAbilityPlayerState* PlayerState = Cast<AModularAbilityPlayerState>(PlayerController->PlayerState))
			{
				const int32 AbilityLevel = Ability->GetAbilityLevel(Handle, ActorInfo);

				const float NumStacksReal = Quantity.GetValueAtLevel(AbilityLevel);
				const int32 NumStacks = FMath::TruncToInt(NumStacksReal);

				PlayerState->RemoveStatTagStack(Tag, NumStacks);
			}
		}
	}
}
