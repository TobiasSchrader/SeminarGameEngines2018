// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define TESTGAME_Quest_generated_h

#define TestGame_Source_TestGame_Quest_h_12_RPC_WRAPPERS
#define TestGame_Source_TestGame_Quest_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_Quest_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AQuest(); \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AQuest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_Quest_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AQuest(); \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AQuest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_Quest_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public:


#define TestGame_Source_TestGame_Quest_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuest)


#define TestGame_Source_TestGame_Quest_h_12_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_Quest_h_9_PROLOG
#define TestGame_Source_TestGame_Quest_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Quest_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_Quest_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_Quest_h_12_INCLASS \
	TestGame_Source_TestGame_Quest_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_Quest_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Quest_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_Quest_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Quest_h_12_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Quest_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_Quest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
