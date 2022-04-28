// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpellingGame/EnemyBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBehaviour() {}
// Cross Module References
	THESPELLINGGAME_API UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_UEnemyBehaviour();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheSpellingGame();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ASpells_NoRegister();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_UCustomPlayerActions_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyBehaviour::execTp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Tp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyBehaviour::execCast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyBehaviour::execEnterCombat)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweeb);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterCombat(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweeb,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void UEnemyBehaviour::StaticRegisterNativesUEnemyBehaviour()
	{
		UClass* Class = UEnemyBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cast", &UEnemyBehaviour::execCast },
			{ "EnterCombat", &UEnemyBehaviour::execEnterCombat },
			{ "Tp", &UEnemyBehaviour::execTp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyBehaviour_Cast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_Cast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyBehaviour_Cast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyBehaviour, nullptr, "Cast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_Cast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_Cast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyBehaviour_Cast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyBehaviour_Cast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics
	{
		struct EnemyBehaviour_eventEnterCombat_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweeb;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweeb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweeb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBehaviour_eventEnterCombat_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBehaviour_eventEnterCombat_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBehaviour_eventEnterCombat_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBehaviour_eventEnterCombat_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_bFromSweeb_SetBit(void* Obj)
	{
		((EnemyBehaviour_eventEnterCombat_Parms*)Obj)->bFromSweeb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_bFromSweeb = { "bFromSweeb", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EnemyBehaviour_eventEnterCombat_Parms), &Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_bFromSweeb_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBehaviour_eventEnterCombat_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_bFromSweeb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "CollisionBehaviour" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyBehaviour, nullptr, "EnterCombat", nullptr, nullptr, sizeof(EnemyBehaviour_eventEnterCombat_Parms), Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyBehaviour_EnterCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyBehaviour_EnterCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics
	{
		struct EnemyBehaviour_eventTp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyBehaviour_eventTp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyBehaviour, nullptr, "Tp", nullptr, nullptr, sizeof(EnemyBehaviour_eventTp_Parms), Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyBehaviour_Tp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyBehaviour_Tp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyBehaviour_NoRegister()
	{
		return UEnemyBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Combatworld_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Combatworld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overworld_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_overworld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CastTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spells_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spells_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpellingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyBehaviour_Cast, "Cast" }, // 3226163565
		{ &Z_Construct_UFunction_UEnemyBehaviour_EnterCombat, "EnterCombat" }, // 3277861420
		{ &Z_Construct_UFunction_UEnemyBehaviour_Tp, "Tp" }, // 2120983402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyBehaviour.h" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Combatworld_MetaData[] = {
		{ "Category", "Scene" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Combatworld = { "Combatworld", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBehaviour, Combatworld), METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Combatworld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Combatworld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_overworld_MetaData[] = {
		{ "Category", "Scene" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_overworld = { "overworld", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBehaviour, overworld), METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_overworld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_overworld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBehaviour, Health), METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_CastTime_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBehaviour, CastTime), METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_CastTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_CastTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells_Inner = { "Spells", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpells_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells = { "Spells", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBehaviour, Spells), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerRef" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyBehaviour, Player), Z_Construct_UClass_UCustomPlayerActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Combatworld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_overworld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_CastTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Spells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyBehaviour_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyBehaviour_Statics::ClassParams = {
		&UEnemyBehaviour::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyBehaviour, 482969255);
	template<> THESPELLINGGAME_API UClass* StaticClass<UEnemyBehaviour>()
	{
		return UEnemyBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyBehaviour(Z_Construct_UClass_UEnemyBehaviour, &UEnemyBehaviour::StaticClass, TEXT("/Script/TheSpellingGame"), TEXT("UEnemyBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
