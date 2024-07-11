// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/ActorComponent/ModularAbilitySystemComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySystemComponent();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityTagRelationshipMapping_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularAbilitySystemComponent Function ClientNotifyAbilityFailed
struct ModularAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms
{
	const UGameplayAbility* Ability;
	FGameplayTagContainer FailureReason;
};
static FName NAME_UModularAbilitySystemComponent_ClientNotifyAbilityFailed = FName(TEXT("ClientNotifyAbilityFailed"));
void UModularAbilitySystemComponent::ClientNotifyAbilityFailed(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason)
{
	ModularAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms Parms;
	Parms.Ability=Ability;
	Parms.FailureReason=FailureReason;
	ProcessEvent(FindFunctionChecked(NAME_UModularAbilitySystemComponent_ClientNotifyAbilityFailed),&Parms);
}
struct Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notify client that an ability failed to activate */" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponent/ModularAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify client that an ability failed to activate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms, FailureReason), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularAbilitySystemComponent, nullptr, "ClientNotifyAbilityFailed", nullptr, nullptr, Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::PropPointers), sizeof(ModularAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModularAbilitySystemComponent_eventClientNotifyAbilityFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularAbilitySystemComponent::execClientNotifyAbilityFailed)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_Ability);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_FailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientNotifyAbilityFailed_Implementation(Z_Param_Ability,Z_Param_FailureReason);
	P_NATIVE_END;
}
// End Class UModularAbilitySystemComponent Function ClientNotifyAbilityFailed

// Begin Class UModularAbilitySystemComponent
void UModularAbilitySystemComponent::StaticRegisterNativesUModularAbilitySystemComponent()
{
	UClass* Class = UModularAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientNotifyAbilityFailed", &UModularAbilitySystemComponent::execClientNotifyAbilityFailed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilitySystemComponent);
UClass* Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister()
{
	return UModularAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UModularAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Gameplay Feature System component extending the Gameplay Ability System Component with Enhanced Input.\n *\n * Adds activation groups with blockers and cancel tags, and input tags for activating abilities.\n * Requires the ModularAbilityExtensionComponent if you want to bind inputs to the input tags on dynamic load.\n * The GAS component also completely manages tags and tag-related queries for the owning actor,\n * which muddies the separation of concerns.\n * For runtime binding, add to both the ModularPlayerCharacter and ModularPlayerState.\n * Note: ModularAbilityExtensionComponent will automatically add this system component from the possessing player state.\n *\n * @todo Refactor the parent class's tag management into a separate component.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "ActorComponent/ModularAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Feature System component extending the Gameplay Ability System Component with Enhanced Input.\n\nAdds activation groups with blockers and cancel tags, and input tags for activating abilities.\nRequires the ModularAbilityExtensionComponent if you want to bind inputs to the input tags on dynamic load.\nThe GAS component also completely manages tags and tag-related queries for the owning actor,\nwhich muddies the separation of concerns.\nFor runtime binding, add to both the ModularPlayerCharacter and ModularPlayerState.\nNote: ModularAbilityExtensionComponent will automatically add this system component from the possessing player state.\n\n@todo Refactor the parent class's tag management into a separate component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponent/ModularAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularAbilitySystemComponent_ClientNotifyAbilityFailed, "ClientNotifyAbilityFailed" }, // 1551198479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_UModularAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilitySystemComponent_Statics::ClassParams = {
	&UModularAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UModularAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UModularAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilitySystemComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilitySystemComponent>()
{
	return UModularAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilitySystemComponent);
UModularAbilitySystemComponent::~UModularAbilitySystemComponent() {}
// End Class UModularAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilitySystemComponent, UModularAbilitySystemComponent::StaticClass, TEXT("UModularAbilitySystemComponent"), &Z_Registration_Info_UClass_UModularAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilitySystemComponent), 219178752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_3119369587(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
