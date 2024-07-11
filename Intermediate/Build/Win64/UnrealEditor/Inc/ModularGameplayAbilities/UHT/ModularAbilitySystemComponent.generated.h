// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponent/ModularAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FGameplayTagContainer;
#ifdef MODULARGAMEPLAYABILITIES_ModularAbilitySystemComponent_generated_h
#error "ModularAbilitySystemComponent.generated.h already included, missing '#pragma once' in ModularAbilitySystemComponent.h"
#endif
#define MODULARGAMEPLAYABILITIES_ModularAbilitySystemComponent_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* Ability, FGameplayTagContainer const& FailureReason); \
	DECLARE_FUNCTION(execClientNotifyAbilityFailed);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UModularAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UModularAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UModularAbilitySystemComponent)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularAbilitySystemComponent(UModularAbilitySystemComponent&&); \
	UModularAbilitySystemComponent(const UModularAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularAbilitySystemComponent) \
	NO_API virtual ~UModularAbilitySystemComponent();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_26_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<class UModularAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
