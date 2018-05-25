// Fill out your copyright notice in the Description page of Project Settings.

#include "KeypadUserWidget.h"
#include "Openable.h"
#include "Kismet/GameplayStatics.h"
#include "MyPlayerController.h"

void UKeypadUserWidget::NativeConstruct()
{
	input = 0;
	key0->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked0);
	key1->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked1);
	key2->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked2);
	key3->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked3);
	key4->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked4);
	key5->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked5);
	key6->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked6);
	key7->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked7);
	key8->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked8);
	key9->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClicked9);
	keyOK->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClickedOK);
	keyR->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClickedR);
	btnBack->OnClicked.AddDynamic(this, &UKeypadUserWidget::OnButtonClickedBack);
}

void UKeypadUserWidget::OnButtonClicked0() { HandleButtonClick(0); }
void UKeypadUserWidget::OnButtonClicked1() { HandleButtonClick(1); }
void UKeypadUserWidget::OnButtonClicked2() { HandleButtonClick(2); }
void UKeypadUserWidget::OnButtonClicked3() { HandleButtonClick(3); }
void UKeypadUserWidget::OnButtonClicked4() { HandleButtonClick(4); }
void UKeypadUserWidget::OnButtonClicked5() { HandleButtonClick(5); }
void UKeypadUserWidget::OnButtonClicked6() { HandleButtonClick(6); }
void UKeypadUserWidget::OnButtonClicked7() { HandleButtonClick(7); }
void UKeypadUserWidget::OnButtonClicked8() { HandleButtonClick(8); }
void UKeypadUserWidget::OnButtonClicked9() { HandleButtonClick(9); }
void UKeypadUserWidget::OnButtonClickedOK() { HandleButtonClick(TEXT("OK")); }
void UKeypadUserWidget::OnButtonClickedR() { HandleButtonClick(TEXT("R")); }
void UKeypadUserWidget::OnButtonClickedBack() { HandleButtonClick(TEXT("Back")); }

void UKeypadUserWidget::HandleButtonClick(int i)
{
	UE_LOG(LogTemp, Warning, TEXT("Button clicked"));
	input *= 10;
	input += i;
}

void UKeypadUserWidget::HandleButtonClick(FString s)
{
	UE_LOG(LogTemp, Warning, TEXT("Button clicked"));
	if (s == TEXT("OK"))
	{
		if (input == Code)
		{
			if (DoorToOpen->GetClass()->ImplementsInterface(UOpenable::StaticClass()))
			{
				IOpenable::Execute_Open(DoorToOpen);
			}
			Close();
		}
		else
		{
			input = 0;
		}
	}
	else if (s == TEXT("R"))
	{
		input = 0;
	}
	else if (s == TEXT("BACK"))
	{
		input = 0;
		Close();
	}
}

void UKeypadUserWidget::Close()
{
	input = 0;
	AMyPlayerController* playerController = Cast<AMyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	playerController->CloseUserWidget();
}
