#include "Animations/STUAnimNotify.h"

void USTUAnimNotify::Notify(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    OnNotified.Broadcast(MeshComp);
    UAnimNotify::Notify(MeshComp, Animation, EventReference);
}
