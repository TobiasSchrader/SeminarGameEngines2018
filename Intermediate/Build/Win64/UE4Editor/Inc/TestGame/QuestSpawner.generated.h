// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_QuestSpawner_generated_h
#error "QuestSpawner.generated.h already included, missing '#pragma once' in QuestSpawner.h"
#endif
#define TESTGAME_QuestSpawner_generated_h

#define TestGame_Source_TestGame_QuestSpawner_h_12_RPC_WRAPPERS
#define TestGame_Source_TestGame_QuestSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TestGame_Source_TestGame_QuestSpawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestSpawner(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AQuestSpawner(); \
public: \
	DECLARE_CLASS(AQuestSpawner, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AQuestSpawner) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AQuestSpawner*>(this); }


#define TestGame_Source_TestGame_QuestSpawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAQuestSpawner(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_AQuestSpawner(); \
public: \
	DECLARE_CLASS(AQuestSpawner, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(AQuestSpawner) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AQuestSpawner*>(this); }


#define TestGame_Source_TestGame_QuestSpawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestSpawner(AQuestSpawner&&); \
	NO_API AQuestSpawner(const AQuestSpawner&); \
public:


#define TestGame_Source_TestGame_QuestSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestSpawner(AQuestSpawner&&); \
	NO_API AQuestSpawner(const AQuestSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestSpawner)


#define TestGame_Source_TestGame_QuestSpawner_h_12_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_QuestSpawner_h_9_PROLOG
#define TestGame_Source_TestGame_QuestSpawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_QuestSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_QuestSpawner_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_QuestSpawner_h_12_INCLASS \
	TestGame_Source_TestGame_QuestSpawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_QuestSpawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_QuestSpawner_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_QuestSpawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_QuestSpawner_h_12_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_QuestSpawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_QuestSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
