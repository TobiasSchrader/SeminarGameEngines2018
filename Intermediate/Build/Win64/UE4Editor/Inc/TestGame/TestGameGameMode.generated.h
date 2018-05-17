// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_TestGameGameMode_generated_h
#error "TestGameGameMode.generated.h already included, missing '#pragma once' in TestGameGameMode.h"
#endif
#define TESTGAME_TestGameGameMode_generated_h

#define TestGame_Source_TestGame_TestGameGameMode_h_12_RPC_WRAPPERS
#define TestGame_Source_TestGame_TestGameGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_TestGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGameGameMode(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_ATestGameGameMode(); \
public: \
	DECLARE_CLASS(ATestGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/TestGame"), TESTGAME_API) \
	DECLARE_SERIALIZER(ATestGameGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_TestGameGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestGameGameMode(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_ATestGameGameMode(); \
public: \
	DECLARE_CLASS(ATestGameGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/TestGame"), TESTGAME_API) \
	DECLARE_SERIALIZER(ATestGameGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_TestGameGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTGAME_API ATestGameGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGameGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTGAME_API, ATestGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTGAME_API ATestGameGameMode(ATestGameGameMode&&); \
	TESTGAME_API ATestGameGameMode(const ATestGameGameMode&); \
public:


#define TestGame_Source_TestGame_TestGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTGAME_API ATestGameGameMode(ATestGameGameMode&&); \
	TESTGAME_API ATestGameGameMode(const ATestGameGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTGAME_API, ATestGameGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGameGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestGameGameMode)


#define TestGame_Source_TestGame_TestGameGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_TestGameGameMode_h_9_PROLOG
#define TestGame_Source_TestGame_TestGameGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_TestGameGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_TestGameGameMode_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_TestGameGameMode_h_12_INCLASS \
	TestGame_Source_TestGame_TestGameGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_TestGameGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_TestGameGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_TestGameGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_TestGameGameMode_h_12_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_TestGameGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_TestGameGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
