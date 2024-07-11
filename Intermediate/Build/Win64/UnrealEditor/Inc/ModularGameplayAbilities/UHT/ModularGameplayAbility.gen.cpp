// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/GameplayAbilities/ModularGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MODALCAMERA_API UClass* Z_Construct_UClass_UModalCameraMode_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityCost_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbility();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbility_NoRegister();
MODULARGAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup();
MODULARGAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerController_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPawnComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Enum EModularAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModularAbilityActivationPolicy;
static UEnum* EModularAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModularAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModularAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("EModularAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EModularAbilityActivationPolicy.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UEnum* StaticEnum<EModularAbilityActivationPolicy>()
{
	return EModularAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EModularAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "EModularAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "EModularAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EModularAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
#endif
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "EModularAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularAbilityActivationPolicy::OnInputTriggered", (int64)EModularAbilityActivationPolicy::OnInputTriggered },
		{ "EModularAbilityActivationPolicy::WhileInputActive", (int64)EModularAbilityActivationPolicy::WhileInputActive },
		{ "EModularAbilityActivationPolicy::OnSpawn", (int64)EModularAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	"EModularAbilityActivationPolicy",
	"EModularAbilityActivationPolicy",
	Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EModularAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModularAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModularAbilityActivationPolicy.InnerSingleton;
}
// End Enum EModularAbilityActivationPolicy

// Begin Enum EModularAbilityActivationGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModularAbilityActivationGroup;
static UEnum* EModularAbilityActivationGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModularAbilityActivationGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModularAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("EModularAbilityActivationGroup"));
	}
	return Z_Registration_Info_UEnum_EModularAbilityActivationGroup.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UEnum* StaticEnum<EModularAbilityActivationGroup>()
{
	return EModularAbilityActivationGroup_StaticEnum();
}
struct Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EModularAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
#endif
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "EModularAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "EModularAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "EModularAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EModularAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EModularAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularAbilityActivationGroup::Independent", (int64)EModularAbilityActivationGroup::Independent },
		{ "EModularAbilityActivationGroup::Exclusive_Replaceable", (int64)EModularAbilityActivationGroup::Exclusive_Replaceable },
		{ "EModularAbilityActivationGroup::Exclusive_Blocking", (int64)EModularAbilityActivationGroup::Exclusive_Blocking },
		{ "EModularAbilityActivationGroup::MAX", (int64)EModularAbilityActivationGroup::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	"EModularAbilityActivationGroup",
	"EModularAbilityActivationGroup",
	Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup()
{
	if (!Z_Registration_Info_UEnum_EModularAbilityActivationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModularAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModularAbilityActivationGroup.InnerSingleton;
}
// End Enum EModularAbilityActivationGroup

// Begin ScriptStruct FModularAbilityMontageFailureMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage;
class UScriptStruct* FModularAbilityMontageFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularAbilityMontageFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularAbilityMontageFailureMessage>()
{
	return FModularAbilityMontageFailureMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failure reason that can be used to play an animation montage when a failure occurs */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "ModularAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "ModularAbilityMontageFailureMessage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the reasons why this ability has failed\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the reasons why this ability has failed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[] = {
		{ "Category", "ModularAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularAbilityMontageFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilityMontageFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilityMontageFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilityMontageFailureMessage, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureMontage_MetaData), NewProp_FailureMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewProp_FailureMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularAbilityMontageFailureMessage",
	Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::PropPointers),
	sizeof(FModularAbilityMontageFailureMessage),
	alignof(FModularAbilityMontageFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage.InnerSingleton;
}
// End ScriptStruct FModularAbilityMontageFailureMessage

// Begin Class UModularGameplayAbility Function CanChangeActivationGroup
struct Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics
{
	struct ModularGameplayAbility_eventCanChangeActivationGroup_Parms
	{
		EModularAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the requested activation group is a valid transition.\n" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the requested activation group is a valid transition." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventCanChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup, METADATA_PARAMS(0, nullptr) }; // 2856662333
void Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularGameplayAbility_eventCanChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularGameplayAbility_eventCanChangeActivationGroup_Parms), &Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "CanChangeActivationGroup", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::ModularGameplayAbility_eventCanChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::ModularGameplayAbility_eventCanChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execCanChangeActivationGroup)
{
	P_GET_ENUM(EModularAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangeActivationGroup(EModularAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function CanChangeActivationGroup

// Begin Class UModularGameplayAbility Function ChangeActivationGroup
struct Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics
{
	struct ModularGameplayAbility_eventChangeActivationGroup_Parms
	{
		EModularAbilityActivationGroup NewGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tries to change the activation group.  Returns true if it successfully changed.\n" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to change the activation group.  Returns true if it successfully changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup = { "NewGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventChangeActivationGroup_Parms, NewGroup), Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup, METADATA_PARAMS(0, nullptr) }; // 2856662333
void Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularGameplayAbility_eventChangeActivationGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularGameplayAbility_eventChangeActivationGroup_Parms), &Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_NewGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "ChangeActivationGroup", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::ModularGameplayAbility_eventChangeActivationGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::ModularGameplayAbility_eventChangeActivationGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execChangeActivationGroup)
{
	P_GET_ENUM(EModularAbilityActivationGroup,Z_Param_NewGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeActivationGroup(EModularAbilityActivationGroup(Z_Param_NewGroup));
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function ChangeActivationGroup

// Begin Class UModularGameplayAbility Function ClearCameraMode
struct Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the ability's camera mode.  Automatically called if needed when the ability ends.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the ability's camera mode.  Automatically called if needed when the ability ends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "ClearCameraMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execClearCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCameraMode();
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function ClearCameraMode

// Begin Class UModularGameplayAbility Function GetControllerFromActorInfo
struct Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics
{
	struct ModularGameplayAbility_eventGetControllerFromActorInfo_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::ModularGameplayAbility_eventGetControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::ModularGameplayAbility_eventGetControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execGetControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function GetControllerFromActorInfo

// Begin Class UModularGameplayAbility Function GetHeroComponentFromActorInfo
struct Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics
{
	struct ModularGameplayAbility_eventGetHeroComponentFromActorInfo_Parms
	{
		UModularPawnComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventGetHeroComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UModularPawnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "GetHeroComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::ModularGameplayAbility_eventGetHeroComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::ModularGameplayAbility_eventGetHeroComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execGetHeroComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularPawnComponent**)Z_Param__Result=P_THIS->GetHeroComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function GetHeroComponentFromActorInfo

// Begin Class UModularGameplayAbility Function GetModularAbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics
{
	struct ModularGameplayAbility_eventGetModularAbilitySystemComponentFromActorInfo_Parms
	{
		UModularAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventGetModularAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "GetModularAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::ModularGameplayAbility_eventGetModularAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::ModularGameplayAbility_eventGetModularAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execGetModularAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularAbilitySystemComponent**)Z_Param__Result=P_THIS->GetModularAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function GetModularAbilitySystemComponentFromActorInfo

// Begin Class UModularGameplayAbility Function GetModularCharacterFromActorInfo
struct Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics
{
	struct ModularGameplayAbility_eventGetModularCharacterFromActorInfo_Parms
	{
		AModularCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventGetModularCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AModularCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "GetModularCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::ModularGameplayAbility_eventGetModularCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::ModularGameplayAbility_eventGetModularCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execGetModularCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AModularCharacter**)Z_Param__Result=P_THIS->GetModularCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function GetModularCharacterFromActorInfo

// Begin Class UModularGameplayAbility Function GetModularPlayerControllerFromActorInfo
struct Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics
{
	struct ModularGameplayAbility_eventGetModularPlayerControllerFromActorInfo_Parms
	{
		AModularPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventGetModularPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AModularPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "GetModularPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::ModularGameplayAbility_eventGetModularPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::ModularGameplayAbility_eventGetModularPlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execGetModularPlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AModularPlayerController**)Z_Param__Result=P_THIS->GetModularPlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function GetModularPlayerControllerFromActorInfo

// Begin Class UModularGameplayAbility Function K2_OnAbilityAdded
static FName NAME_UModularGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
void UModularGameplayAbility::K2_OnAbilityAdded()
{
	ProcessEvent(FindFunctionChecked(NAME_UModularGameplayAbility_K2_OnAbilityAdded),NULL);
}
struct Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UModularGameplayAbility Function K2_OnAbilityAdded

// Begin Class UModularGameplayAbility Function K2_OnAbilityRemoved
static FName NAME_UModularGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
void UModularGameplayAbility::K2_OnAbilityRemoved()
{
	ProcessEvent(FindFunctionChecked(NAME_UModularGameplayAbility_K2_OnAbilityRemoved),NULL);
}
struct Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UModularGameplayAbility Function K2_OnAbilityRemoved

// Begin Class UModularGameplayAbility Function K2_OnPawnAvatarSet
static FName NAME_UModularGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
void UModularGameplayAbility::K2_OnPawnAvatarSet()
{
	ProcessEvent(FindFunctionChecked(NAME_UModularGameplayAbility_K2_OnPawnAvatarSet),NULL);
}
struct Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
#endif
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UModularGameplayAbility Function K2_OnPawnAvatarSet

// Begin Class UModularGameplayAbility Function ScriptOnAbilityFailedToActivate
struct ModularGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms
{
	FGameplayTagContainer FailedReason;
};
static FName NAME_UModularGameplayAbility_ScriptOnAbilityFailedToActivate = FName(TEXT("ScriptOnAbilityFailedToActivate"));
void UModularGameplayAbility::ScriptOnAbilityFailedToActivate(FGameplayTagContainer const& FailedReason) const
{
	ModularGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms Parms;
	Parms.FailedReason=FailedReason;
	const_cast<UModularGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UModularGameplayAbility_ScriptOnAbilityFailedToActivate),&Parms);
}
struct Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the ability fails to activate\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability fails to activate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason = { "FailedReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms, FailedReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedReason_MetaData), NewProp_FailedReason_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::NewProp_FailedReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "ScriptOnAbilityFailedToActivate", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::PropPointers), sizeof(ModularGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModularGameplayAbility_eventScriptOnAbilityFailedToActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UModularGameplayAbility Function ScriptOnAbilityFailedToActivate

// Begin Class UModularGameplayAbility Function SetCameraMode
struct Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics
{
	struct ModularGameplayAbility_eventSetCameraMode_Parms
	{
		TSubclassOf<UModalCameraMode> CameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the ability's camera mode.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the ability's camera mode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UModalCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::ModularGameplayAbility_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::ModularGameplayAbility_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularGameplayAbility::execSetCameraMode)
{
	P_GET_OBJECT(UClass,Z_Param_CameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_CameraMode);
	P_NATIVE_END;
}
// End Class UModularGameplayAbility Function SetCameraMode

// Begin Class UModularGameplayAbility
void UModularGameplayAbility::StaticRegisterNativesUModularGameplayAbility()
{
	UClass* Class = UModularGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChangeActivationGroup", &UModularGameplayAbility::execCanChangeActivationGroup },
		{ "ChangeActivationGroup", &UModularGameplayAbility::execChangeActivationGroup },
		{ "ClearCameraMode", &UModularGameplayAbility::execClearCameraMode },
		{ "GetControllerFromActorInfo", &UModularGameplayAbility::execGetControllerFromActorInfo },
		{ "GetHeroComponentFromActorInfo", &UModularGameplayAbility::execGetHeroComponentFromActorInfo },
		{ "GetModularAbilitySystemComponentFromActorInfo", &UModularGameplayAbility::execGetModularAbilitySystemComponentFromActorInfo },
		{ "GetModularCharacterFromActorInfo", &UModularGameplayAbility::execGetModularCharacterFromActorInfo },
		{ "GetModularPlayerControllerFromActorInfo", &UModularGameplayAbility::execGetModularPlayerControllerFromActorInfo },
		{ "SetCameraMode", &UModularGameplayAbility::execSetCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularGameplayAbility);
UClass* Z_Construct_UClass_UModularGameplayAbility_NoRegister()
{
	return UModularGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UModularGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extends the GameplayAbility class with grouping, activation policies, and utility functions.\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "GameplayAbilities/ModularGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Extends the GameplayAbility class with grouping, activation policies, and utility functions." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extends the GameplayAbility class with grouping, activation policies, and utility functions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how this ability is meant to activate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to simple error messages\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to simple error messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogCancellation_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilities/ModularGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
	static void NewProp_bLogCancellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogCancellation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularGameplayAbility_CanChangeActivationGroup, "CanChangeActivationGroup" }, // 1824962697
		{ &Z_Construct_UFunction_UModularGameplayAbility_ChangeActivationGroup, "ChangeActivationGroup" }, // 3660773050
		{ &Z_Construct_UFunction_UModularGameplayAbility_ClearCameraMode, "ClearCameraMode" }, // 1511858963
		{ &Z_Construct_UFunction_UModularGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 116532762
		{ &Z_Construct_UFunction_UModularGameplayAbility_GetHeroComponentFromActorInfo, "GetHeroComponentFromActorInfo" }, // 1993967784
		{ &Z_Construct_UFunction_UModularGameplayAbility_GetModularAbilitySystemComponentFromActorInfo, "GetModularAbilitySystemComponentFromActorInfo" }, // 2591549850
		{ &Z_Construct_UFunction_UModularGameplayAbility_GetModularCharacterFromActorInfo, "GetModularCharacterFromActorInfo" }, // 1409231088
		{ &Z_Construct_UFunction_UModularGameplayAbility_GetModularPlayerControllerFromActorInfo, "GetModularPlayerControllerFromActorInfo" }, // 3130129804
		{ &Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 2282918138
		{ &Z_Construct_UFunction_UModularGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 3951880323
		{ &Z_Construct_UFunction_UModularGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 1267829982
		{ &Z_Construct_UFunction_UModularGameplayAbility_ScriptOnAbilityFailedToActivate, "ScriptOnAbilityFailedToActivate" }, // 4126526209
		{ &Z_Construct_UFunction_UModularGameplayAbility_SetCameraMode, "SetCameraMode" }, // 962404004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularGameplayAbility, ActivationPolicy), Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 703077375
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularGameplayAbility, ActivationGroup), Z_Construct_UEnum_ModularGameplayAbilities_EModularAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationGroup_MetaData), NewProp_ActivationGroup_MetaData) }; // 2856662333
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToUserFacingMessages_MetaData), NewProp_FailureTagToUserFacingMessages_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToAnimMontage_MetaData), NewProp_FailureTagToAnimMontage_MetaData) }; // 1298103297
void Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_bLogCancellation_SetBit(void* Obj)
{
	((UModularGameplayAbility*)Obj)->bLogCancellation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_bLogCancellation = { "bLogCancellation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularGameplayAbility), &Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_bLogCancellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogCancellation_MetaData), NewProp_bLogCancellation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_ActivationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_AdditionalCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularGameplayAbility_Statics::NewProp_bLogCancellation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularGameplayAbility_Statics::ClassParams = {
	&UModularGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbility_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UModularGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularGameplayAbility.OuterSingleton, Z_Construct_UClass_UModularGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularGameplayAbility.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularGameplayAbility>()
{
	return UModularGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularGameplayAbility);
UModularGameplayAbility::~UModularGameplayAbility() {}
// End Class UModularGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModularAbilityActivationPolicy_StaticEnum, TEXT("EModularAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EModularAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 703077375U) },
		{ EModularAbilityActivationGroup_StaticEnum, TEXT("EModularAbilityActivationGroup"), &Z_Registration_Info_UEnum_EModularAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2856662333U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularAbilityMontageFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics::NewStructOps, TEXT("ModularAbilityMontageFailureMessage"), &Z_Registration_Info_UScriptStruct_ModularAbilityMontageFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularAbilityMontageFailureMessage), 188546482U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularGameplayAbility, UModularGameplayAbility::StaticClass, TEXT("UModularGameplayAbility"), &Z_Registration_Info_UClass_UModularGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularGameplayAbility), 3082507166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_3373059281(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
