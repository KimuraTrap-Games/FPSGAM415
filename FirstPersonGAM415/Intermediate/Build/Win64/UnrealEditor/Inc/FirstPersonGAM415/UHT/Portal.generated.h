// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portal.h"

#ifdef FIRSTPERSONGAM415_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define FIRSTPERSONGAM415_Portal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AFirstPersonGAM415Character;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class APortal ******************************************************************
#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePortal); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execOnOverlapBegin);


FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_APortal_NoRegister();

#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_APortal_NoRegister(); \
public: \
	DECLARE_CLASS2(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGAM415"), Z_Construct_UClass_APortal_NoRegister) \
	DECLARE_SERIALIZER(APortal)


#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortal(APortal&&) = delete; \
	APortal(const APortal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal) \
	NO_API virtual ~APortal();


#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_15_PROLOG
#define FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortal;

// ********** End Class APortal ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
