// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/GameplayAbilities/ModularAbilitySourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilitySourceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySourceInterface();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySourceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Interface UModularAbilitySourceInterface
void UModularAbilitySourceInterface::StaticRegisterNativesUModularAbilitySourceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilitySourceInterface);
UClass* Z_Construct_UClass_UModularAbilitySourceInterface_NoRegister()
{
	return UModularAbilitySourceInterface::StaticClass();
}
struct Z_Construct_UClass_UModularAbilitySourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IModularAbilitySourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularAbilitySourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilitySourceInterface_Statics::ClassParams = {
	&UModularAbilitySourceInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilitySourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilitySourceInterface()
{
	if (!Z_Registration_Info_UClass_UModularAbilitySourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilitySourceInterface.OuterSingleton, Z_Construct_UClass_UModularAbilitySourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilitySourceInterface.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilitySourceInterface>()
{
	return UModularAbilitySourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilitySourceInterface);
UModularAbilitySourceInterface::~UModularAbilitySourceInterface() {}
// End Interface UModularAbilitySourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilitySourceInterface, UModularAbilitySourceInterface::StaticClass, TEXT("UModularAbilitySourceInterface"), &Z_Registration_Info_UClass_UModularAbilitySourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilitySourceInterface), 2470992541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_4099873006(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
