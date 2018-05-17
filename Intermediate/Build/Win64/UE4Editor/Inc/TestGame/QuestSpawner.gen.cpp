// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "QuestSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSpawner() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_AQuestSpawner_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_AQuestSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestGame();
	TESTGAME_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	void AQuestSpawner::StaticRegisterNativesAQuestSpawner()
	{
	}
	UClass* Z_Construct_UClass_AQuestSpawner_NoRegister()
	{
		return AQuestSpawner::StaticClass();
	}
	UClass* Z_Construct_UClass_AQuestSpawner()
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
				{ "IncludePath", "QuestSpawner.h" },
				{ "ModuleRelativePath", "QuestSpawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AQuestSpawner, IInteractionInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AQuestSpawner>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AQuestSpawner::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestSpawner, 1743654392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestSpawner(Z_Construct_UClass_AQuestSpawner, &AQuestSpawner::StaticClass, TEXT("/Script/TestGame"), TEXT("AQuestSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
