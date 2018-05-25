// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Openable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenable() {}
// Cross Module References
	RECOVERY_API UClass* Z_Construct_UClass_UOpenable_NoRegister();
	RECOVERY_API UClass* Z_Construct_UClass_UOpenable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Recovery();
	RECOVERY_API UFunction* Z_Construct_UFunction_UOpenable_Open();
// End Cross Module References
	void IOpenable::Open()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Open instead.");
	}
	void UOpenable::StaticRegisterNativesUOpenable()
	{
		UClass* Class = UOpenable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Open", (Native)&IOpenable::execOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UOpenable_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Openable" },
				{ "ModuleRelativePath", "Openable.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenable, "Open", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenable_NoRegister()
	{
		return UOpenable::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_Recovery,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UOpenable_Open, "Open" }, // 1770675336
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Openable.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IOpenable>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOpenable::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UOpenable, 1431951281);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenable(Z_Construct_UClass_UOpenable, &UOpenable::StaticClass, TEXT("/Script/Recovery"), TEXT("UOpenable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenable);
	static FName NAME_UOpenable_Open = FName(TEXT("Open"));
	void IOpenable::Execute_Open(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOpenable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UOpenable_Open);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IOpenable*)(O->GetNativeInterfaceAddress(UOpenable::StaticClass())))
		{
			I->Open_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
