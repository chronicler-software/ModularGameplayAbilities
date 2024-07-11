// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/GameplayAbilities/ModularAbilitySet.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySet();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySet_NoRegister();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FModularAbilitySet_AttributeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet;
class UScriptStruct* FModularAbilitySet_AttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularAbilitySet_AttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularAbilitySet_AttributeSet>()
{
	return FModularAbilitySet_AttributeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FModularAbilitySet_AttributeSet\n *\n *\x09""Data used by the ability set to grant attribute sets.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FModularAbilitySet_AttributeSet\n\n    Data used by the ability set to grant attribute sets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "ModularAbilitySet_AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularAbilitySet_AttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_AttributeSet, AttributeSet), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularAbilitySet_AttributeSet",
	Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::PropPointers),
	sizeof(FModularAbilitySet_AttributeSet),
	alignof(FModularAbilitySet_AttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet.InnerSingleton;
}
// End ScriptStruct FModularAbilitySet_AttributeSet

// Begin ScriptStruct FModularAbilitySet_GameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility;
class UScriptStruct* FModularAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularAbilitySet_GameplayAbility>()
{
	return FModularAbilitySet_GameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data used by the ability set to grant gameplay abilities.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data used by the ability set to grant gameplay abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "ModularAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay ability to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay ability to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "ModularAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of ability to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of ability to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "ModularAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tag used to process input for the ability.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag used to process input for the ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularAbilitySet_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularAbilitySet_GameplayAbility",
	Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::PropPointers),
	sizeof(FModularAbilitySet_GameplayAbility),
	alignof(FModularAbilitySet_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility.InnerSingleton;
}
// End ScriptStruct FModularAbilitySet_GameplayAbility

// Begin ScriptStruct FModularAbilitySet_GameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect;
class UScriptStruct* FModularAbilitySet_GameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularAbilitySet_GameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularAbilitySet_GameplayEffect>()
{
	return FModularAbilitySet_GameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data used by the ability set to grant gameplay effects.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data used by the ability set to grant gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "ModularAbilitySet_GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect to grant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "ModularAbilitySet_GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of gameplay effect to grant.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of gameplay effect to grant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularAbilitySet_GameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GameplayEffect, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GameplayEffect, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::NewProp_GameplayEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularAbilitySet_GameplayEffect",
	Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::PropPointers),
	sizeof(FModularAbilitySet_GameplayEffect),
	alignof(FModularAbilitySet_GameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect.InnerSingleton;
}
// End ScriptStruct FModularAbilitySet_GameplayEffect

// Begin ScriptStruct FModularAbilitySet_GrantedHandles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles;
class UScriptStruct* FModularAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularAbilitySet_GrantedHandles>()
{
	return FModularAbilitySet_GrantedHandles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data used to store handles to what has been granted by the ability set.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data used to store handles to what has been granted by the ability set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles to the granted abilities.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted abilities." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles to the granted gameplay effects.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted gameplay effects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributeSets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointers to the granted attribute sets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointers to the granted attribute sets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectHandles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrantedAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributeSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularAbilitySet_GrantedHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles = { "GameplayEffectHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GrantedHandles, GameplayEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectHandles_MetaData), NewProp_GameplayEffectHandles_MetaData) }; // 290910411
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets = { "GrantedAttributeSets", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySet_GrantedHandles, GrantedAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributeSets_MetaData), NewProp_GrantedAttributeSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GameplayEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewProp_GrantedAttributeSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularAbilitySet_GrantedHandles",
	Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::PropPointers),
	sizeof(FModularAbilitySet_GrantedHandles),
	alignof(FModularAbilitySet_GrantedHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles.InnerSingleton;
}
// End ScriptStruct FModularAbilitySet_GrantedHandles

// Begin Class UModularAbilitySet
void UModularAbilitySet::StaticRegisterNativesUModularAbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilitySet);
UClass* Z_Construct_UClass_UModularAbilitySet_NoRegister()
{
	return UModularAbilitySet::StaticClass();
}
struct Z_Construct_UClass_UModularAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implementation of a GameplayAbilitySet enabling modular and data Experience features.\n *\n * @see Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/GameplayAbilitySet.h\n */" },
#endif
		{ "IncludePath", "GameplayAbilities/ModularAbilitySet.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implementation of a GameplayAbilitySet enabling modular and data Experience features.\n\n@see Plugins/Runtime/GameplayAbilities/Source/GameplayAbilities/Public/GameplayAbilitySet.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay abilities to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
		{ "TitleProperty", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay abilities to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayEffects_MetaData[] = {
		{ "Category", "Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effects to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
		{ "TitleProperty", "GameplayEffect" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effects to grant when this ability set is granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attribute Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attribute sets to grant when this ability set is granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute sets to grant when this ability set is granted." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 2229685952
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 2229685952
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect, METADATA_PARAMS(0, nullptr) }; // 1830659590
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayEffects = { "GrantedGameplayEffects", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilitySet, GrantedGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayEffects_MetaData), NewProp_GrantedGameplayEffects_MetaData) }; // 1830659590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet, METADATA_PARAMS(0, nullptr) }; // 2834441631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 2834441631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySet_Statics::NewProp_GrantedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilitySet_Statics::ClassParams = {
	&UModularAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySet_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilitySet()
{
	if (!Z_Registration_Info_UClass_UModularAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilitySet.OuterSingleton, Z_Construct_UClass_UModularAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilitySet.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilitySet>()
{
	return UModularAbilitySet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilitySet);
UModularAbilitySet::~UModularAbilitySet() {}
// End Class UModularAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularAbilitySet_AttributeSet::StaticStruct, Z_Construct_UScriptStruct_FModularAbilitySet_AttributeSet_Statics::NewStructOps, TEXT("ModularAbilitySet_AttributeSet"), &Z_Registration_Info_UScriptStruct_ModularAbilitySet_AttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularAbilitySet_AttributeSet), 2834441631U) },
		{ FModularAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FModularAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("ModularAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularAbilitySet_GameplayAbility), 2229685952U) },
		{ FModularAbilitySet_GameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FModularAbilitySet_GameplayEffect_Statics::NewStructOps, TEXT("ModularAbilitySet_GameplayEffect"), &Z_Registration_Info_UScriptStruct_ModularAbilitySet_GameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularAbilitySet_GameplayEffect), 1830659590U) },
		{ FModularAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FModularAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("ModularAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_ModularAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularAbilitySet_GrantedHandles), 3114403668U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilitySet, UModularAbilitySet::StaticClass, TEXT("UModularAbilitySet"), &Z_Registration_Info_UClass_UModularAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilitySet), 1726525737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySet_h_2834906011(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
