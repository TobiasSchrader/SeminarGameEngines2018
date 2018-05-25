// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RECOVERY_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define RECOVERY_MyPlayerController_generated_h

#define Recovery_Source_Recovery_MyPlayerController_h_15_RPC_WRAPPERS
#define Recovery_Source_Recovery_MyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Recovery_Source_Recovery_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_AMyPlayerController(); \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Recovery"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Recovery_Source_Recovery_MyPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_AMyPlayerController(); \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Recovery"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Recovery_Source_Recovery_MyPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define Recovery_Source_Recovery_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController)


#define Recovery_Source_Recovery_MyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Recovery_Source_Recovery_MyPlayerController_h_12_PROLOG
#define Recovery_Source_Recovery_MyPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_MyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Recovery_Source_Recovery_MyPlayerController_h_15_RPC_WRAPPERS \
	Recovery_Source_Recovery_MyPlayerController_h_15_INCLASS \
	Recovery_Source_Recovery_MyPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Recovery_Source_Recovery_MyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_MyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Recovery_Source_Recovery_MyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Recovery_Source_Recovery_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Recovery_Source_Recovery_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Recovery_Source_Recovery_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
