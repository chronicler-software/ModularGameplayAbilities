// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Private/GameplayAbilities/ModularAbilitySimpleFailureMessage.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilitySimpleFailureMessage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin ScriptStruct FModularAbilitySimpleFailureMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage;
class UScriptStruct* FModularAbilitySimpleFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularAbilitySimpleFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularAbilitySimpleFailureMessage>()
{
	return FModularAbilitySimpleFailureMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/GameplayAbilities/ModularAbilitySimpleFailureMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "ModularAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "Private/GameplayAbilities/ModularAbilitySimpleFailureMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "ModularAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "Private/GameplayAbilities/ModularAbilitySimpleFailureMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingReason_MetaData[] = {
		{ "Category", "ModularAbilitySimpleFailureMessage" },
		{ "ModuleRelativePath", "Private/GameplayAbilities/ModularAbilitySimpleFailureMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UserFacingReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularAbilitySimpleFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySimpleFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySimpleFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 3352185621
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason = { "UserFacingReason", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularAbilitySimpleFailureMessage, UserFacingReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserFacingReason_MetaData), NewProp_UserFacingReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewProp_UserFacingReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularAbilitySimpleFailureMessage",
	Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::PropPointers),
	sizeof(FModularAbilitySimpleFailureMessage),
	alignof(FModularAbilitySimpleFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage.InnerSingleton;
}
// End ScriptStruct FModularAbilitySimpleFailureMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Private_GameplayAbilities_ModularAbilitySimpleFailureMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularAbilitySimpleFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FModularAbilitySimpleFailureMessage_Statics::NewStructOps, TEXT("ModularAbilitySimpleFailureMessage"), &Z_Registration_Info_UScriptStruct_ModularAbilitySimpleFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularAbilitySimpleFailureMessage), 868217599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Private_GameplayAbilities_ModularAbilitySimpleFailureMessage_h_772601793(TEXT("/Script/ModularGameplayAbilities"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Private_GameplayAbilities_ModularAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Private_GameplayAbilities_ModularAbilitySimpleFailureMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
