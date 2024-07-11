// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/ModularGlobalAbilitySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UGameplayEffect;
#ifdef MODULARGAMEPLAYABILITIES_ModularGlobalAbilitySystem_generated_h
#error "ModularGlobalAbilitySystem.generated.h already included, missing '#pragma once' in ModularGlobalAbilitySystem.h"
#endif
#define MODULARGAMEPLAYABILITIES_ModularGlobalAbilitySystem_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlobalAppliedAbilityList_Statics; \
	MODULARGAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGlobalAppliedAbilityList>();

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlobalAppliedEffectList_Statics; \
	MODULARGAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGlobalAppliedEffectList>();

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveEffectFromAll); \
	DECLARE_FUNCTION(execRemoveAbilityFromAll); \
	DECLARE_FUNCTION(execApplyEffectToAll); \
	DECLARE_FUNCTION(execApplyAbilityToAll);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularGlobalAbilitySystem(); \
	friend struct Z_Construct_UClass_UModularGlobalAbilitySystem_Statics; \
public: \
	DECLARE_CLASS(UModularGlobalAbilitySystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularGameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UModularGlobalAbilitySystem)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularGlobalAbilitySystem(UModularGlobalAbilitySystem&&); \
	UModularGlobalAbilitySystem(const UModularGlobalAbilitySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularGlobalAbilitySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularGlobalAbilitySystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModularGlobalAbilitySystem) \
	NO_API virtual ~UModularGlobalAbilitySystem();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_39_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<class UModularGlobalAbilitySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGlobalAbilitySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
