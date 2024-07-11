// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/Animation/GameplayTagsAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagsAnimInstance();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagsAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UGameplayTagsAnimInstance
void UGameplayTagsAnimInstance::StaticRegisterNativesUGameplayTagsAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsAnimInstance);
UClass* Z_Construct_UClass_UGameplayTagsAnimInstance_NoRegister()
{
	return UGameplayTagsAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagsAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Adds support for gameplay tags to the base game animation instance class.\n *\n * This should be used to avoid polling for Pawn gameplay tags in animation blueprints.\n *\n * FGameplayTagBlueprintPropertyMap has a hard dependency on the Ability System Component, since the component\n * also tracks the gameplay tags.\n *\n * @todo This should be relocated to a separate GameplayTags plugin once the ASC dependency is extricated.\n *\n * @see https://dev.epicgames.com/community/learning/tutorials/n2nJ/unreal-engine-fgameplaytagblueprintpropertymap-the-tag-watcher\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/GameplayTagsAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/GameplayTagsAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds support for gameplay tags to the base game animation instance class.\n\nThis should be used to avoid polling for Pawn gameplay tags in animation blueprints.\n\nFGameplayTagBlueprintPropertyMap has a hard dependency on the Ability System Component, since the component\nalso tracks the gameplay tags.\n\n@todo This should be relocated to a separate GameplayTags plugin once the ASC dependency is extricated.\n\n@see https://dev.epicgames.com/community/learning/tutorials/n2nJ/unreal-engine-fgameplaytagblueprintpropertymap-the-tag-watcher" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\n// These should be used instead of manually querying for the gameplay tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/GameplayTagsAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\nThese should be used instead of manually querying for the gameplay tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
		{ "ModuleRelativePath", "Public/Animation/GameplayTagsAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTagsAnimInstance, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::NewProp_GroundDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::ClassParams = {
	&UGameplayTagsAnimInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagsAnimInstance()
{
	if (!Z_Registration_Info_UClass_UGameplayTagsAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsAnimInstance.OuterSingleton, Z_Construct_UClass_UGameplayTagsAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagsAnimInstance.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UGameplayTagsAnimInstance>()
{
	return UGameplayTagsAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsAnimInstance);
UGameplayTagsAnimInstance::~UGameplayTagsAnimInstance() {}
// End Class UGameplayTagsAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_Animation_GameplayTagsAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsAnimInstance, UGameplayTagsAnimInstance::StaticClass, TEXT("UGameplayTagsAnimInstance"), &Z_Registration_Info_UClass_UGameplayTagsAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsAnimInstance), 1614535675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_Animation_GameplayTagsAnimInstance_h_1183018195(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_Animation_GameplayTagsAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_Animation_GameplayTagsAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
