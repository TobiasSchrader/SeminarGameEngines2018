// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Keypad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeypad() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_AKeypad_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_AKeypad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	void AKeypad::StaticRegisterNativesAKeypad()
	{
	}
	UClass* Z_Construct_UClass_AKeypad_NoRegister()
	{
		return AKeypad::StaticClass();
	}
	UClass* Z_Construct_UClass_AKeypad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Keypad.h" },
				{ "ModuleRelativePath", "Keypad.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetReference_MetaData[] = {
				{ "Category", "Widget To Load" },
				{ "ModuleRelativePath", "Keypad.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetReference = { UE4CodeGen_Private::EPropertyClass::Class, "WidgetReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AKeypad, WidgetReference), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WidgetReference_MetaData, ARRAY_COUNT(NewProp_WidgetReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorToOpen_MetaData[] = {
				{ "Category", "Keypad" },
				{ "ModuleRelativePath", "Keypad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorToOpen = { UE4CodeGen_Private::EPropertyClass::Object, "DoorToOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKeypad, DoorToOpen), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_DoorToOpen_MetaData, ARRAY_COUNT(NewProp_DoorToOpen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeypadMesh_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Keypad.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeypadMesh = { UE4CodeGen_Private::EPropertyClass::Object, "KeypadMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AKeypad, KeypadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_KeypadMesh_MetaData, ARRAY_COUNT(NewProp_KeypadMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorToOpen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeypadMesh,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AKeypad, IInteractionInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AKeypad>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AKeypad::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AKeypad, 3201621959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeypad(Z_Construct_UClass_AKeypad, &AKeypad::StaticClass, TEXT("/Script/TestGame"), TEXT("AKeypad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeypad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
