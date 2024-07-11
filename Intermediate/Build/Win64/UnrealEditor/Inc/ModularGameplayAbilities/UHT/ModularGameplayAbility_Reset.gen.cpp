// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/GameplayAbilities/Abilities/ModularGameplayAbility_Reset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameplayAbility_Reset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbility();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbility_Reset();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularGameplayAbility_Reset_NoRegister();
MODULARGAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModularPlayerResetMessage();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularGameplayAbility_Reset
void UModularGameplayAbility_Reset::StaticRegisterNativesUModularGameplayAbility_Reset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularGameplayAbility_Reset);
UClass* Z_Construct_UClass_UModularGameplayAbility_Reset_NoRegister()
{
	return UModularGameplayAbility_Reset::StaticClass();
}
struct Z_Construct_UClass_UModularGameplayAbility_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UModularGameplayAbility_Reset\n *\n *\x09Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n *\x09""Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only).\n */" },
#endif
		{ "HideCategories", "Input" },
		{ "IncludePath", "GameplayAbilities/Abilities/ModularGameplayAbility_Reset.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/Abilities/ModularGameplayAbility_Reset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModularGameplayAbility_Reset\n\n    Gameplay ability used for handling quickly resetting the player back to initial spawn state.\n    Ability is activated automatically via the \"GameplayEvent.RequestReset\" ability trigger tag (server only)." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularGameplayAbility_Reset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularGameplayAbility_Reset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UModularGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbility_Reset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularGameplayAbility_Reset_Statics::ClassParams = {
	&UModularGameplayAbility_Reset::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameplayAbility_Reset_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularGameplayAbility_Reset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularGameplayAbility_Reset()
{
	if (!Z_Registration_Info_UClass_UModularGameplayAbility_Reset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularGameplayAbility_Reset.OuterSingleton, Z_Construct_UClass_UModularGameplayAbility_Reset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularGameplayAbility_Reset.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularGameplayAbility_Reset>()
{
	return UModularGameplayAbility_Reset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularGameplayAbility_Reset);
UModularGameplayAbility_Reset::~UModularGameplayAbility_Reset() {}
// End Class UModularGameplayAbility_Reset

// Begin ScriptStruct FModularPlayerResetMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage;
class UScriptStruct* FModularPlayerResetMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularPlayerResetMessage, (UObject*)Z_Construct_UPackage__Script_ModularGameplayAbilities(), TEXT("ModularPlayerResetMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModularPlayerResetMessage>()
{
	return FModularPlayerResetMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/Abilities/ModularGameplayAbility_Reset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayerState_MetaData[] = {
		{ "Category", "ModularPlayerResetMessage" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/Abilities/ModularGameplayAbility_Reset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularPlayerResetMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::NewProp_OwnerPlayerState = { "OwnerPlayerState", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularPlayerResetMessage, OwnerPlayerState), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPlayerState_MetaData), NewProp_OwnerPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::NewProp_OwnerPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
	nullptr,
	&NewStructOps,
	"ModularPlayerResetMessage",
	Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::PropPointers),
	sizeof(FModularPlayerResetMessage),
	alignof(FModularPlayerResetMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularPlayerResetMessage()
{
	if (!Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage.InnerSingleton, Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage.InnerSingleton;
}
// End ScriptStruct FModularPlayerResetMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularGameplayAbility_Reset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularPlayerResetMessage::StaticStruct, Z_Construct_UScriptStruct_FModularPlayerResetMessage_Statics::NewStructOps, TEXT("ModularPlayerResetMessage"), &Z_Registration_Info_UScriptStruct_ModularPlayerResetMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularPlayerResetMessage), 1151102416U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularGameplayAbility_Reset, UModularGameplayAbility_Reset::StaticClass, TEXT("UModularGameplayAbility_Reset"), &Z_Registration_Info_UClass_UModularGameplayAbility_Reset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularGameplayAbility_Reset), 1150202291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularGameplayAbility_Reset_h_1731636433(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularGameplayAbility_Reset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularGameplayAbility_Reset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularGameplayAbility_Reset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_Abilities_ModularGameplayAbility_Reset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
