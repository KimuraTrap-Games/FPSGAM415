// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstPersonGAM415PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFirstPersonGAM415Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSONGAM415_FirstPersonGAM415PickUpComponent_generated_h
#error "FirstPersonGAM415PickUpComponent.generated.h already included, missing '#pragma once' in FirstPersonGAM415PickUpComponent.h"
#endif
#define FIRSTPERSONGAM415_FirstPersonGAM415PickUpComponent_generated_h

#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_12_DELEGATE \
FIRSTPERSONGAM415_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AFirstPersonGAM415Character* PickUpCharacter);


#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirstPersonGAM415PickUpComponent(); \
	friend struct Z_Construct_UClass_UFirstPersonGAM415PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UFirstPersonGAM415PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonGAM415"), NO_API) \
	DECLARE_SERIALIZER(UFirstPersonGAM415PickUpComponent)


#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFirstPersonGAM415PickUpComponent(UFirstPersonGAM415PickUpComponent&&); \
	UFirstPersonGAM415PickUpComponent(const UFirstPersonGAM415PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirstPersonGAM415PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirstPersonGAM415PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirstPersonGAM415PickUpComponent) \
	NO_API virtual ~UFirstPersonGAM415PickUpComponent();


#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_14_PROLOG
#define FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONGAM415_API UClass* StaticClass<class UFirstPersonGAM415PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
