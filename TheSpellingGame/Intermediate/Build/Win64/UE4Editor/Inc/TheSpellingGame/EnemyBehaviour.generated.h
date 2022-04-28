// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef THESPELLINGGAME_EnemyBehaviour_generated_h
#error "EnemyBehaviour.generated.h already included, missing '#pragma once' in EnemyBehaviour.h"
#endif
#define THESPELLINGGAME_EnemyBehaviour_generated_h

#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_SPARSE_DATA
#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTp); \
	DECLARE_FUNCTION(execCast); \
	DECLARE_FUNCTION(execEnterCombat);


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTp); \
	DECLARE_FUNCTION(execCast); \
	DECLARE_FUNCTION(execEnterCombat);


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyBehaviour(); \
	friend struct Z_Construct_UClass_UEnemyBehaviour_Statics; \
public: \
	DECLARE_CLASS(UEnemyBehaviour, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpellingGame"), NO_API) \
	DECLARE_SERIALIZER(UEnemyBehaviour)


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyBehaviour(); \
	friend struct Z_Construct_UClass_UEnemyBehaviour_Statics; \
public: \
	DECLARE_CLASS(UEnemyBehaviour, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpellingGame"), NO_API) \
	DECLARE_SERIALIZER(UEnemyBehaviour)


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyBehaviour(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyBehaviour) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyBehaviour); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyBehaviour(UEnemyBehaviour&&); \
	NO_API UEnemyBehaviour(const UEnemyBehaviour&); \
public:


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyBehaviour(UEnemyBehaviour&&); \
	NO_API UEnemyBehaviour(const UEnemyBehaviour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyBehaviour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyBehaviour)


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_PRIVATE_PROPERTY_OFFSET
#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_12_PROLOG
#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_SPARSE_DATA \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_RPC_WRAPPERS \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_INCLASS \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_SPARSE_DATA \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_INCLASS_NO_PURE_DECLS \
	TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THESPELLINGGAME_API UClass* StaticClass<class UEnemyBehaviour>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheSpellingGame_Source_TheSpellingGame_EnemyBehaviour_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
