// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/ModularGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class AModularCharacter;
class AModularPlayerController;
class UModalCameraMode;
class UModularAbilitySystemComponent;
class UModularPawnComponent;
enum class EModularAbilityActivationGroup : uint8;
struct FGameplayTagContainer;
#ifdef MODULARGAMEPLAYABILITIES_ModularGameplayAbility_generated_h
#error "ModularGameplayAbility.generated.h already included, missing '#pragma once' in ModularGameplayAbility.h"
#endif
#define MODULARGAMEPLAYABILITIES_ModularGameplayAbility_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularAbilityMontageFailureMessage_Statics; \
	MODULARGAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> MODULARGAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FModularAbilityMontageFailureMessage>();

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execChangeActivationGroup); \
	DECLARE_FUNCTION(execCanChangeActivationGroup); \
	DECLARE_FUNCTION(execGetHeroComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetModularCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetModularPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetModularAbilitySystemComponentFromActorInfo);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularGameplayAbility(); \
	friend struct Z_Construct_UClass_UModularGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UModularGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModularGameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UModularGameplayAbility)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularGameplayAbility(UModularGameplayAbility&&); \
	UModularGameplayAbility(const UModularGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularGameplayAbility); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularGameplayAbility) \
	NO_API virtual ~UModularGameplayAbility();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_72_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<class UModularGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularGameplayAbility_h


#define FOREACH_ENUM_EMODULARABILITYACTIVATIONPOLICY(op) \
	op(EModularAbilityActivationPolicy::OnInputTriggered) \
	op(EModularAbilityActivationPolicy::WhileInputActive) \
	op(EModularAbilityActivationPolicy::OnSpawn) 

enum class EModularAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EModularAbilityActivationPolicy> { enum { Value = true }; };
template<> MODULARGAMEPLAYABILITIES_API UEnum* StaticEnum<EModularAbilityActivationPolicy>();

#define FOREACH_ENUM_EMODULARABILITYACTIVATIONGROUP(op) \
	op(EModularAbilityActivationGroup::Independent) \
	op(EModularAbilityActivationGroup::Exclusive_Replaceable) \
	op(EModularAbilityActivationGroup::Exclusive_Blocking) 

enum class EModularAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<EModularAbilityActivationGroup> { enum { Value = true }; };
template<> MODULARGAMEPLAYABILITIES_API UEnum* StaticEnum<EModularAbilityActivationGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
