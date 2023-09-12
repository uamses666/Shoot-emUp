#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUGameModeBase.h"
#include "STUGameOverWidgetWidget.generated.h"

class UVerticalBox;
class UButton;

UCLASS()
class SHOOTTHEMUP_API USTUGameOverWidgetWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UVerticalBox* PlayerStatBox;

    UPROPERTY(meta = (BindWidget))
    UButton* ResetLevelButton;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> PlayerStatRowWidgetClass;

    virtual void NativeOnInitialized() override; 

private:
    void OnMatchStateChanged(ESTUMatchState State);
    void UpdatePlayerStat();

    UFUNCTION()
    void OnResetLevel();
};
