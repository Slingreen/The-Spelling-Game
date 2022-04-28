// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpellingGame/Spells.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpells() {}
// Cross Module References
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ASpells_NoRegister();
	THESPELLINGGAME_API UClass* Z_Construct_UClass_ASpells();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheSpellingGame();
// End Cross Module References
	void ASpells::StaticRegisterNativesASpells()
	{
	}
	UClass* Z_Construct_UClass_ASpells_NoRegister()
	{
		return ASpells::StaticClass();
	}
	struct Z_Construct_UClass_ASpells_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Lifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpells_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpellingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpells_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spells.h" },
		{ "ModuleRelativePath", "Spells.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpells_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Spells.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASpells_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpells, Name), METADATA_PARAMS(Z_Construct_UClass_ASpells_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpells_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpells_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Spells.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpells_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpells, damage), METADATA_PARAMS(Z_Construct_UClass_ASpells_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpells_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpells_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Spells.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpells_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpells, Lifetime), METADATA_PARAMS(Z_Construct_UClass_ASpells_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpells_Statics::NewProp_Lifetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpells_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpells_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpells_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpells_Statics::NewProp_Lifetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpells_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpells>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpells_Statics::ClassParams = {
		&ASpells::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpells_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpells_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpells_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpells_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpells()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpells_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpells, 2162125168);
	template<> THESPELLINGGAME_API UClass* StaticClass<ASpells>()
	{
		return ASpells::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpells(Z_Construct_UClass_ASpells, &ASpells::StaticClass, TEXT("/Script/TheSpellingGame"), TEXT("ASpells"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpells);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
