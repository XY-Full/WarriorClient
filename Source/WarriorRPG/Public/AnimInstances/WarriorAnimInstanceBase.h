// Learn test by xyc.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "WarriorAnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class WARRIORRPG_API UWarriorAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	bool DoesOwnerHasTag(FGameplayTag TagToCheck) const;
};
