// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/GameplayAbilities/Abilities/ModularAbilityCost_PlayerTagStack.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilityCost_PlayerTagStack() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityCost();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityCost_PlayerTagStack();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularAbilityCost_PlayerTagStack
void UModularAbilityCost_PlayerTagStack::StaticRegisterNativesUModularAbilityCost_PlayerTagStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilityCost_PlayerTagStack);
UClass* Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_NoRegister()
{
	return UModularAbilityCost_PlayerTagStack::StaticClass();
}
struct Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents a cost that requires expending a quantity of a tag stack on the player state\n */" },
#endif
		{ "DisplayName", "Player Tag Stack" },
		{ "IncludePath", "GameplayAbilities/Abilities/ModularAbilityCost_PlayerTagStack.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/Abilities/ModularAbilityCost_PlayerTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a cost that requires expending a quantity of a tag stack on the player state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much of the tag to spend (keyed on ability level) */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/Abilities/ModularAbilityCost_PlayerTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much of the tag to spend (keyed on ability level)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Which tag to spend some of */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/Abilities/ModularAbilityCost_PlayerTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which tag to spend some of" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAbilityCost_PlayerTagStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilityCost_PlayerTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilityCost_PlayerTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModularAbilityCost,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::ClassParams = {
	&UModularAbilityCost_PlayerTagStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilityCost_PlayerTagStack()
{
	if (!Z_Registration_Info_UClass_UModularAbilityCost_PlayerTagStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilityCost_PlayerTagStack.OuterSingleton, Z_Construct_UClass_UModularAbilityCost_PlayerTagStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilityCost_PlayerTagStack.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilityCost_PlayerTagStack>()
{
	return UModularAbilityCost_PlayerTagStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilityCost_PlayerTagStack);
UModularAbilityCost_PlayerTagStack::~UModularAbilityCost_PlayerTagStack() {}
// End Class UModularAbilityCost_PlayerTagStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularAbilityCost_PlayerTagStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilityCost_PlayerTagStack, UModularAbilityCost_PlayerTagStack::StaticClass, TEXT("UModularAbilityCost_PlayerTagStack"), &Z_Registration_Info_UClass_UModularAbilityCost_PlayerTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilityCost_PlayerTagStack), 2784205329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularAbilityCost_PlayerTagStack_h_2403446615(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularAbilityCost_PlayerTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularAbilityCost_PlayerTagStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
