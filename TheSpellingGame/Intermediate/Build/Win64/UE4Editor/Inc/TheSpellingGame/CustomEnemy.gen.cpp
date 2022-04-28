// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpellingGame/CustomEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomEnemy() {}
// Cross Module References
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ACustomEnemy_NoRegister();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ACustomEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheSpellingGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ASpells_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACustomEnemy::execEnterCombat)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterCombat(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomEnemy::execnewTpLoc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->newTpLoc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomEnemy::execSpellCast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpellCast();
		P_NATIVE_END;
	}
	static FName NAME_ACustomEnemy_Tp = FName(TEXT("Tp"));
	void ACustomEnemy::Tp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACustomEnemy_Tp),NULL);
	}
	void ACustomEnemy::StaticRegisterNativesACustomEnemy()
	{
		UClass* Class = ACustomEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterCombat", &ACustomEnemy::execEnterCombat },
			{ "newTpLoc", &ACustomEnemy::execnewTpLoc },
			{ "SpellCast", &ACustomEnemy::execSpellCast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics
	{
		struct CustomEnemy_eventEnterCombat_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomEnemy_eventEnterCombat_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::Function_MetaDataParams[] = {
		{ "Category", "CollisionBehaviour" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEnemy, nullptr, "EnterCombat", nullptr, nullptr, sizeof(CustomEnemy_eventEnterCombat_Parms), Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomEnemy_EnterCombat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomEnemy_EnterCombat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics
	{
		struct CustomEnemy_eventnewTpLoc_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomEnemy_eventnewTpLoc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEnemy, nullptr, "newTpLoc", nullptr, nullptr, sizeof(CustomEnemy_eventnewTpLoc_Parms), Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomEnemy_newTpLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomEnemy_newTpLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomEnemy_SpellCast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEnemy_SpellCast_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEnemy_SpellCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEnemy, nullptr, "SpellCast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomEnemy_SpellCast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemy_SpellCast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomEnemy_SpellCast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomEnemy_SpellCast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomEnemy_Tp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEnemy_Tp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEnemy_Tp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEnemy, nullptr, "Tp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomEnemy_Tp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEnemy_Tp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomEnemy_Tp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomEnemy_Tp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomEnemy_NoRegister()
	{
		return ACustomEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACustomEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CastTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spell_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Spell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpellingGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomEnemy_EnterCombat, "EnterCombat" }, // 2350798730
		{ &Z_Construct_UFunction_ACustomEnemy_newTpLoc, "newTpLoc" }, // 2919925424
		{ &Z_Construct_UFunction_ACustomEnemy_SpellCast, "SpellCast" }, // 3062087838
		{ &Z_Construct_UFunction_ACustomEnemy_Tp, "Tp" }, // 3678681192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomEnemy.h" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomEnemy, Health), METADATA_PARAMS(Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemy_Statics::NewProp_CastTime_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACustomEnemy_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomEnemy, CastTime), METADATA_PARAMS(Z_Construct_UClass_ACustomEnemy_Statics::NewProp_CastTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemy_Statics::NewProp_CastTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Spell_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "CustomEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Spell = { "Spell", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomEnemy, Spell), Z_Construct_UClass_ASpells_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Spell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Spell_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEnemy_Statics::NewProp_CastTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEnemy_Statics::NewProp_Spell,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomEnemy_Statics::ClassParams = {
		&ACustomEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomEnemy, 2501877927);
	template<> THESPELLINGGAME_API UClass* StaticClass<ACustomEnemy>()
	{
		return ACustomEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomEnemy(Z_Construct_UClass_ACustomEnemy, &ACustomEnemy::StaticClass, TEXT("/Script/TheSpellingGame"), TEXT("ACustomEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
