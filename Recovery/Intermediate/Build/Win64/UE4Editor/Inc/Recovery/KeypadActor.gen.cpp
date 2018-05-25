// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "KeypadActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeypadActor() {}
// Cross Module References
	RECOVERY_API UClass* Z_Construct_UClass_AKeypadActor_NoRegister();
	RECOVERY_API UClass* Z_Construct_UClass_AKeypadActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Recovery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	RECOVERY_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void AKeypadActor::StaticRegisterNativesAKeypadActor()
	{
	}
	UClass* Z_Construct_UClass_AKeypadActor_NoRegister()
	{
		return AKeypadActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AKeypadActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Recovery,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input" },
				{ "IncludePath", "KeypadActor.h" },
				{ "ModuleRelativePath", "KeypadActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[] = {
				{ "Category", "KeypadActor" },
				{ "ModuleRelativePath", "KeypadActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Code = { UE4CodeGen_Private::EPropertyClass::Int, "Code", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKeypadActor, Code), METADATA_PARAMS(NewProp_Code_MetaData, ARRAY_COUNT(NewProp_Code_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetTemplate_MetaData[] = {
				{ "Category", "KeypadActor" },
				{ "ModuleRelativePath", "KeypadActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "WidgetTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AKeypadActor, WidgetTemplate), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WidgetTemplate_MetaData, ARRAY_COUNT(NewProp_WidgetTemplate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorToOpen_MetaData[] = {
				{ "Category", "KeypadActor" },
				{ "ModuleRelativePath", "KeypadActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorToOpen = { UE4CodeGen_Private::EPropertyClass::Object, "DoorToOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AKeypadActor, DoorToOpen), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_DoorToOpen_MetaData, ARRAY_COUNT(NewProp_DoorToOpen_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Code,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorToOpen,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AKeypadActor, IInteractable), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AKeypadActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AKeypadActor::StaticClass,
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
	IMPLEMENT_CLASS(AKeypadActor, 2888115603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeypadActor(Z_Construct_UClass_AKeypadActor, &AKeypadActor::StaticClass, TEXT("/Script/Recovery"), TEXT("AKeypadActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeypadActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
