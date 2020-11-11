// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Esqueleto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEsqueleto() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEsqueleto_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEsqueleto();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void AEsqueleto::StaticRegisterNativesAEsqueleto()
	{
	}
	UClass* Z_Construct_UClass_AEsqueleto_NoRegister()
	{
		return AEsqueleto::StaticClass();
	}
	struct Z_Construct_UClass_AEsqueleto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_attackAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEsqueleto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsqueleto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Esqueleto.h" },
		{ "ModuleRelativePath", "Esqueleto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackAnim_MetaData[] = {
		{ "Category", "Esqueleto" },
		{ "ModuleRelativePath", "Esqueleto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackAnim = { "m_attackAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEsqueleto, m_attackAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackDamage_MetaData[] = {
		{ "Category", "Esqueleto" },
		{ "ModuleRelativePath", "Esqueleto.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackDamage = { "m_attackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEsqueleto, m_attackDamage), METADATA_PARAMS(Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEsqueleto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEsqueleto_Statics::NewProp_m_attackDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEsqueleto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEsqueleto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEsqueleto_Statics::ClassParams = {
		&AEsqueleto::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEsqueleto_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEsqueleto_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEsqueleto_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEsqueleto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEsqueleto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEsqueleto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEsqueleto, 2086324949);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AEsqueleto>()
	{
		return AEsqueleto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEsqueleto(Z_Construct_UClass_AEsqueleto, &AEsqueleto::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AEsqueleto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEsqueleto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
