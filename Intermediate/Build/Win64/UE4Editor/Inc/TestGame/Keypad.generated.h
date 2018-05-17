// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_Keypad_generated_h
#error "Keypad.generated.h already included, missing '#pragma once' in Keypad.h"
#endif
#define TESTGAME_Keypad_generated_h

#define TestGame_Source_TestGame_Keypad_h_12_RPC_WRAPPERS
#define TestGame_Source_TestGame_Keypad_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_Keypad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeypad(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AKeypad(); \
public: \
	DECLARE_CLASS(AKeypad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AKeypad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AKeypad*>(this); }


#define TestGame_Source_TestGame_Keypad_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKeypad(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AKeypad(); \
public: \
	DECLARE_CLASS(AKeypad, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AKeypad) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AKeypad*>(this); }


#define TestGame_Source_TestGame_Keypad_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeypad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeypad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeypad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeypad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeypad(AKeypad&&); \
	NO_API AKeypad(const AKeypad&); \
public:


#define TestGame_Source_TestGame_Keypad_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeypad(AKeypad&&); \
	NO_API AKeypad(const AKeypad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeypad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeypad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeypad)


#define TestGame_Source_TestGame_Keypad_h_12_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_Keypad_h_9_PROLOG
#define TestGame_Source_TestGame_Keypad_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Keypad_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_Keypad_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_Keypad_h_12_INCLASS \
	TestGame_Source_TestGame_Keypad_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_Keypad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Keypad_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_Keypad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Keypad_h_12_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Keypad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_Keypad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
