// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpellingGame/CustomPlayerActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPlayerActions() {}
// Cross Module References
	THESPELLINGGAME_API UClass* Z_Construct_UClass_UCustomPlayerActions_NoRegister();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_UCustomPlayerActions();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheSpellingGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ASpells_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomPlayerActions::execTp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Tp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomPlayerActions::execPreppedSpell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->PreppedSpell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomPlayerActions::execCast)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cast(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomPlayerActions::execMove_Up)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_velocity);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Adjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Move_Up(Z_Param_velocity,Z_Param_Location,Z_Param_Adjustment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomPlayerActions::execMove_Right)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_velocity);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Adjustment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Move_Right(Z_Param_velocity,Z_Param_Location,Z_Param_Adjustment);
		P_NATIVE_END;
	}
	void UCustomPlayerActions::StaticRegisterNativesUCustomPlayerActions()
	{
		UClass* Class = UCustomPlayerActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cast", &UCustomPlayerActions::execCast },
			{ "Move_Right", &UCustomPlayerActions::execMove_Right },
			{ "Move_Up", &UCustomPlayerActions::execMove_Up },
			{ "PreppedSpell", &UCustomPlayerActions::execPreppedSpell },
			{ "Tp", &UCustomPlayerActions::execTp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics
	{
		struct CustomPlayerActions_eventCast_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventCast_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlayerActions, nullptr, "Cast", nullptr, nullptr, sizeof(CustomPlayerActions_eventCast_Parms), Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPlayerActions_Cast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPlayerActions_Cast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics
	{
		struct CustomPlayerActions_eventMove_Right_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Right_Parms, velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Right_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Right_Parms, Adjustment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Right_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_Adjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlayerActions, nullptr, "Move_Right", nullptr, nullptr, sizeof(CustomPlayerActions_eventMove_Right_Parms), Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPlayerActions_Move_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPlayerActions_Move_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics
	{
		struct CustomPlayerActions_eventMove_Up_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Up_Parms, velocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Up_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Up_Parms, Adjustment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventMove_Up_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_Adjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlayerActions, nullptr, "Move_Up", nullptr, nullptr, sizeof(CustomPlayerActions_eventMove_Up_Parms), Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPlayerActions_Move_Up()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPlayerActions_Move_Up_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics
	{
		struct CustomPlayerActions_eventPreppedSpell_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventPreppedSpell_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlayerActions, nullptr, "PreppedSpell", nullptr, nullptr, sizeof(CustomPlayerActions_eventPreppedSpell_Parms), Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics
	{
		struct CustomPlayerActions_eventTp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPlayerActions_eventTp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomPlayerActions, nullptr, "Tp", nullptr, nullptr, sizeof(CustomPlayerActions_eventTp_Parms), Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomPlayerActions_Tp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomPlayerActions_Tp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomPlayerActions_NoRegister()
	{
		return UCustomPlayerActions::StaticClass();
	}
	struct Z_Construct_UClass_UCustomPlayerActions_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spells_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomPlayerActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpellingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomPlayerActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomPlayerActions_Cast, "Cast" }, // 1451595360
		{ &Z_Construct_UFunction_UCustomPlayerActions_Move_Right, "Move_Right" }, // 81557814
		{ &Z_Construct_UFunction_UCustomPlayerActions_Move_Up, "Move_Up" }, // 2855608256
		{ &Z_Construct_UFunction_UCustomPlayerActions_PreppedSpell, "PreppedSpell" }, // 3559307151
		{ &Z_Construct_UFunction_UCustomPlayerActions_Tp, "Tp" }, // 2198738379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPlayerActions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CustomPlayerActions.h" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	void Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove_SetBit(void* Obj)
	{
		((UCustomPlayerActions*)Obj)->CanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomPlayerActions), &Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells_Inner = { "Spells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpells_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells = { "Spells", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomPlayerActions, Spells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Atribute" },
		{ "ModuleRelativePath", "CustomPlayerActions.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomPlayerActions, Health), METADATA_PARAMS(Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomPlayerActions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_CanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Spells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomPlayerActions_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomPlayerActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomPlayerActions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomPlayerActions_Statics::ClassParams = {
		&UCustomPlayerActions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomPlayerActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerActions_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomPlayerActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomPlayerActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomPlayerActions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomPlayerActions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomPlayerActions, 498585702);
	template<> THESPELLINGGAME_API UClass* StaticClass<UCustomPlayerActions>()
	{
		return UCustomPlayerActions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomPlayerActions(Z_Construct_UClass_UCustomPlayerActions, &UCustomPlayerActions::StaticClass, TEXT("/Script/TheSpellingGame"), TEXT("UCustomPlayerActions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomPlayerActions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
