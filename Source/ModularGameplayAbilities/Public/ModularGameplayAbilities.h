// Copyright Chronicler.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * Adds data-driven modular Experience and Data capabilities to the Gameplay Abilities System.
 *
 * Typical use case:
 * 1. Add the ModularAbilitySystemComponent to the PlayerState Actor.
 * 2. Add the ModularAbilityExtensionComponent to your ModularExperienceCharacter Pawn.
 * 3. Implement the PawnAbilityDataInterface into your game's PawnData class.
 * 4. Add PawnData Assets to your experience as usual, now including ability configurations.
 */
class FModularGameplayAbilitiesModule final : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
