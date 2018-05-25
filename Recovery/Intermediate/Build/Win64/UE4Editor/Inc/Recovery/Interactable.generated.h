// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RECOVERY_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define RECOVERY_Interactable_generated_h

#define Recovery_Source_Recovery_Interactable_h_12_RPC_WRAPPERS \
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


#define Recovery_Source_Recovery_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Recovery_Source_Recovery_Interactable_h_12_EVENT_PARMS \
	struct Interactable_eventCanInteract_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventCanInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Recovery_Source_Recovery_Interactable_h_12_CALLBACK_WRAPPERS
#define Recovery_Source_Recovery_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RECOVERY_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RECOVERY_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RECOVERY_API UInteractable(UInteractable&&); \
	RECOVERY_API UInteractable(const UInteractable&); \
public:


#define Recovery_Source_Recovery_Interactable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RECOVERY_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RECOVERY_API UInteractable(UInteractable&&); \
	RECOVERY_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RECOVERY_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define Recovery_Source_Recovery_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_UInteractable(); \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Recovery"), RECOVERY_API) \
	DECLARE_SERIALIZER(UInteractable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Recovery_Source_Recovery_Interactable_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Recovery_Source_Recovery_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
	Recovery_Source_Recovery_Interactable_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Recovery_Source_Recovery_Interactable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Recovery_Source_Recovery_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
	Recovery_Source_Recovery_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Recovery_Source_Recovery_Interactable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Recovery_Source_Recovery_Interactable_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	static bool Execute_CanInteract(UObject* O); \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Recovery_Source_Recovery_Interactable_h_9_PROLOG \
	Recovery_Source_Recovery_Interactable_h_12_EVENT_PARMS


#define Recovery_Source_Recovery_Interactable_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_Interactable_h_12_RPC_WRAPPERS \
	Recovery_Source_Recovery_Interactable_h_12_CALLBACK_WRAPPERS \
	Recovery_Source_Recovery_Interactable_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Recovery_Source_Recovery_Interactable_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Recovery_Source_Recovery_Interactable_h_12_CALLBACK_WRAPPERS \
	Recovery_Source_Recovery_Interactable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Recovery_Source_Recovery_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
