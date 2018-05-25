// Fill out your copyright notice in the Description page of Project Settings.

#include "KeypadActor.h"
#include "ConstructorHelpers.h"
#include "Engine/StaticMesh.h"
#include "Openable.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "MyPlayerController.h"

AKeypadActor::AKeypadActor()
{
	HasBeenPushed = false;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Meshes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		//GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
		GetStaticMeshComponent()->bGenerateOverlapEvents = true;
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.3, 0.03, 0.5));
	SetActorEnableCollision(true);

	DoorToOpen = nullptr;
}

bool AKeypadActor::CanInteract_Implementation()
{
	return true;// !HasBeenPushed;
}

void AKeypadActor::PerformInteract_Implementation()
{
	//HasBeenPushed = true;
	AMyPlayerController* playerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	playerController->OpenUserWidget(WidgetTemplate);
	playerController->InitUKeypadUserWidget(DoorToOpen, Code);
	/*if (DoorToOpen->GetClass()->ImplementsInterface(UOpenable::StaticClass()))
	{
		IOpenable::Execute_Open(DoorToOpen);
	}*/
}
