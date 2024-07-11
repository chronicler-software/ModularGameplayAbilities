// Copyright Chronicler.

#include "GameplayAbilities/ModularGlobalAbilitySystem.h"

#include "ActorComponent/ModularAbilitySystemComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularGlobalAbilitySystem)

void FGlobalAppliedAbilityList::AddToAbilityComponent(TSubclassOf<UGameplayAbility> Ability, UModularAbilitySystemComponent* AbilityComponent)
{
	if (Handles.Find(AbilityComponent))
	{
		RemoveFromAbilityComponent(AbilityComponent);
	}

	UGameplayAbility* AbilityCDO = Ability->GetDefaultObject<UGameplayAbility>();
	const FGameplayAbilitySpec AbilitySpec(AbilityCDO);
	const FGameplayAbilitySpecHandle AbilitySpecHandle = AbilityComponent->GiveAbility(AbilitySpec);
	Handles.Add(AbilityComponent, AbilitySpecHandle);
}

void FGlobalAppliedAbilityList::RemoveFromAbilityComponent(UModularAbilitySystemComponent* AbilityComponent)
{
	if (const FGameplayAbilitySpecHandle* SpecHandle = Handles.Find(AbilityComponent))
	{
		AbilityComponent->ClearAbility(*SpecHandle);
		Handles.Remove(AbilityComponent);
	}
}

void FGlobalAppliedAbilityList::RemoveFromAll()
{
	for (auto& Handle : Handles)
	{
		if (Handle.Key != nullptr)
		{
			Handle.Key->ClearAbility(Handle.Value);
		}
	}
	Handles.Empty();
}

void FGlobalAppliedEffectList::AddToAbilityComponent(TSubclassOf<UGameplayEffect> Effect, UModularAbilitySystemComponent* AbilityComponent)
{
	if (FActiveGameplayEffectHandle* EffectHandle = Handles.Find(AbilityComponent))
	{
		RemoveFromAbilityComponent(AbilityComponent);
	}

	const UGameplayEffect* GameplayEffectCDO = Effect->GetDefaultObject<UGameplayEffect>();
	// @todo: Level should be a parameter.
	const FActiveGameplayEffectHandle GameplayEffectHandle = AbilityComponent->ApplyGameplayEffectToSelf(GameplayEffectCDO, 1, AbilityComponent->MakeEffectContext());
	Handles.Add(AbilityComponent, GameplayEffectHandle);
}

void FGlobalAppliedEffectList::RemoveFromAbilityComponent(UModularAbilitySystemComponent* AbilityComponent)
{
	if (const FActiveGameplayEffectHandle* EffectHandle = Handles.Find(AbilityComponent))
	{
		AbilityComponent->RemoveActiveGameplayEffect(*EffectHandle);
		Handles.Remove(AbilityComponent);
	}
}

void FGlobalAppliedEffectList::RemoveFromAll()
{
	for (auto& Handle : Handles)
	{
		if (Handle.Key != nullptr)
		{
			Handle.Key->RemoveActiveGameplayEffect(Handle.Value);
		}
	}
	Handles.Empty();
}

UModularGlobalAbilitySystem::UModularGlobalAbilitySystem()
{
}

void UModularGlobalAbilitySystem::ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability)
{
	if ((Ability.Get() != nullptr) && (!AppliedAbilities.Contains(Ability)))
	{
		FGlobalAppliedAbilityList& Entry = AppliedAbilities.Add(Ability);		
		for (UModularAbilitySystemComponent* AbilityComponent : RegisteredAbilityComponents)
		{
			Entry.AddToAbilityComponent(Ability, AbilityComponent);
		}
	}
}

void UModularGlobalAbilitySystem::ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect)
{
	if ((Effect.Get() != nullptr) && (!AppliedEffects.Contains(Effect)))
	{
		FGlobalAppliedEffectList& Entry = AppliedEffects.Add(Effect);
		for (UModularAbilitySystemComponent* AbilityComponent : RegisteredAbilityComponents)
		{
			Entry.AddToAbilityComponent(Effect, AbilityComponent);
		}
	}
}

void UModularGlobalAbilitySystem::RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability)
{
	if ((Ability.Get() != nullptr) && AppliedAbilities.Contains(Ability))
	{
		FGlobalAppliedAbilityList& Entry = AppliedAbilities[Ability];
		Entry.RemoveFromAll();
		AppliedAbilities.Remove(Ability);
	}
}

void UModularGlobalAbilitySystem::RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect)
{
	if ((Effect.Get() != nullptr) && AppliedEffects.Contains(Effect))
	{
		FGlobalAppliedEffectList& Entry = AppliedEffects[Effect];
		Entry.RemoveFromAll();
		AppliedEffects.Remove(Effect);
	}
}

void UModularGlobalAbilitySystem::RegisterAbilityComponent(UModularAbilitySystemComponent* AbilityComponent)
{
	check(AbilityComponent);

	for (auto& Entry : AppliedAbilities)
	{
		Entry.Value.AddToAbilityComponent(Entry.Key, AbilityComponent);
	}
	for (auto& Entry : AppliedEffects)
	{
		Entry.Value.AddToAbilityComponent(Entry.Key, AbilityComponent);
	}

	RegisteredAbilityComponents.AddUnique(AbilityComponent);
}

void UModularGlobalAbilitySystem::UnregisterAbilityComponent(UModularAbilitySystemComponent* AbilityComponent)
{
	check(AbilityComponent);
	for (auto& Entry : AppliedAbilities)
	{
		Entry.Value.RemoveFromAbilityComponent(AbilityComponent);
	}
	for (auto& Entry : AppliedEffects)
	{
		Entry.Value.RemoveFromAbilityComponent(AbilityComponent);
	}

	RegisteredAbilityComponents.Remove(AbilityComponent);
}
