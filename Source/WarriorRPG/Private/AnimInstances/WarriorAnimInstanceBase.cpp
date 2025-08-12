// Learn test by xyc.


#include "AnimInstances/WarriorAnimInstanceBase.h"
#include "WarriorFunctionLibrary.h"

bool UWarriorAnimInstanceBase::DoesOwnerHasTag(FGameplayTag TagToCheck) const
{
    if (APawn* OwningPawn = TryGetPawnOwner())
    {
        return UWarriorFunctionLibrary::NativeDoesActorHaveTag(OwningPawn, TagToCheck);
    }
    return false;
}
