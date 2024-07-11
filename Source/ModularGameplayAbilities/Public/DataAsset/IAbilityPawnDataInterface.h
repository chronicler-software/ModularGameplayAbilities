#pragma once

#include "GameplayAbilities/ModularAbilitySet.h"
#include "GameplayAbilities/ModularAbilityTagRelationshipMapping.h"

#include "IAbilityPawnDataInterface.generated.h"

UINTERFACE(MinimalAPI, NotBlueprintable)
class UAbilityPawnDataInterface: public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for extending PawnData with Ability information.
 */
class MODULARGAMEPLAYABILITIES_API IAbilityPawnDataInterface
{
	GENERATED_BODY()

public:
	/**
	 * Returns the pawn data's ability set property.
	 *
	 * @code TArray<TObjectPtr<UModularAbilitySet>> AbilitySets;
	 *
	 * @return UModularAbilitySet*.
	 */
	virtual TArray<UModularAbilitySet*> GetAbilitySet() const;

	/**
	 * Returns the pawn data's tag relationship mapping property.
	 *
	 * @code TObjectPtr<UModularAbilityTagRelationshipMapping> TagRelationshipMapping;
	 *
	 * @return UModularAbilityTagRelationshipMapping*.
	 */
	virtual UModularAbilityTagRelationshipMapping* GetTagRelationshipMapping() const;
};
