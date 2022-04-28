// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef THESPELLINGGAME_CustomPlayer_generated_h
#error "CustomPlayer.generated.h already included, missing '#pragma once' in CustomPlayer.h"
#endif
#define THESPELLINGGAME_CustomPlayer_generated_h

#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_SPARSE_DATA
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnterCombat); \
	DECLARE_FUNCTION(execnewTpLoc); \
	DECLARE_FUNCTION(execPreppedSpell); \
	DECLARE_FUNCTION(execSpellCast); \
	DECLARE_FUNCTION(execMove_Up); \
	DECLARE_FUNCTION(execMove_Right);


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterCombat); \
	DECLARE_FUNCTION(execnewTpLoc); \
	DECLARE_FUNCTION(execPreppedSpell); \
	DECLARE_FUNCTION(execSpellCast); \
	DECLARE_FUNCTION(execMove_Up); \
	DECLARE_FUNCTION(execMove_Right);


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_EVENT_PARMS
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_CALLBACK_WRAPPERS
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPlayer(); \
	friend struct Z_Construct_UClass_ACustomPlayer_Statics; \
public: \
	DECLARE_CLASS(ACustomPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpellingGame"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayer)


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACustomPlayer(); \
	friend struct Z_Construct_UClass_ACustomPlayer_Statics; \
public: \
	DECLARE_CLASS(ACustomPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheSpellingGame"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayer)


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayer(ACustomPlayer&&); \
	NO_API ACustomPlayer(const ACustomPlayer&); \
public:


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayer(ACustomPlayer&&); \
	NO_API ACustomPlayer(const ACustomPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomPlayer)


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_PRIVATE_PROPERTY_OFFSET
#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_10_PROLOG \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_EVENT_PARMS


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_SPARSE_DATA \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_RPC_WRAPPERS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_CALLBACK_WRAPPERS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_INCLASS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_SPARSE_DATA \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_CALLBACK_WRAPPERS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_INCLASS_NO_PURE_DECLS \
	TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THESPELLINGGAME_API UClass* StaticClass<class ACustomPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheSpellingGame_Source_TheSpellingGame_CustomPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
