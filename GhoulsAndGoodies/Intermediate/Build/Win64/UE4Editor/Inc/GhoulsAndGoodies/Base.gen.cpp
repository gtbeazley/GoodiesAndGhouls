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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABase_Statics::ClassParams = {
		&ABase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ABase, 910881591);
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
