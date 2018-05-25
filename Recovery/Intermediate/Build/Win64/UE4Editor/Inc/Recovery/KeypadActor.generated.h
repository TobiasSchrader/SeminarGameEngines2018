// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RECOVERY_KeypadActor_generated_h
#error "KeypadActor.generated.h already included, missing '#pragma once' in KeypadActor.h"
#endif
#define RECOVERY_KeypadActor_generated_h

#define Recovery_Source_Recovery_KeypadActor_h_15_RPC_WRAPPERS
#define Recovery_Source_Recovery_KeypadActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Recovery_Source_Recovery_KeypadActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeypadActor(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_AKeypadActor(); \
public: \
	DECLARE_CLASS(AKeypadActor, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Recovery"), NO_API) \
	DECLARE_SERIALIZER(AKeypadActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AKeypadActor*>(this); }


#define Recovery_Source_Recovery_KeypadActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAKeypadActor(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_AKeypadActor(); \
public: \
	DECLARE_CLASS(AKeypadActor, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Recovery"), NO_API) \
	DECLARE_SERIALIZER(AKeypadActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AKeypadActor*>(this); }


#define Recovery_Source_Recovery_KeypadActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeypadActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeypadActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeypadActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeypadActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeypadActor(AKeypadActor&&); \
	NO_API AKeypadActor(const AKeypadActor&); \
public:


#define Recovery_Source_Recovery_KeypadActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeypadActor(AKeypadActor&&); \
	NO_API AKeypadActor(const AKeypadActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeypadActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeypadActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeypadActor)


#define Recovery_Source_Recovery_KeypadActor_h_15_PRIVATE_PROPERTY_OFFSET
#define Recovery_Source_Recovery_KeypadActor_h_12_PROLOG
#define Recovery_Source_Recovery_KeypadActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_KeypadActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Recovery_Source_Recovery_KeypadActor_h_15_RPC_WRAPPERS \
	Recovery_Source_Recovery_KeypadActor_h_15_INCLASS \
	Recovery_Source_Recovery_KeypadActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Recovery_Source_Recovery_KeypadActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_KeypadActor_h_15_PRIVATE_PROPERTY_OFFSET \
	Recovery_Source_Recovery_KeypadActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Recovery_Source_Recovery_KeypadActor_h_15_INCLASS_NO_PURE_DECLS \
	Recovery_Source_Recovery_KeypadActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Recovery_Source_Recovery_KeypadActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
