// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/GameplayAbilities/ModularAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilityCost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityCost();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityCost_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularAbilityCost
void UModularAbilityCost::StaticRegisterNativesUModularAbilityCost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilityCost);
UClass* Z_Construct_UClass_UModularAbilityCost_NoRegister()
{
	return UModularAbilityCost::StaticClass();
}
struct Z_Construct_UClass_UModularAbilityCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UModularAbilityCost\n *\n * Base class for costs that a ModularGameplayAbility has (e.g., ammo or charges)\n */" },
#endif
		{ "IncludePath", "GameplayAbilities/ModularAbilityCost.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilityCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModularAbilityCost\n\nBase class for costs that a ModularGameplayAbility has (e.g., ammo or charges)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilityCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAbilityCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UModularAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
{
	((UModularAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModularAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularAbilityCost), &Z_Construct_UClass_UModularAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyCostOnHit_MetaData), NewProp_bOnlyApplyCostOnHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAbilityCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAbilityCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilityCost_Statics::ClassParams = {
	&UModularAbilityCost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularAbilityCost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilityCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilityCost()
{
	if (!Z_Registration_Info_UClass_UModularAbilityCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilityCost.OuterSingleton, Z_Construct_UClass_UModularAbilityCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilityCost.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilityCost>()
{
	return UModularAbilityCost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilityCost);
UModularAbilityCost::~UModularAbilityCost() {}
// End Class UModularAbilityCost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilityCost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilityCost, UModularAbilityCost::StaticClass, TEXT("UModularAbilityCost"), &Z_Registration_Info_UClass_UModularAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilityCost), 30720942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilityCost_h_816077892(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilityCost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
