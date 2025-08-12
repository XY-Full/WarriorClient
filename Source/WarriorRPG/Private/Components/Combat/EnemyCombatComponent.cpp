// Learn test by xyc.


#include "Components/Combat/EnemyCombatComponent.h"
#include "WarriorGameplayTags.h"
#include "AbilitySystemBlueprintLibrary.h"

#include "WarriorDebugHelper.h"

void UEnemyCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	check(HitActor);
	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}

	OverlappedActors.AddUnique(HitActor);

	// TODO:: Assign value
	bool IsValidBlock = false;
	bool IsPlayerBlocking = false;

	if (IsValidBlock)
	{
		// TODO
	}
	else
	{
		FGameplayEventData Data;
		Data.Instigator = GetOwningPawn();
		Data.Target = HitActor;

		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			GetOwningPawn(),
			WarriorGameplayTags::Shared_Event_MeleeHit,
			Data
		);
	}
}
