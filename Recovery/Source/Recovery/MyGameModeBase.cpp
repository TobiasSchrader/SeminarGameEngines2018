// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameModeBase.h"
#include "RecoveryHUD.h"
#include "RecoveryCharacter.h"
#include "ConstructorHelpers.h"
#include "MyPlayerController.h"

AMyGameModeBase::AMyGameModeBase() : Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARecoveryHUD::StaticClass();

	PlayerControllerClass = AMyPlayerController::StaticClass();
}


