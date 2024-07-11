// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayAbilities/Public/ActorComponent/ModularAbilityExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAbilityExtensionComponent() {}

// Begin Cross Module References
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityExtensionComponent();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilityExtensionComponent_NoRegister();
MODULARGAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayAbilities();
// End Cross Module References

// Begin Class UModularAbilityExtensionComponent Function GetModularAbilitySystemComponent
struct Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics
{
	struct ModularAbilityExtensionComponent_eventGetModularAbilitySystemComponent_Parms
	{
		UModularAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AbilitySystem|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current ability system component, which may be owned by a different actor.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponent/ModularAbilityExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current ability system component, which may be owned by a different actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularAbilityExtensionComponent_eventGetModularAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularAbilityExtensionComponent, nullptr, "GetModularAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::ModularAbilityExtensionComponent_eventGetModularAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::ModularAbilityExtensionComponent_eventGetModularAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularAbilityExtensionComponent::execGetModularAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularAbilitySystemComponent**)Z_Param__Result=P_THIS->GetModularAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UModularAbilityExtensionComponent Function GetModularAbilitySystemComponent

// Begin Class UModularAbilityExtensionComponent
void UModularAbilityExtensionComponent::StaticRegisterNativesUModularAbilityExtensionComponent()
{
	UClass* Class = UModularAbilityExtensionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetModularAbilitySystemComponent", &UModularAbilityExtensionComponent::execGetModularAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAbilityExtensionComponent);
UClass* Z_Construct_UClass_UModularAbilityExtensionComponent_NoRegister()
{
	return UModularAbilityExtensionComponent::StaticClass();
}
struct Z_Construct_UClass_UModularAbilityExtensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Gameplay Feature System Pawn component extending Pawns.\n *\n * Adds activation groups with blockers and cancel tags, and input bindings for activating abilities.\n *\n * The GAS component also completely manages tags and tag-related queries for the owning actor,\n * which muddies the separation of concerns.\n *\n * Partially derived from ULyraHeroComponent, with the remaining features split to Modular Experience's InputComponent.\n *\n * @todo Refactor the parent class's tag management into a separate component.\n *\n * @see LyraGame/Character/LyraHeroComponent\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "ActorComponent/ModularAbilityExtensionComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularAbilityExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay Feature System Pawn component extending Pawns.\n\nAdds activation groups with blockers and cancel tags, and input bindings for activating abilities.\n\nThe GAS component also completely manages tags and tag-related queries for the owning actor,\nwhich muddies the separation of concerns.\n\nPartially derived from ULyraHeroComponent, with the remaining features split to Modular Experience's InputComponent.\n\n@todo Refactor the parent class's tag management into a separate component.\n\n@see LyraGame/Character/LyraHeroComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pointer to the ability system component that is cached for convenience.\n\x09 *\n\x09 * @todo Look at Unreal service/singleton model to replace this convoluted startup.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularAbilityExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the ability system component that is cached for convenience.\n\n@todo Look at Unreal service/singleton model to replace this convoluted startup." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularAbilityExtensionComponent_GetModularAbilitySystemComponent, "GetModularAbilitySystemComponent" }, // 3786194856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAbilityExtensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAbilityExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_UModularAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UModularAbilityExtensionComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::ClassParams = {
	&UModularAbilityExtensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAbilityExtensionComponent()
{
	if (!Z_Registration_Info_UClass_UModularAbilityExtensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAbilityExtensionComponent.OuterSingleton, Z_Construct_UClass_UModularAbilityExtensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAbilityExtensionComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<UModularAbilityExtensionComponent>()
{
	return UModularAbilityExtensionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAbilityExtensionComponent);
UModularAbilityExtensionComponent::~UModularAbilityExtensionComponent() {}
// End Class UModularAbilityExtensionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAbilityExtensionComponent, UModularAbilityExtensionComponent::StaticClass, TEXT("UModularAbilityExtensionComponent"), &Z_Registration_Info_UClass_UModularAbilityExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAbilityExtensionComponent), 285304755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_51990051(TEXT("/Script/ModularGameplayAbilities"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
