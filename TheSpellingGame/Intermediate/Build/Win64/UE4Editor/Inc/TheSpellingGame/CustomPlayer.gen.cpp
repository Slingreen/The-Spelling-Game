// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpellingGame/CustomPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayer() {}
// Cross Module References
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ACustomPlayer_NoRegister();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ACustomPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TheSpellingGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ASpells_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACustomPlayer::execEnterCombat)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterCombat(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPlayer::execnewTpLoc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->newTpLoc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPlayer::execPreppedSpell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->PreppedSpell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPlayer::execSpellCast)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpellCast(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPlayer::execMove_Up)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_velocity);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Adjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Move_Up(Z_Param_velocity,Z_Param_Location,Z_Param_Adjustment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPlayer::execMove_Right)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_velocity);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Adjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Move_Right(Z_Param_velocity,Z_Param_Location,Z_Param_Adjustment);
		P_NATIVE_END;
	}
	static FName NAME_ACustomPlayer_CombatEnded = FName(TEXT("CombatEnded"));
	void ACustomPlayer::CombatEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACustomPlayer_CombatEnded),NULL);
	}
	static FName NAME_ACustomPlayer_CombatEntered = FName(TEXT("CombatEntered"));
	void ACustomPlayer::CombatEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACustomPlayer_CombatEntered),NULL);
	}
	static FName NAME_ACustomPlayer_Tp = FName(TEXT("Tp"));
	void ACustomPlayer::Tp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACustomPlayer_Tp),NULL);
	}
	void ACustomPlayer::StaticRegisterNativesACustomPlayer()
	{
		UClass* Class = ACustomPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterCombat", &ACustomPlayer::execEnterCombat },
			{ "Move_Right", &ACustomPlayer::execMove_Right },
			{ "Move_Up", &ACustomPlayer::execMove_Up },
			{ "newTpLoc", &ACustomPlayer::execnewTpLoc },
			{ "PreppedSpell", &ACustomPlayer::execPreppedSpell },
			{ "SpellCast", &ACustomPlayer::execSpellCast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomPlayer_CombatEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_CombatEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_CombatEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "CombatEnded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_CombatEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_CombatEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_CombatEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_CombatEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_CombatEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_CombatEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_CombatEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "CombatEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_CombatEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_CombatEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_CombatEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_CombatEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics
	{
		struct CustomPlayer_eventEnterCombat_Parms
		{
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventEnterCombat_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "CollisionBehaviour" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "EnterCombat", nullptr, nullptr, sizeof(CustomPlayer_eventEnterCombat_Parms), Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_EnterCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_EnterCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics
	{
		struct CustomPlayer_eventMove_Right_Parms
		{
			float velocity;
			FVector Location;
			int32 Adjustment;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Adjustment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Right_Parms, velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Right_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Right_Parms, Adjustment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Right_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_Adjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "Move_Right", nullptr, nullptr, sizeof(CustomPlayer_eventMove_Right_Parms), Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_Move_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_Move_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics
	{
		struct CustomPlayer_eventMove_Up_Parms
		{
			float velocity;
			FVector Location;
			int32 Adjustment;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Adjustment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Up_Parms, velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Up_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Up_Parms, Adjustment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventMove_Up_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_Adjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "Move_Up", nullptr, nullptr, sizeof(CustomPlayer_eventMove_Up_Parms), Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_Move_Up()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_Move_Up_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics
	{
		struct CustomPlayer_eventnewTpLoc_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventnewTpLoc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "newTpLoc", nullptr, nullptr, sizeof(CustomPlayer_eventnewTpLoc_Parms), Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_newTpLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_newTpLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics
	{
		struct CustomPlayer_eventPreppedSpell_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventPreppedSpell_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "PreppedSpell", nullptr, nullptr, sizeof(CustomPlayer_eventPreppedSpell_Parms), Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_PreppedSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_PreppedSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics
	{
		struct CustomPlayer_eventSpellCast_Parms
		{
			FString text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayer_eventSpellCast_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "SpellCast", nullptr, nullptr, sizeof(CustomPlayer_eventSpellCast_Parms), Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_SpellCast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_SpellCast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPlayer_Tp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPlayer_Tp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPlayer_Tp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPlayer, nullptr, "Tp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPlayer_Tp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPlayer_Tp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPlayer_Tp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPlayer_Tp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomPlayer_NoRegister()
	{
		return ACustomPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACustomPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanMove_MetaData[];
#endif
		static void NewProp_CanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells0_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spells0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spells1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spells2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells3_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spells3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells4_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spells4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells5_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spells5;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpellingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomPlayer_CombatEnded, "CombatEnded" }, // 667410135
		{ &Z_Construct_UFunction_ACustomPlayer_CombatEntered, "CombatEntered" }, // 2527480005
		{ &Z_Construct_UFunction_ACustomPlayer_EnterCombat, "EnterCombat" }, // 2921999458
		{ &Z_Construct_UFunction_ACustomPlayer_Move_Right, "Move_Right" }, // 2386376590
		{ &Z_Construct_UFunction_ACustomPlayer_Move_Up, "Move_Up" }, // 3860710642
		{ &Z_Construct_UFunction_ACustomPlayer_newTpLoc, "newTpLoc" }, // 805698740
		{ &Z_Construct_UFunction_ACustomPlayer_PreppedSpell, "PreppedSpell" }, // 1162563950
		{ &Z_Construct_UFunction_ACustomPlayer_SpellCast, "SpellCast" }, // 2384519396
		{ &Z_Construct_UFunction_ACustomPlayer_Tp, "Tp" }, // 977744969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CustomPlayer.h" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	void Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove_SetBit(void* Obj)
	{
		((ACustomPlayer*)Obj)->CanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACustomPlayer), &Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells0_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells0 = { "Spells0", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Spells0), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells1_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells1 = { "Spells1", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Spells1), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells2_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells2 = { "Spells2", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Spells2), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells3_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells3 = { "Spells3", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Spells3), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells4_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells4 = { "Spells4", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Spells4), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells5_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells5 = { "Spells5", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Spells5), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells5_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name_Inner = { "Name", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Name), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Atribute" },
		{ "ModuleRelativePath", "CustomPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPlayer, Health), METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_CanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Spells5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPlayer_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomPlayer_Statics::ClassParams = {
		&ACustomPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomPlayer, 1231758754);
	template<> THESPELLINGGAME_API UClass* StaticClass<ACustomPlayer>()
	{
		return ACustomPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomPlayer(Z_Construct_UClass_ACustomPlayer, &ACustomPlayer::StaticClass, TEXT("/Script/TheSpellingGame"), TEXT("ACustomPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
