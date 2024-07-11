// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/ModularAbilityPlayerState.h"
#include "ModularGameplayExperiences/Public/GameplayTagStack.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilityPlayerState() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AModularAbilityPlayerState();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AModularAbilityPlayerState_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class AModularAbilityPlayerState Function AddStatTagStack
struct Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics
{
	struct ModularAbilityPlayerState_eventAddStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1).\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a specified number of stacks to the tag (does nothing if StackCount is below 1)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAbilityPlayerState, nullptr, "AddStatTagStack", nullptr, nullptr, Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::ModularAbilityPlayerState_eventAddStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::ModularAbilityPlayerState_eventAddStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularAbilityPlayerState::execAddStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class AModularAbilityPlayerState Function AddStatTagStack

// Begin Class AModularAbilityPlayerState Function GetModularAbilitySystemComponent
struct Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics
{
	struct ModularAbilityPlayerState_eventGetModularAbilitySystemComponent_Parms
	{
		UModularAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|PlayerState" },
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventGetModularAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAbilityPlayerState, nullptr, "GetModularAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::ModularAbilityPlayerState_eventGetModularAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::ModularAbilityPlayerState_eventGetModularAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularAbilityPlayerState::execGetModularAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularAbilitySystemComponent**)Z_Param__Result=P_THIS->GetModularAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AModularAbilityPlayerState Function GetModularAbilitySystemComponent

// Begin Class AModularAbilityPlayerState Function GetStatTagStackCount
struct Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics
{
	struct ModularAbilityPlayerState_eventGetStatTagStackCount_Parms
	{
		FGameplayTag Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the stack count of the specified tag (or 0 if the tag is not present).\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the stack count of the specified tag (or 0 if the tag is not present)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAbilityPlayerState, nullptr, "GetStatTagStackCount", nullptr, nullptr, Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::ModularAbilityPlayerState_eventGetStatTagStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::ModularAbilityPlayerState_eventGetStatTagStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularAbilityPlayerState::execGetStatTagStackCount)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class AModularAbilityPlayerState Function GetStatTagStackCount

// Begin Class AModularAbilityPlayerState Function HasStatTag
struct Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics
{
	struct ModularAbilityPlayerState_eventHasStatTag_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if there is at least one stack of the specified tag.\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there is at least one stack of the specified tag." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventHasStatTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModularAbilityPlayerState_eventHasStatTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularAbilityPlayerState_eventHasStatTag_Parms), &Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAbilityPlayerState, nullptr, "HasStatTag", nullptr, nullptr, Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::ModularAbilityPlayerState_eventHasStatTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::ModularAbilityPlayerState_eventHasStatTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularAbilityPlayerState::execHasStatTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasStatTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class AModularAbilityPlayerState Function HasStatTag

// Begin Class AModularAbilityPlayerState Function RemoveStatTagStack
struct Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics
{
	struct ModularAbilityPlayerState_eventRemoveStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1).\n" },
#endif
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a specified number of stacks from the tag (does nothing if StackCount is below 1)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityPlayerState_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAbilityPlayerState, nullptr, "RemoveStatTagStack", nullptr, nullptr, Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::ModularAbilityPlayerState_eventRemoveStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::ModularAbilityPlayerState_eventRemoveStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularAbilityPlayerState::execRemoveStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class AModularAbilityPlayerState Function RemoveStatTagStack

// Begin Class AModularAbilityPlayerState
void AModularAbilityPlayerState::StaticRegisterNativesAModularAbilityPlayerState()
{
	UClass* Class = AModularAbilityPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddStatTagStack", &AModularAbilityPlayerState::execAddStatTagStack },
		{ "GetModularAbilitySystemComponent", &AModularAbilityPlayerState::execGetModularAbilitySystemComponent },
		{ "GetStatTagStackCount", &AModularAbilityPlayerState::execGetStatTagStackCount },
		{ "HasStatTag", &AModularAbilityPlayerState::execHasStatTag },
		{ "RemoveStatTagStack", &AModularAbilityPlayerState::execRemoveStatTagStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularAbilityPlayerState);
UClass* Z_Construct_UClass_AModularAbilityPlayerState_NoRegister()
{
	return AModularAbilityPlayerState::StaticClass();
}
struct Z_Construct_UClass_AModularAbilityPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularAbilityPlayerState.h" },
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularAbilitySystemComponent_MetaData[] = {
		{ "Category", "ModularAbility|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component sub-object used by player characters.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component sub-object used by player characters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularAbilityPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularAbilitySystemComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularAbilityPlayerState_AddStatTagStack, "AddStatTagStack" }, // 3774875941
		{ &Z_Construct_UFunction_AModularAbilityPlayerState_GetModularAbilitySystemComponent, "GetModularAbilitySystemComponent" }, // 1879182762
		{ &Z_Construct_UFunction_AModularAbilityPlayerState_GetStatTagStackCount, "GetStatTagStackCount" }, // 4028902474
		{ &Z_Construct_UFunction_AModularAbilityPlayerState_HasStatTag, "HasStatTag" }, // 353247567
		{ &Z_Construct_UFunction_AModularAbilityPlayerState_RemoveStatTagStack, "RemoveStatTagStack" }, // 3420219967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularAbilityPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAbilityPlayerState_Statics::NewProp_ModularAbilitySystemComponent = { "ModularAbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularAbilityPlayerState, ModularAbilitySystemComponent), Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularAbilitySystemComponent_MetaData), NewProp_ModularAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularAbilityPlayerState_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularAbilityPlayerState, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTags_MetaData), NewProp_StatTags_MetaData) }; // 997298907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularAbilityPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAbilityPlayerState_Statics::NewProp_ModularAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAbilityPlayerState_Statics::NewProp_StatTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularAbilityPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModularAbilityPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularAbilityPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularAbilityPlayerState_Statics::ClassParams = {
	&AModularAbilityPlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModularAbilityPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModularAbilityPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularAbilityPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularAbilityPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularAbilityPlayerState()
{
	if (!Z_Registration_Info_UClass_AModularAbilityPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularAbilityPlayerState.OuterSingleton, Z_Construct_UClass_AModularAbilityPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularAbilityPlayerState.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<AModularAbilityPlayerState>()
{
	return AModularAbilityPlayerState::StaticClass();
}
void AModularAbilityPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StatTags(TEXT("StatTags"));
	const bool bIsValid = true
		&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AModularAbilityPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularAbilityPlayerState);
AModularAbilityPlayerState::~AModularAbilityPlayerState() {}
// End Class AModularAbilityPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularAbilityPlayerState, AModularAbilityPlayerState::StaticClass, TEXT("AModularAbilityPlayerState"), &Z_Registration_Info_UClass_AModularAbilityPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularAbilityPlayerState), 2839029289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_3149074537(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
