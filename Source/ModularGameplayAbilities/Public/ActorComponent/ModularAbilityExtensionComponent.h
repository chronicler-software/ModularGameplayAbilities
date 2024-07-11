#pragma once
#include "ModularAbilitySystemComponent.h"

#include "ModularAbilityExtensionComponent.generated.h"

/**
 * Gameplay Feature System Pawn component extending Pawns.
 *
 * Adds activation groups with blockers and cancel tags, and input bindings for activating abilities.
 *
 * The GAS component also completely manages tags and tag-related queries for the owning actor,
 * which muddies the separation of concerns.
 *
 * Partially derived from ULyraHeroComponent, with the remaining features split to Modular Experience's InputComponent.
 *
 * @todo Refactor the parent class's tag management into a separate component.
 *
 * @see LyraGame/Character/LyraHeroComponent
 */
UCLASS(ClassGroup=AbilitySystem, hidecategories=(Object,LOD,Lighting,Transform,Sockets,TextureStreaming), editinlinenew, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAYABILITIES_API UModularAbilityExtensionComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	UModularAbilityExtensionComponent(const FObjectInitializer& ObjectInitializer);

	void InitializeAbilitySystem(UModularAbilitySystemComponent* InASC, AActor* InOwnerActor);

	void UninitializeAbilitySystem();

	/**
	 * Gets the current ability system component, which may be owned by a different actor.
	 */
	UFUNCTION(BlueprintPure, Category = "AbilitySystem|Pawn")
	UModularAbilitySystemComponent* GetModularAbilitySystemComponent() const { return AbilitySystemComponent; }

	void HandleControllerChanged();
	void InitializePlayerInput(UInputComponent* PlayerInputComponent);
	void InputActionMapping(UInputComponent* PlayerInputComponent, const APawn* Pawn);
	void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(FGameplayTag InputTag);

	/**
	 * @ingroup IGameFrameworkInitStateInterface
	 * @{
	 */

	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	virtual void CheckDefaultInitialization() override;

	static const FName NAME_ActorFeatureName;
	/**
	 * @}
	 */

protected:
	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/**
	 * Pointer to the ability system component that is cached for convenience.
	 *
	 * @todo Look at Unreal service/singleton model to replace this convoluted startup.
	 */
	UPROPERTY()
	TObjectPtr<UModularAbilitySystemComponent> AbilitySystemComponent;

	/** Delegate fired when our pawn becomes the ability system's avatar actor */
	FSimpleMulticastDelegate OnAbilitySystemInitialized;

	/** Delegate fired when our pawn is removed as the ability system's avatar actor */
	FSimpleMulticastDelegate OnAbilitySystemUninitialized;
};
