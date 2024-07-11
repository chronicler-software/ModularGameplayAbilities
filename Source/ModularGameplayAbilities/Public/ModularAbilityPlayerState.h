#pragma once

#include "GameplayTagStack.h"
#include "ModularPlayerState.h"
#include "ActorComponent/ModularAbilitySystemComponent.h"

#include "ModularAbilityPlayerState.generated.h"

UCLASS(Config = "Game")
class MODULARGAMEPLAYABILITIES_API AModularAbilityPlayerState : public AModularPlayerState
{
	GENERATED_BODY()

public:
	AModularAbilityPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Lyra|PlayerState")
	UModularAbilitySystemComponent* GetModularAbilitySystemComponent() const { return ModularAbilitySystemComponent; }
	virtual UModularAbilitySystemComponent* GetAbilitySystemComponent() const;

	// Adds a specified number of stacks to the tag (does nothing if StackCount is below 1).
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "ModularAbility")
	void AddStatTagStack(FGameplayTag Tag, int32 StackCount);

	// Removes a specified number of stacks from the tag (does nothing if StackCount is below 1).
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "ModularAbility")
	void RemoveStatTagStack(FGameplayTag Tag, int32 StackCount);

	// Returns the stack count of the specified tag (or 0 if the tag is not present).
	UFUNCTION(BlueprintCallable, Category = "ModularAbility")
	int32 GetStatTagStackCount(FGameplayTag Tag) const;

	// Returns true if there is at least one stack of the specified tag.
	UFUNCTION(BlueprintCallable, Category = "ModularAbility")
	bool HasStatTag(FGameplayTag Tag) const;

private:
	// The ability system component sub-object used by player characters.
	UPROPERTY(VisibleAnywhere, Category = "ModularAbility|PlayerState")
	TObjectPtr<UModularAbilitySystemComponent> ModularAbilitySystemComponent;

	UPROPERTY(Replicated)
	FGameplayTagStackContainer StatTags;
};
