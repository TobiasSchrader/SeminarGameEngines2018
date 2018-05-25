// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RECOVERY_RecoveryCharacter_generated_h
#error "RecoveryCharacter.generated.h already included, missing '#pragma once' in RecoveryCharacter.h"
#endif
#define RECOVERY_RecoveryCharacter_generated_h

#define Recovery_Source_Recovery_RecoveryCharacter_h_14_RPC_WRAPPERS
#define Recovery_Source_Recovery_RecoveryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Recovery_Source_Recovery_RecoveryCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecoveryCharacter(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_ARecoveryCharacter(); \
public: \
	DECLARE_CLASS(ARecoveryCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Recovery"), NO_API) \
	DECLARE_SERIALIZER(ARecoveryCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Recovery_Source_Recovery_RecoveryCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARecoveryCharacter(); \
	friend RECOVERY_API class UClass* Z_Construct_UClass_ARecoveryCharacter(); \
public: \
	DECLARE_CLASS(ARecoveryCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Recovery"), NO_API) \
	DECLARE_SERIALIZER(ARecoveryCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Recovery_Source_Recovery_RecoveryCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecoveryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecoveryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecoveryCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecoveryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecoveryCharacter(ARecoveryCharacter&&); \
	NO_API ARecoveryCharacter(const ARecoveryCharacter&); \
public:


#define Recovery_Source_Recovery_RecoveryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecoveryCharacter(ARecoveryCharacter&&); \
	NO_API ARecoveryCharacter(const ARecoveryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecoveryCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecoveryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARecoveryCharacter)


#define Recovery_Source_Recovery_RecoveryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ARecoveryCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ARecoveryCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ARecoveryCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ARecoveryCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ARecoveryCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ARecoveryCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ARecoveryCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ARecoveryCharacter, L_MotionController); }


#define Recovery_Source_Recovery_RecoveryCharacter_h_11_PROLOG
#define Recovery_Source_Recovery_RecoveryCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_RPC_WRAPPERS \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_INCLASS \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Recovery_Source_Recovery_RecoveryCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Recovery_Source_Recovery_RecoveryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Recovery_Source_Recovery_RecoveryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
