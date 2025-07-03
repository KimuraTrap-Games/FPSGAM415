// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonGAM415Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSONGAM415_FirstPersonGAM415Projectile_generated_h
#error "FirstPersonGAM415Projectile.generated.h already included, missing '#pragma once' in FirstPersonGAM415Projectile.h"
#endif
#define FIRSTPERSONGAM415_FirstPersonGAM415Projectile_generated_h

#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonGAM415Projectile(); \
	friend struct Z_Construct_UClass_AFirstPersonGAM415Projectile_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonGAM415Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGAM415"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonGAM415Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstPersonGAM415Projectile(AFirstPersonGAM415Projectile&&); \
	AFirstPersonGAM415Projectile(const AFirstPersonGAM415Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonGAM415Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonGAM415Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonGAM415Projectile) \
	NO_API virtual ~AFirstPersonGAM415Projectile();


#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_12_PROLOG
#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAM415_API UClass* StaticClass<class AFirstPersonGAM415Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
