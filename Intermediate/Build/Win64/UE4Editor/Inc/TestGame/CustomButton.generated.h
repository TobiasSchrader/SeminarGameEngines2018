// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_CustomButton_generated_h
#error "CustomButton.generated.h already included, missing '#pragma once' in CustomButton.h"
#endif
#define TESTGAME_CustomButton_generated_h

#define TestGame_Source_TestGame_CustomButton_h_15_RPC_WRAPPERS
#define TestGame_Source_TestGame_CustomButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_CustomButton_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomButton(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_UCustomButton(); \
public: \
	DECLARE_CLASS(UCustomButton, UButton, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(UCustomButton) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_CustomButton_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCustomButton(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_UCustomButton(); \
public: \
	DECLARE_CLASS(UCustomButton, UButton, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(UCustomButton) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_CustomButton_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomButton(UCustomButton&&); \
	NO_API UCustomButton(const UCustomButton&); \
public:


#define TestGame_Source_TestGame_CustomButton_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomButton(UCustomButton&&); \
	NO_API UCustomButton(const UCustomButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomButton)


#define TestGame_Source_TestGame_CustomButton_h_15_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_CustomButton_h_12_PROLOG
#define TestGame_Source_TestGame_CustomButton_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_CustomButton_h_15_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_CustomButton_h_15_RPC_WRAPPERS \
	TestGame_Source_TestGame_CustomButton_h_15_INCLASS \
	TestGame_Source_TestGame_CustomButton_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_CustomButton_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_CustomButton_h_15_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_CustomButton_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_CustomButton_h_15_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_CustomButton_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_CustomButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
