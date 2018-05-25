// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Interactable.h"
#include "KeypadActor.generated.h"
/**
 * 
 */
UCLASS()
class RECOVERY_API AKeypadActor : public AStaticMeshActor, public IInteractable
{
	GENERATED_BODY()
	
public:
	AKeypadActor();
	virtual bool CanInteract_Implementation() override;
	virtual void PerformInteract_Implementation() override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		AActor* DoorToOpen;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSubclassOf<UUserWidget> WidgetTemplate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Code;
private:
	bool HasBeenPushed;
	
	
};
