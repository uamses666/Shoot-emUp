#include "Menu/UI/STUMenuHUD.h"
#include "Blueprint/UserWidget.h"

void ASTUMenuHUD::BeginPlay()
{
    Super::BeginPlay();

    const auto MenuWidget = CreateWidget<UUserWidget>(GetWorld(), MenuWidgetClass);
    if (MenuWidget)
    {
        MenuWidget->AddToViewport();
    }
}
