// Copyright Chronicler.

#pragma once

#include "GameplayEffect.h"

#include "ModularAbilityData.generated.h"

/**
 * Global data asset that contains modular ability data.
 */
UCLASS(BlueprintType, Const, meta=(DisplayName="Modular Ability Data", ShortTooltip="Global data asset containing modular ability data."))
class UModularAbilityData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UModularAbilityData();

	static const UModularAbilityData& Get();

	// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.
	UPROPERTY(EditDefaultsOnly, Category = "Default Gameplay Effects", meta = (DisplayName = "Damage Gameplay Effect (SetByCaller)"))
	TSoftClassPtr<UGameplayEffect> DamageGameplayEffect_SetByCaller;

	// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.
	UPROPERTY(EditDefaultsOnly, Category = "Default Gameplay Effects", meta = (DisplayName = "Heal Gameplay Effect (SetByCaller)"))
	TSoftClassPtr<UGameplayEffect> HealGameplayEffect_SetByCaller;

	// Gameplay effect used to add and remove dynamic tags.
	UPROPERTY(EditDefaultsOnly, Category = "Default Gameplay Effects")
	TSoftClassPtr<UGameplayEffect> DynamicTagGameplayEffect;
};
