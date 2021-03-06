// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef THESPELLINGGAME_CustomPlayerActions_generated_h
#error "CustomPlayerActions.generated.h already included, missing '#pragma once' in CustomPlayerActions.h"
#endif
#define THESPELLINGGAME_CustomPlayerActions_generated_h

#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_SPARSE_DATA
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTp); \
	DECLARE_FUNCTION(execPreppedSpell); \
	DECLARE_FUNCTION(execCast); \
	DECLARE_FUNCTION(execMove_Up); \
	DECLARE_FUNCTION(execMove_Right);


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTp); \
	DECLARE_FUNCTION(execPreppedSpell); \
	DECLARE_FUNCTION(execCast); \
	DECLARE_FUNCTION(execMove_Up); \
	DECLARE_FUNCTION(execMove_Right);


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomPlayerActions(); \
	friend struct Z_Construct_UClass_UCustomPlayerActions_Statics; \
public: \
	DECLARE_CLASS(UCustomPlayerActions, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpellingGame"), NO_API) \
	DECLARE_SERIALIZER(UCustomPlayerActions)


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCustomPlayerActions(); \
	friend struct Z_Construct_UClass_UCustomPlayerActions_Statics; \
public: \
	DECLARE_CLASS(UCustomPlayerActions, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpellingGame"), NO_API) \
	DECLARE_SERIALIZER(UCustomPlayerActions)


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomPlayerActions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomPlayerActions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomPlayerActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomPlayerActions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomPlayerActions(UCustomPlayerActions&&); \
	NO_API UCustomPlayerActions(const UCustomPlayerActions&); \
public:


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomPlayerActions(UCustomPlayerActions&&); \
	NO_API UCustomPlayerActions(const UCustomPlayerActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomPlayerActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomPlayerActions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomPlayerActions)


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_PRIVATE_PROPERTY_OFFSET
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_11_PROLOG
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_PRIVATE_PROPERTY_OFFSET \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_SPARSE_DATA \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_RPC_WRAPPERS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_INCLASS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_PRIVATE_PROPERTY_OFFSET \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_SPARSE_DATA \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_INCLASS_NO_PURE_DECLS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THESPELLINGGAME_API UClass* StaticClass<class UCustomPlayerActions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheSpellingGame_Source_TheSpellingGame_CustomPlayerActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
