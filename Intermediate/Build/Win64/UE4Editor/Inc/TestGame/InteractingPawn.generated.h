// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_InteractingPawn_generated_h
#error "InteractingPawn.generated.h already included, missing '#pragma once' in InteractingPawn.h"
#endif
#define TESTGAME_InteractingPawn_generated_h

#define TestGame_Source_TestGame_InteractingPawn_h_15_RPC_WRAPPERS
#define TestGame_Source_TestGame_InteractingPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_InteractingPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractingPawn(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AInteractingPawn(); \
public: \
	DECLARE_CLASS(AInteractingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AInteractingPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_InteractingPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteractingPawn(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AInteractingPawn(); \
public: \
	DECLARE_CLASS(AInteractingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AInteractingPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_InteractingPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractingPawn(AInteractingPawn&&); \
	NO_API AInteractingPawn(const AInteractingPawn&); \
public:


#define TestGame_Source_TestGame_InteractingPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractingPawn(AInteractingPawn&&); \
	NO_API AInteractingPawn(const AInteractingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractingPawn)


#define TestGame_Source_TestGame_InteractingPawn_h_15_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_InteractingPawn_h_12_PROLOG
#define TestGame_Source_TestGame_InteractingPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_InteractingPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_InteractingPawn_h_15_RPC_WRAPPERS \
	TestGame_Source_TestGame_InteractingPawn_h_15_INCLASS \
	TestGame_Source_TestGame_InteractingPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_InteractingPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_InteractingPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_InteractingPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_InteractingPawn_h_15_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_InteractingPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_InteractingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
