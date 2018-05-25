// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RECOVERY_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	//AMyPlayerController(FObjectInitializer objInitializer);

	UUserWidget* Widget;

	void OpenUserWidget(TSubclassOf<UUserWidget> widget);

	void CloseUserWidget();
	
	void InitUKeypadUserWidget(AActor* door, int Code);

};
