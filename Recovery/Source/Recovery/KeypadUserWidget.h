// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "KeypadUserWidget.generated.h"
/**
 */
UCLASS()
class RECOVERY_API UKeypadUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, Category = "General Settings")
		int Code;

	int input;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key0;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key3;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key4;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key5;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key6;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key7;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key8;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* key9;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* keyOK;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* keyR;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* btnBack;

	UFUNCTION()
	void OnButtonClicked1();
	UFUNCTION()
		void OnButtonClicked2();
	UFUNCTION()
		void OnButtonClicked3();
	UFUNCTION()
		void OnButtonClicked4();
	UFUNCTION()
		void OnButtonClicked5();
	UFUNCTION()
		void OnButtonClicked6();
	UFUNCTION()
		void OnButtonClicked7();
	UFUNCTION()
		void OnButtonClicked8();
	UFUNCTION()
		void OnButtonClicked9();
	UFUNCTION()
		void OnButtonClicked0();
	UFUNCTION()
		void OnButtonClickedOK();
	UFUNCTION()
		void OnButtonClickedR();
	UFUNCTION()
		void OnButtonClickedBack();

	void HandleButtonClick(int i);
	void HandleButtonClick(FString s);
	
	void NativeConstruct() override;
	
	AActor* DoorToOpen;

	void Close();

};
