// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularAbilityPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModularAbilitySystemComponent;
struct FGameplayTag;
#ifdef MODULARGAMEPLAYABILITIES_ModularAbilityPlayerState_generated_h
#error "ModularAbilityPlayerState.generated.h already included, missing '#pragma once' in ModularAbilityPlayerState.h"
#endif
#define MODULARGAMEPLAYABILITIES_ModularAbilityPlayerState_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasStatTag); \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack); \
	DECLARE_FUNCTION(execGetModularAbilitySystemComponent);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularAbilityPlayerState(); \
	friend struct Z_Construct_UClass_AModularAbilityPlayerState_Statics; \
public: \
	DECLARE_CLASS(AModularAbilityPlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(AModularAbilityPlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StatTags=NETFIELD_REP_START, \
		NETFIELD_REP_END=StatTags	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularAbilityPlayerState(AModularAbilityPlayerState&&); \
	AModularAbilityPlayerState(const AModularAbilityPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularAbilityPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularAbilityPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularAbilityPlayerState) \
	NO_API virtual ~AModularAbilityPlayerState();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_9_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<class AModularAbilityPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_ModularAbilityPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
