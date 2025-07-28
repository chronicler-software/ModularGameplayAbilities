#include "ModularAbilityPlayerState.h"

#include "ActorComponent/ModularAbilitySystemComponent.h"
#include "GameplayTagStack.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularAbilityPlayerState)

FName AModularAbilityPlayerState::AbilitySystemComponentName(TEXT("ModularAbilitySystemComponent"));

AModularAbilityPlayerState::AModularAbilityPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ModularAbilitySystemComponent = CreateDefaultSubobject<UModularAbilitySystemComponent>(AModularAbilityPlayerState::AbilitySystemComponentName);
}

UModularAbilitySystemComponent* AModularAbilityPlayerState::GetAbilitySystemComponent() const
{
	return GetModularAbilitySystemComponent();
}

void AModularAbilityPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void AModularAbilityPlayerState::AddStatTagStack(FGameplayTag Tag, int32 StackCount)
{
	StatTags.AddStack(Tag, StackCount);
}

void AModularAbilityPlayerState::RemoveStatTagStack(FGameplayTag Tag, int32 StackCount)
{
	StatTags.RemoveStack(Tag, StackCount);
}

int32 AModularAbilityPlayerState::GetStatTagStackCount(FGameplayTag Tag) const
{
	return StatTags.GetStackCount(Tag);
}

bool AModularAbilityPlayerState::HasStatTag(FGameplayTag Tag) const
{
	return StatTags.ContainsTag(Tag);
}
