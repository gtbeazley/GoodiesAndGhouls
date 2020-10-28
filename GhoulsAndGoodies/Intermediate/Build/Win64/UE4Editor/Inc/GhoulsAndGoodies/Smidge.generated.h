// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GHOULSANDGOODIES_Smidge_generated_h
#error "Smidge.generated.h already included, missing '#pragma once' in Smidge.h"
#endif
#define GHOULSANDGOODIES_Smidge_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDetectionSphereOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_a_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDetectionSphereOverlapEnd(Z_Param_a_overlappedComp,Z_Param_a_otherActor,Z_Param_a_otherComp,Z_Param_a_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDetectionSphereOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_a_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_a_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_a_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDetectionSphereOverlapBegin(Z_Param_a_overlappedComp,Z_Param_a_otherActor,Z_Param_a_otherComp,Z_Param_a_otherBodyIndex,Z_Param_a_fromSweep,Z_Param_Out_a_sweepResult); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Attack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDetectionSphereOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_a_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDetectionSphereOverlapEnd(Z_Param_a_overlappedComp,Z_Param_a_otherActor,Z_Param_a_otherComp,Z_Param_a_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDetectionSphereOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_a_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_a_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_a_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_a_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDetectionSphereOverlapBegin(Z_Param_a_overlappedComp,Z_Param_a_otherActor,Z_Param_a_otherComp,Z_Param_a_otherBodyIndex,Z_Param_a_fromSweep,Z_Param_Out_a_sweepResult); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmidge(); \
	friend struct Z_Construct_UClass_ASmidge_Statics; \
public: \
	DECLARE_CLASS(ASmidge, ADefendingUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ASmidge)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASmidge(); \
	friend struct Z_Construct_UClass_ASmidge_Statics; \
public: \
	DECLARE_CLASS(ASmidge, ADefendingUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ASmidge)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmidge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmidge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmidge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmidge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmidge(ASmidge&&); \
	NO_API ASmidge(const ASmidge&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmidge(ASmidge&&); \
	NO_API ASmidge(const ASmidge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmidge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmidge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmidge)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_14_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class ASmidge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Smidge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
