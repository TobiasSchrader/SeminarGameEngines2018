// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestGameGameMode() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_ATestGameGameMode_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_ATestGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void ATestGameGameMode::StaticRegisterNativesATestGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestGameGameMode_NoRegister()
	{
		return ATestGameGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TestGameGameMode.h" },
				{ "ModuleRelativePath", "TestGameGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawn_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "TestGameGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn = { UE4CodeGen_Private::EPropertyClass::Object, "pawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATestGameGameMode, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_pawn_MetaData, ARRAY_COUNT(NewProp_pawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[] = {
				{ "Category", "Custom" },
				{ "ModuleRelativePath", "TestGameGameMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller = { UE4CodeGen_Private::EPropertyClass::Object, "controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATestGameGameMode, controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(NewProp_controller_MetaData, ARRAY_COUNT(NewProp_controller_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_controller,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATestGameGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATestGameGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestGameGameMode, 779333772);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestGameGameMode(Z_Construct_UClass_ATestGameGameMode, &ATestGameGameMode::StaticClass, TEXT("/Script/TestGame"), TEXT("ATestGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
