// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/DataAsset/ModularAbilityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilityData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityData();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularAbilityData
void UModularAbilityData::StaticRegisterNativesUModularAbilityData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilityData);
UClass* Z_Construct_UClass_UModularAbilityData_NoRegister()
{
	return UModularAbilityData::StaticClass();
}
struct Z_Construct_UClass_UModularAbilityData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global data asset that contains modular ability data.\n */" },
#endif
		{ "DisplayName", "Modular Ability Data" },
		{ "IncludePath", "DataAsset/ModularAbilityData.h" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularAbilityData.h" },
		{ "ShortTooltip", "Global data asset containing modular ability data." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global data asset that contains modular ability data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.\n" },
#endif
		{ "DisplayName", "Damage Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.\n" },
#endif
		{ "DisplayName", "Heal Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTagGameplayEffect_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to add and remove dynamic tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularAbilityData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to add and remove dynamic tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DamageGameplayEffect_SetByCaller;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HealGameplayEffect_SetByCaller;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DynamicTagGameplayEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAbilityData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UModularAbilityData_Statics::NewProp_DamageGameplayEffect_SetByCaller = { "DamageGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilityData, DamageGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffect_SetByCaller_MetaData), NewProp_DamageGameplayEffect_SetByCaller_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UModularAbilityData_Statics::NewProp_HealGameplayEffect_SetByCaller = { "HealGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilityData, HealGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealGameplayEffect_SetByCaller_MetaData), NewProp_HealGameplayEffect_SetByCaller_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UModularAbilityData_Statics::NewProp_DynamicTagGameplayEffect = { "DynamicTagGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilityData, DynamicTagGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicTagGameplayEffect_MetaData), NewProp_DynamicTagGameplayEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAbilityData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityData_Statics::NewProp_DamageGameplayEffect_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityData_Statics::NewProp_HealGameplayEffect_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityData_Statics::NewProp_DynamicTagGameplayEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAbilityData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilityData_Statics::ClassParams = {
	&UModularAbilityData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularAbilityData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityData_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityData_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilityData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilityData()
{
	if (!Z_Registration_Info_UClass_UModularAbilityData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilityData.OuterSingleton, Z_Construct_UClass_UModularAbilityData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilityData.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilityData>()
{
	return UModularAbilityData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilityData);
UModularAbilityData::~UModularAbilityData() {}
// End Class UModularAbilityData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_ModularAbilityData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilityData, UModularAbilityData::StaticClass, TEXT("UModularAbilityData"), &Z_Registration_Info_UClass_UModularAbilityData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilityData), 1704122750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_ModularAbilityData_h_3650305803(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_ModularAbilityData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_ModularAbilityData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
