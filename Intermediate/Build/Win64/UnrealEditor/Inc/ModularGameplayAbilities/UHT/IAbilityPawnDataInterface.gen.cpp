// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/DataAsset/IAbilityPawnDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAbilityPawnDataInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityPawnDataInterface();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityPawnDataInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Interface UAbilityPawnDataInterface
void UAbilityPawnDataInterface::StaticRegisterNativesUAbilityPawnDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityPawnDataInterface);
UClass* Z_Construct_UClass_UAbilityPawnDataInterface_NoRegister()
{
	return UAbilityPawnDataInterface::StaticClass();
}
struct Z_Construct_UClass_UAbilityPawnDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DataAsset/IAbilityPawnDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAbilityPawnDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityPawnDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityPawnDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityPawnDataInterface_Statics::ClassParams = {
	&UAbilityPawnDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityPawnDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityPawnDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityPawnDataInterface()
{
	if (!Z_Registration_Info_UClass_UAbilityPawnDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityPawnDataInterface.OuterSingleton, Z_Construct_UClass_UAbilityPawnDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityPawnDataInterface.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UAbilityPawnDataInterface>()
{
	return UAbilityPawnDataInterface::StaticClass();
}
UAbilityPawnDataInterface::UAbilityPawnDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityPawnDataInterface);
UAbilityPawnDataInterface::~UAbilityPawnDataInterface() {}
// End Interface UAbilityPawnDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_IAbilityPawnDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityPawnDataInterface, UAbilityPawnDataInterface::StaticClass, TEXT("UAbilityPawnDataInterface"), &Z_Registration_Info_UClass_UAbilityPawnDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityPawnDataInterface), 2731285566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_IAbilityPawnDataInterface_h_2473334361(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_IAbilityPawnDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_DataAsset_IAbilityPawnDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
