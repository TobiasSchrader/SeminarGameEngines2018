// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_TestGamePlayerController_generated_h
#error "TestGamePlayerController.generated.h already included, missing '#pragma once' in TestGamePlayerController.h"
#endif
#define TESTGAME_TestGamePlayerController_generated_h

#define TestGame_Source_TestGame_TestGamePlayerController_h_15_RPC_WRAPPERS
#define TestGame_Source_TestGame_TestGamePlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_TestGamePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestGamePlayerController(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_ATestGamePlayerController(); \
public: \
	DECLARE_CLASS(ATestGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(ATestGamePlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_TestGamePlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestGamePlayerController(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_ATestGamePlayerController(); \
public: \
	DECLARE_CLASS(ATestGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(ATestGamePlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_TestGamePlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGamePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGamePlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGamePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGamePlayerController(ATestGamePlayerController&&); \
	NO_API ATestGamePlayerController(const ATestGamePlayerController&); \
public:


#define TestGame_Source_TestGame_TestGamePlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestGamePlayerController(ATestGamePlayerController&&); \
	NO_API ATestGamePlayerController(const ATestGamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestGamePlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestGamePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestGamePlayerController)


#define TestGame_Source_TestGame_TestGamePlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_TestGamePlayerController_h_12_PROLOG
#define TestGame_Source_TestGame_TestGamePlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_RPC_WRAPPERS \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_INCLASS \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_TestGamePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_TestGamePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_TestGamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
