// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InteractingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractingPawn() {}
// Cross Module References
	TESTGAME_API UClass* Z_Construct_UClass_AInteractingPawn_NoRegister();
	TESTGAME_API UClass* Z_Construct_UClass_AInteractingPawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UPackage* Z_Construct_UPackage__Script_TestGame();
// End Cross Module References
	void AInteractingPawn::StaticRegisterNativesAInteractingPawn()
	{
	}
	UClass* Z_Construct_UClass_AInteractingPawn_NoRegister()
	{
		return AInteractingPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
				(UObject* (*)())Z_Construct_UPackage__Script_TestGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "InteractingPawn.h" },
				{ "ModuleRelativePath", "InteractingPawn.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AInteractingPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AInteractingPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractingPawn, 1356705108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractingPawn(Z_Construct_UClass_AInteractingPawn, &AInteractingPawn::StaticClass, TEXT("/Script/TestGame"), TEXT("AInteractingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
