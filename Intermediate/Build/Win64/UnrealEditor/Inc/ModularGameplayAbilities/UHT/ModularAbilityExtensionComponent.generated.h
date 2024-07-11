// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponent/ModularAbilityExtensionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModularAbilitySystemComponent;
#ifdef MODULARGAMEPLAYABILITIES_ModularAbilityExtensionComponent_generated_h
#error "ModularAbilityExtensionComponent.generated.h already included, missing '#pragma once' in ModularAbilityExtensionComponent.h"
#endif
#define MODULARGAMEPLAYABILITIES_ModularAbilityExtensionComponent_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModularAbilitySystemComponent);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularAbilityExtensionComponent(); \
	friend struct Z_Construct_UClass_UModularAbilityExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(UModularAbilityExtensionComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UModularAbilityExtensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UModularAbilityExtensionComponent*>(this); }


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularAbilityExtensionComponent(UModularAbilityExtensionComponent&&); \
	UModularAbilityExtensionComponent(const UModularAbilityExtensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularAbilityExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularAbilityExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularAbilityExtensionComponent) \
	NO_API virtual ~UModularAbilityExtensionComponent();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_20_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<class UModularAbilityExtensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ActorComponent_ModularAbilityExtensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
