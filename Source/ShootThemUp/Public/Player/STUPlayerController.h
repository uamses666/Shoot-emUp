#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "STUGameModeBase.h"
#include "STUPlayerController.generated.h"

class USTURespawnComponent;

UCLASS()
class SHOOTTHEMUP_API ASTUPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ASTUPlayerController();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USTURespawnComponent* STURespawnComponent;

    virtual void SetupInputComponent() override;
    virtual void BeginPlay() override;

private:
    void OnPauseGame();
    void OnMatchStateChange(ESTUMatchState State);
};
