// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/ModularGameplayAbilitiesConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameplayAbilitiesConfig() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityData_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbilitiesConfig();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbilitiesConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularGameplayAbilitiesConfig
void UModularGameplayAbilitiesConfig::StaticRegisterNativesUModularGameplayAbilitiesConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularGameplayAbilitiesConfig);
UClass* Z_Construct_UClass_UModularGameplayAbilitiesConfig_NoRegister()
{
	return UModularGameplayAbilitiesConfig::StaticClass();
}
struct Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ModularGameplayAbilitiesConfig.h" },
		{ "ModuleRelativePath", "Public/ModularGameplayAbilitiesConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularAbilityDataPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global ability data asset to use.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularGameplayAbilitiesConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global ability data asset to use." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModularAbilityDataPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularGameplayAbilitiesConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::NewProp_ModularAbilityDataPath = { "ModularAbilityDataPath", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularGameplayAbilitiesConfig, ModularAbilityDataPath), Z_Construct_UClass_UModularAbilityData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularAbilityDataPath_MetaData), NewProp_ModularAbilityDataPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::NewProp_ModularAbilityDataPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::ClassParams = {
	&UModularGameplayAbilitiesConfig::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularGameplayAbilitiesConfig()
{
	if (!Z_Registration_Info_UClass_UModularGameplayAbilitiesConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularGameplayAbilitiesConfig.OuterSingleton, Z_Construct_UClass_UModularGameplayAbilitiesConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularGameplayAbilitiesConfig.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularGameplayAbilitiesConfig>()
{
	return UModularGameplayAbilitiesConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularGameplayAbilitiesConfig);
UModularGameplayAbilitiesConfig::~UModularGameplayAbilitiesConfig() {}
// End Class UModularGameplayAbilitiesConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularGameplayAbilitiesConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularGameplayAbilitiesConfig, UModularGameplayAbilitiesConfig::StaticClass, TEXT("UModularGameplayAbilitiesConfig"), &Z_Registration_Info_UClass_UModularGameplayAbilitiesConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularGameplayAbilitiesConfig), 2772951753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularGameplayAbilitiesConfig_h_475032779(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularGameplayAbilitiesConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularGameplayAbilitiesConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
