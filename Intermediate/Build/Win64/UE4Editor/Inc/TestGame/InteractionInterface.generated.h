// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define TESTGAME_InteractionInterface_generated_h

#define TestGame_Source_TestGame_InteractionInterface_h_12_RPC_WRAPPERS \
	virtual void PerformInteract_Implementation()=0; \
	virtual bool CanInteract_Implementation()=0; \
 \
	DECLARE_FUNCTION(execPerformInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanInteract_Implementation(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_InteractionInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformInteract_Implementation()=0; \
	virtual bool CanInteract_Implementation()=0; \
 \
	DECLARE_FUNCTION(execPerformInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanInteract_Implementation(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_InteractionInterface_h_12_EVENT_PARMS \
	struct InteractionInterface_eventCanInteract_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionInterface_eventCanInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define TestGame_Source_TestGame_InteractionInterface_h_12_CALLBACK_WRAPPERS
#define TestGame_Source_TestGame_InteractionInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTGAME_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTGAME_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTGAME_API UInteractionInterface(UInteractionInterface&&); \
	TESTGAME_API UInteractionInterface(const UInteractionInterface&); \
public:


#define TestGame_Source_TestGame_InteractionInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TESTGAME_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TESTGAME_API UInteractionInterface(UInteractionInterface&&); \
	TESTGAME_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTGAME_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface)


#define TestGame_Source_TestGame_InteractionInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_UInteractionInterface(); \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/TestGame"), TESTGAME_API) \
	DECLARE_SERIALIZER(UInteractionInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestGame_Source_TestGame_InteractionInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestGame_Source_TestGame_InteractionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	TestGame_Source_TestGame_InteractionInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_InteractionInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestGame_Source_TestGame_InteractionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	TestGame_Source_TestGame_InteractionInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_InteractionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestGame_Source_TestGame_InteractionInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestGame_Source_TestGame_InteractionInterface_h_9_PROLOG \
	TestGame_Source_TestGame_InteractionInterface_h_12_EVENT_PARMS


#define TestGame_Source_TestGame_InteractionInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_InteractionInterface_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_InteractionInterface_h_12_CALLBACK_WRAPPERS \
	TestGame_Source_TestGame_InteractionInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_InteractionInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_InteractionInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_InteractionInterface_h_12_CALLBACK_WRAPPERS \
	TestGame_Source_TestGame_InteractionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
