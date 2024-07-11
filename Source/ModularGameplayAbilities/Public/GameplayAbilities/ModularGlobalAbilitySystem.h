// Copyright Chronicler.

#pragma once

#include "ActiveGameplayEffectHandle.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayAbilitySpecHandle.h"
#include "ActorComponent/ModularAbilitySystemComponent.h"
#include "Templates/SubclassOf.h"

#include "ModularGlobalAbilitySystem.generated.h"

USTRUCT()
struct FGlobalAppliedAbilityList
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<TObjectPtr<UModularAbilitySystemComponent>, FGameplayAbilitySpecHandle> Handles;

	void AddToAbilityComponent(TSubclassOf<UGameplayAbility> Ability, UModularAbilitySystemComponent* AbilityComponent);
	void RemoveFromAbilityComponent(UModularAbilitySystemComponent* AbilityComponent);
	void RemoveFromAll();
};

USTRUCT()
struct FGlobalAppliedEffectList
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<TObjectPtr<UModularAbilitySystemComponent>, FActiveGameplayEffectHandle> Handles;

	void AddToAbilityComponent(TSubclassOf<UGameplayEffect> Effect, UModularAbilitySystemComponent* AbilityComponent);
	void RemoveFromAbilityComponent(UModularAbilitySystemComponent* AbilityComponent);
	void RemoveFromAll();
};

UCLASS()
class UModularGlobalAbilitySystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UModularGlobalAbilitySystem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Modular")
	void ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Modular")
	void ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Modular")
	void RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Modular")
	void RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect);

	/** Register an AbilityComponent with global system and apply any active global effects/abilities. */
	void RegisterAbilityComponent(UModularAbilitySystemComponent* AbilityComponent);

	/** Removes an AbilityComponent from the global system, along with any active global effects/abilities. */
	void UnregisterAbilityComponent(UModularAbilitySystemComponent* AbilityComponent);

private:
	UPROPERTY()
	TMap<TSubclassOf<UGameplayAbility>, FGlobalAppliedAbilityList> AppliedAbilities;

	UPROPERTY()
	TMap<TSubclassOf<UGameplayEffect>, FGlobalAppliedEffectList> AppliedEffects;

	UPROPERTY()
	TArray<TObjectPtr<UModularAbilitySystemComponent>> RegisteredAbilityComponents;
};
