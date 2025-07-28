#pragma once

#include "GameplayTagStack.h"
#include "ModularPlayerState.h"
#include "ActorComponent/ModularAbilitySystemComponent.h"
#include "Player/ModularExperiencePlayerState.h"

#include "ModularAbilityPlayerState.generated.h"

UCLASS(Config = "Game")
class MODULARGAMEPLAYABILITIES_API AModularAbilityPlayerState : public AModularExperiencePlayerState
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

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const;
public:
	/*Name of the AbilitySystem component. Use this name if you want to use a different class (with ObjectInitializer.SetDefaultSubobjectClass).*/
	static FName AbilitySystemComponentName;

private:
	// The ability system component sub-object used by player characters.
	UPROPERTY(VisibleAnywhere, Category = "ModularAbility|PlayerState")
	TObjectPtr<UModularAbilitySystemComponent> ModularAbilitySystemComponent;

	//UPROPERTY(Replicated)
	//FGameplayTagStackContainer StatTags;
};
