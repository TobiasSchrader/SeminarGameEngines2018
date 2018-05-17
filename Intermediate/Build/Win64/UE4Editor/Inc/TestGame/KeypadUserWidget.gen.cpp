// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "KeypadUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeypadUserWidget() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_UKeypadUserWidget_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_UKeypadUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked0();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked1();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked2();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked3();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked4();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked5();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked6();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked7();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked8();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked9();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClickedOK();
	TESTGAME_API UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClickedR();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	void UKeypadUserWidget::StaticRegisterNativesUKeypadUserWidget()
	{
		UClass* Class = UKeypadUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClicked", (Native)&UKeypadUserWidget::execOnButtonClicked },
			{ "OnButtonClicked0", (Native)&UKeypadUserWidget::execOnButtonClicked0 },
			{ "OnButtonClicked1", (Native)&UKeypadUserWidget::execOnButtonClicked1 },
			{ "OnButtonClicked2", (Native)&UKeypadUserWidget::execOnButtonClicked2 },
			{ "OnButtonClicked3", (Native)&UKeypadUserWidget::execOnButtonClicked3 },
			{ "OnButtonClicked4", (Native)&UKeypadUserWidget::execOnButtonClicked4 },
			{ "OnButtonClicked5", (Native)&UKeypadUserWidget::execOnButtonClicked5 },
			{ "OnButtonClicked6", (Native)&UKeypadUserWidget::execOnButtonClicked6 },
			{ "OnButtonClicked7", (Native)&UKeypadUserWidget::execOnButtonClicked7 },
			{ "OnButtonClicked8", (Native)&UKeypadUserWidget::execOnButtonClicked8 },
			{ "OnButtonClicked9", (Native)&UKeypadUserWidget::execOnButtonClicked9 },
			{ "OnButtonClickedOK", (Native)&UKeypadUserWidget::execOnButtonClickedOK },
			{ "OnButtonClickedR", (Native)&UKeypadUserWidget::execOnButtonClickedR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked()
	{
		struct KeypadUserWidget_eventOnButtonClicked_Parms
		{
			UButton* button;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button = { UE4CodeGen_Private::EPropertyClass::Object, "button", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(KeypadUserWidget_eventOnButtonClicked_Parms, button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_button_MetaData, ARRAY_COUNT(NewProp_button_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_button,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(KeypadUserWidget_eventOnButtonClicked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked0", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked1", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked3", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked4", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked5", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked6()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked6", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked7()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked7", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked8", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked9()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClicked9", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClickedOK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClickedOK", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UKeypadUserWidget_OnButtonClickedR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UKeypadUserWidget, "OnButtonClickedR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKeypadUserWidget_NoRegister()
	{
		return UKeypadUserWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UKeypadUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked, "OnButtonClicked" }, // 3887827747
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked0, "OnButtonClicked0" }, // 2166938026
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked1, "OnButtonClicked1" }, // 1139321145
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked2, "OnButtonClicked2" }, // 6890811
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked3, "OnButtonClicked3" }, // 3265877416
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked4, "OnButtonClicked4" }, // 2271886655
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked5, "OnButtonClicked5" }, // 1168788908
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked6, "OnButtonClicked6" }, // 103530926
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked7, "OnButtonClicked7" }, // 3303780669
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked8, "OnButtonClicked8" }, // 2376929408
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClicked9, "OnButtonClicked9" }, // 1332568083
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClickedOK, "OnButtonClickedOK" }, // 4167047906
				{ &Z_Construct_UFunction_UKeypadUserWidget_OnButtonClickedR, "OnButtonClickedR" }, // 1448102083
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "KeypadUserWidget.h" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorToOpen_MetaData[] = {
				{ "Category", "KeypadUserWidget" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorToOpen = { UE4CodeGen_Private::EPropertyClass::Object, "DoorToOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, DoorToOpen), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_DoorToOpen_MetaData, ARRAY_COUNT(NewProp_DoorToOpen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyR_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_keyR = { UE4CodeGen_Private::EPropertyClass::Object, "keyR", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, keyR), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_keyR_MetaData, ARRAY_COUNT(NewProp_keyR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyOK_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_keyOK = { UE4CodeGen_Private::EPropertyClass::Object, "keyOK", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, keyOK), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_keyOK_MetaData, ARRAY_COUNT(NewProp_keyOK_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key9_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key9 = { UE4CodeGen_Private::EPropertyClass::Object, "key9", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key9), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key9_MetaData, ARRAY_COUNT(NewProp_key9_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key8_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key8 = { UE4CodeGen_Private::EPropertyClass::Object, "key8", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key8), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key8_MetaData, ARRAY_COUNT(NewProp_key8_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key7_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key7 = { UE4CodeGen_Private::EPropertyClass::Object, "key7", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key7), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key7_MetaData, ARRAY_COUNT(NewProp_key7_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key6_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key6 = { UE4CodeGen_Private::EPropertyClass::Object, "key6", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key6), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key6_MetaData, ARRAY_COUNT(NewProp_key6_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key5_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key5 = { UE4CodeGen_Private::EPropertyClass::Object, "key5", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key5), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key5_MetaData, ARRAY_COUNT(NewProp_key5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key4_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key4 = { UE4CodeGen_Private::EPropertyClass::Object, "key4", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key4), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key4_MetaData, ARRAY_COUNT(NewProp_key4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key3_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key3 = { UE4CodeGen_Private::EPropertyClass::Object, "key3", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key3), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key3_MetaData, ARRAY_COUNT(NewProp_key3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key2_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key2 = { UE4CodeGen_Private::EPropertyClass::Object, "key2", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key2_MetaData, ARRAY_COUNT(NewProp_key2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key1_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key1 = { UE4CodeGen_Private::EPropertyClass::Object, "key1", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key1_MetaData, ARRAY_COUNT(NewProp_key1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key0_MetaData[] = {
				{ "BindWidget", "" },
				{ "Category", "KeypadUserWidget" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key0 = { UE4CodeGen_Private::EPropertyClass::Object, "key0", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, key0), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(NewProp_key0_MetaData, ARRAY_COUNT(NewProp_key0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, WidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_WidgetInstance_MetaData, ARRAY_COUNT(NewProp_WidgetInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNewWidgetName_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_MyNewWidgetName = { UE4CodeGen_Private::EPropertyClass::Str, "MyNewWidgetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, MyNewWidgetName), METADATA_PARAMS(NewProp_MyNewWidgetName_MetaData, ARRAY_COUNT(NewProp_MyNewWidgetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "KeypadUserWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code = { UE4CodeGen_Private::EPropertyClass::Str, "Code", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UKeypadUserWidget, Code), METADATA_PARAMS(NewProp_Code_MetaData, ARRAY_COUNT(NewProp_Code_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorToOpen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_keyR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_keyOK,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key9,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key8,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key7,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key6,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyNewWidgetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Code,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(UKeypadUserWidget, IInteractionInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKeypadUserWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKeypadUserWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKeypadUserWidget, 1817929170);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKeypadUserWidget(Z_Construct_UClass_UKeypadUserWidget, &UKeypadUserWidget::StaticClass, TEXT("/Script/TestGame"), TEXT("UKeypadUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeypadUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
