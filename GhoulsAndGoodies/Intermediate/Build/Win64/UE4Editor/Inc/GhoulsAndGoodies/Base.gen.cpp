// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Public/Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ABase_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ABase();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABase::StaticRegisterNativesABase()
	{
	}
	UClass* Z_Construct_UClass_ABase_NoRegister()
	{
		return ABase::StaticClass();
	}
	struct Z_Construct_UClass_ABase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_baseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_baseMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefendingUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Base.h" },
		{ "ModuleRelativePath", "Public/Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase_Statics::NewProp_m_baseMesh_MetaData[] = {
		{ "Category", "Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABase_Statics::NewProp_m_baseMesh = { "m_baseMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABase, m_baseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABase_Statics::NewProp_m_baseMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABase_Statics::NewProp_m_baseMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABase_Statics::NewProp_m_baseMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Statics::ClassParams = {
		&ABase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABase, 3238585731);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ABase>()
	{
		return ABase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABase(Z_Construct_UClass_ABase, &ABase::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ABase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
