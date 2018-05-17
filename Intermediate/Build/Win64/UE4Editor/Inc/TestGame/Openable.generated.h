// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_Openable_generated_h
#error "Openable.generated.h already included, missing '#pragma once' in Openable.h"
#endif
#define TESTGAME_Openable_generated_h

#define TestGame_Source_TestGame_Openable_h_12_RPC_WRAPPERS \
	virtual void Open_Implementation()=0; \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Open_Implementation(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_Openable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Open_Implementation()=0; \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Open_Implementation(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_Openable_h_12_EVENT_PARMS
#define TestGame_Source_TestGame_Openable_h_12_CALLBACK_WRAPPERS
#define TestGame_Source_TestGame_Openable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTGAME_API UOpenable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTGAME_API, UOpenable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTGAME_API UOpenable(UOpenable&&); \
	TESTGAME_API UOpenable(const UOpenable&); \
public:


#define TestGame_Source_TestGame_Openable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTGAME_API UOpenable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTGAME_API UOpenable(UOpenable&&); \
	TESTGAME_API UOpenable(const UOpenable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTGAME_API, UOpenable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenable)


#define TestGame_Source_TestGame_Openable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOpenable(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_UOpenable(); \
public: \
	DECLARE_CLASS(UOpenable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/TestGame"), TESTGAME_API) \
	DECLARE_SERIALIZER(UOpenable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_Openable_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestGame_Source_TestGame_Openable_h_12_GENERATED_UINTERFACE_BODY() \
	TestGame_Source_TestGame_Openable_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_Openable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestGame_Source_TestGame_Openable_h_12_GENERATED_UINTERFACE_BODY() \
	TestGame_Source_TestGame_Openable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_Openable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOpenable() {} \
public: \
	typedef UOpenable UClassType; \
	static void Execute_Open(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestGame_Source_TestGame_Openable_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IOpenable() {} \
public: \
	typedef UOpenable UClassType; \
	static void Execute_Open(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestGame_Source_TestGame_Openable_h_9_PROLOG \
	TestGame_Source_TestGame_Openable_h_12_EVENT_PARMS


#define TestGame_Source_TestGame_Openable_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Openable_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_Openable_h_12_CALLBACK_WRAPPERS \
	TestGame_Source_TestGame_Openable_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_Openable_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Openable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Openable_h_12_CALLBACK_WRAPPERS \
	TestGame_Source_TestGame_Openable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_Openable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
