// Copyright Chronicler.

#pragma once

#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagsAnimInstance.generated.h"

/**
 * Adds support for gameplay tags to the base game animation instance class.
 *
 * This should be used to avoid polling for Pawn gameplay tags in animation blueprints.
 *
 * FGameplayTagBlueprintPropertyMap has a hard dependency on the Ability System Component, since the component
 * also tracks the gameplay tags.
 *
 * @todo This should be relocated to a separate GameplayTags plugin once the ASC dependency is extricated.
 *
 * @see https://dev.epicgames.com/community/learning/tutorials/n2nJ/unreal-engine-fgameplaytagblueprintpropertymap-the-tag-watcher
 */
UCLASS(Config = Game)
class UGameplayTagsAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UGameplayTagsAnimInstance(const FObjectInitializer& ObjectInitializer);

	/**
	 * Initializes the animation instance with the ability system component.
	 *
	 * @param AbilityComponent The ability system component to initialize with.
	 *
	 * @todo Remove this.
	 */
	virtual void InitializeWithAbilitySystem(UAbilitySystemComponent* AbilityComponent);

protected:

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif

	virtual void NativeInitializeAnimation() override;

protected:

	// Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.
	// These should be used instead of manually querying for the gameplay tags.
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.0f;
};
