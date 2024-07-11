// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/ModularAbilitySourceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARGAMEPLAYABILITIES_ModularAbilitySourceInterface_generated_h
#error "ModularAbilitySourceInterface.generated.h already included, missing '#pragma once' in ModularAbilitySourceInterface.h"
#endif
#define MODULARGAMEPLAYABILITIES_ModularAbilitySourceInterface_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularAbilitySourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularAbilitySourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularAbilitySourceInterface(UModularAbilitySourceInterface&&); \
	UModularAbilitySourceInterface(const UModularAbilitySourceInterface&); \
public: \
	NO_API virtual ~UModularAbilitySourceInterface();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUModularAbilitySourceInterface(); \
	friend struct Z_Construct_UClass_UModularAbilitySourceInterface_Statics; \
public: \
	DECLARE_CLASS(UModularAbilitySourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularGameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UModularAbilitySourceInterface)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IModularAbilitySourceInterface() {} \
public: \
	typedef UModularAbilitySourceInterface UClassType; \
	typedef IModularAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_14_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYABILITIES_API UClass* StaticClass<class UModularAbilitySourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayAbilities_Source_ModularGameplayAbilities_Public_GameplayAbilities_ModularAbilitySourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
