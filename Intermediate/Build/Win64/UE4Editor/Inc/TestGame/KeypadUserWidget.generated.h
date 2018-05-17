// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
#ifdef TESTGAME_KeypadUserWidget_generated_h
#error "KeypadUserWidget.generated.h already included, missing '#pragma once' in KeypadUserWidget.h"
#endif
#define TESTGAME_KeypadUserWidget_generated_h

#define TestGame_Source_TestGame_KeypadUserWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonClicked) \
	{ \
		P_GET_OBJECT(UButton,Z_Param_button); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked(Z_Param_button); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClickedR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClickedR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClickedOK) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClickedOK(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked9) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked9(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked8) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked8(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked7) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked7(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked6) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked6(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked0) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked0(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonClicked) \
	{ \
		P_GET_OBJECT(UButton,Z_Param_button); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked(Z_Param_button); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClickedR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClickedR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClickedOK) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClickedOK(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked9) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked9(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked8) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked8(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked7) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked7(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked6) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked6(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonClicked0) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnButtonClicked0(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeypadUserWidget(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_UKeypadUserWidget(); \
public: \
	DECLARE_CLASS(UKeypadUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(UKeypadUserWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UKeypadUserWidget*>(this); }


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUKeypadUserWidget(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_UKeypadUserWidget(); \
public: \
	DECLARE_CLASS(UKeypadUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(UKeypadUserWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UKeypadUserWidget*>(this); }


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeypadUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeypadUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeypadUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeypadUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeypadUserWidget(UKeypadUserWidget&&); \
	NO_API UKeypadUserWidget(const UKeypadUserWidget&); \
public:


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKeypadUserWidget(UKeypadUserWidget&&); \
	NO_API UKeypadUserWidget(const UKeypadUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeypadUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeypadUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeypadUserWidget)


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_KeypadUserWidget_h_11_PROLOG
#define TestGame_Source_TestGame_KeypadUserWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_RPC_WRAPPERS \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_INCLASS \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_KeypadUserWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_KeypadUserWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_KeypadUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
