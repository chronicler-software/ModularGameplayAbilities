#include "DataAsset/ModularAbilityData.h"

#include "ModularGameplayAbilitiesConfig.h"
#include "DataAsset/ModularAssetManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularAbilityData)

UModularAbilityData::UModularAbilityData()
{
}

const UModularAbilityData& UModularAbilityData::UModularAbilityData::Get()
{
	const UModularGameplayAbilitiesConfig* ModularGameplayAbilitiesConfig = GetDefault<UModularGameplayAbilitiesConfig>();
	return UModularAssetManager::Get().GetOrLoadTypedGameData<UModularAbilityData>(ModularGameplayAbilitiesConfig->ModularAbilityDataPath);
}
