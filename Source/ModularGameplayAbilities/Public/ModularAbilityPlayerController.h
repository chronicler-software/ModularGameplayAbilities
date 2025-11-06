#pragma once

#include "CoreMinimal.h"
#include "ModularPlayerController.h"
#include "ModularAbilityPlayerController.generated.h"

class UModularAbilitySystemComponent;

UCLASS(Config = "Game")
class MODULARGAMEPLAYABILITIES_API AModularAbilityPlayerController : public AModularPlayerController
{
	GENERATED_BODY()

public:
	AModularAbilityPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void OnPossess(APawn* APawn) override;
	virtual void OnUnPossess() override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

	UModularAbilitySystemComponent* GetAbilitySystemComponent() const;

protected:
	virtual void OnRep_PlayerState() override;

private:
	// Cache ASC for input processing purposes
	UPROPERTY(BlueprintReadOnly, Category = AbilitySystem, meta=(AllowPrivateAccess="true"))
	TWeakObjectPtr<UModularAbilitySystemComponent> AbilitySystemComponent;
};
