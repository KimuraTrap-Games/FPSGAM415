// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProcPlane.h"

#ifdef FIRSTPERSONGAM415_ProcPlane_generated_h
#error "ProcPlane.generated.h already included, missing '#pragma once' in ProcPlane.h"
#endif
#define FIRSTPERSONGAM415_ProcPlane_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProcPlane ***************************************************************
#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMesh);


FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AProcPlane_NoRegister();

#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProcPlane(); \
	friend struct Z_Construct_UClass_AProcPlane_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AProcPlane_NoRegister(); \
public: \
	DECLARE_CLASS2(AProcPlane, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGAM415"), Z_Construct_UClass_AProcPlane_NoRegister) \
	DECLARE_SERIALIZER(AProcPlane)


#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProcPlane(AProcPlane&&) = delete; \
	AProcPlane(const AProcPlane&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProcPlane); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProcPlane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProcPlane) \
	NO_API virtual ~AProcPlane();


#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_11_PROLOG
#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProcPlane;

// ********** End Class AProcPlane *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
