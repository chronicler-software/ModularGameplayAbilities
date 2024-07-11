// Copyright Chronicler.

#pragma once

#include "DataAsset/ModularAbilityData.h"

#include "ModularGameplayAbilitiesConfig.generated.h"

UCLASS(Config = Game)
class UModularGameplayAbilitiesConfig : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UModularGameplayAbilitiesConfig();


	// Global ability data asset to use.
	UPROPERTY(Config)
	TSoftObjectPtr<UModularAbilityData> ModularAbilityDataPath;
};
