// Learn test by xyc.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/WarriorAnimInstanceBase.h"
#include "WarriorHeroLinkedAnimLayer.generated.h"

class UWarriorHeroAnimInstance;

/**
 * 
 */
UCLASS()
class WARRIORRPG_API UWarriorHeroLinkedAnimLayer : public UWarriorAnimInstanceBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UWarriorHeroAnimInstance* GetHeroAnimInstance() const;
	
};
