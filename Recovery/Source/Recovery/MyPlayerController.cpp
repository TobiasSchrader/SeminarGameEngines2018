// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Slate.h"
#include "Door.h"
#include "KeypadUserWidget.h"
#include "Kismet/GameplayStatics.h"

void AMyPlayerController::OpenUserWidget(TSubclassOf<UUserWidget> widget)
{
	if (widget)
	{
		if (!Widget)
		{
			AMyPlayerController* playerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			Widget = CreateWidget<UUserWidget>(playerController, widget);
		}
		if (!Widget->GetIsVisible())
		{
			Widget->AddToViewport();
		}
		FInputModeUIOnly Mode;
		Mode.SetWidgetToFocus(Widget->GetCachedWidget());
		SetInputMode(Mode);
		bShowMouseCursor = true;
	}
}

void AMyPlayerController::CloseUserWidget()
{
	if (Widget)
	{
		Widget->RemoveFromViewport();
		Widget = nullptr;
	}

	FInputModeGameOnly GameMode;
	SetInputMode(GameMode);
	FSlateApplication::Get().SetAllUserFocusToGameViewport();
	bShowMouseCursor = false;
}

void AMyPlayerController::InitUKeypadUserWidget(AActor* door, int Code)
{
	if (Widget)
	{
		Cast<UKeypadUserWidget>(Widget)->DoorToOpen = door;
		Cast<UKeypadUserWidget>(Widget)->Code = Code;
	}
}