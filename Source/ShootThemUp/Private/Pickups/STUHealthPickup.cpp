#include "Pickups/STUHealthPickup.h"
#include "STUUtils.h"
#include "Components/STUHealthComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogHealthPickup, All, All);

bool ASTUHealthPickup::GivePickupTo(APawn* PlayerPawn)
{
    const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(PlayerPawn);
    if (!HealthComponent || HealthComponent->IsDead()) return false;

    //UE_LOG(LogHealthPickup, Display, TEXT("Ammo was Taken"));
    return HealthComponent->TryToHeal(HealthAmount);
}
