// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGAM415/Portal.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePortal() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AFirstPersonGAM415Character_NoRegister();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_APortal();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_APortal_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGAM415();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APortal Function OnOverlapBegin ******************************************
struct Z_Construct_UFunction_APortal_OnOverlapBegin_Statics
{
	struct Portal_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Portal_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Portal_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "OnOverlapBegin", Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::Portal_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::Portal_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APortal Function OnOverlapBegin ********************************************

// ********** Begin Class APortal Function SetBool *************************************************
struct Z_Construct_UFunction_APortal_SetBool_Statics
{
	struct Portal_eventSetBool_Parms
	{
		AFirstPersonGAM415Character* playerChar;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerChar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortal_SetBool_Statics::NewProp_playerChar = { "playerChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portal_eventSetBool_Parms, playerChar), Z_Construct_UClass_AFirstPersonGAM415Character_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortal_SetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortal_SetBool_Statics::NewProp_playerChar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_SetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_SetBool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "SetBool", Z_Construct_UFunction_APortal_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortal_SetBool_Statics::Portal_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_SetBool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APortal_SetBool_Statics::Portal_eventSetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortal_SetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_SetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execSetBool)
{
	P_GET_OBJECT(AFirstPersonGAM415Character,Z_Param_playerChar);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBool(Z_Param_playerChar);
	P_NATIVE_END;
}
// ********** End Class APortal Function SetBool ***************************************************

// ********** Begin Class APortal Function UpdatePortal ********************************************
struct Z_Construct_UFunction_APortal_UpdatePortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortal_UpdatePortal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APortal, nullptr, "UpdatePortal", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortal_UpdatePortal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortal_UpdatePortal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APortal_UpdatePortal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortal_UpdatePortal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortal::execUpdatePortal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePortal();
	P_NATIVE_END;
}
// ********** End Class APortal Function UpdatePortal **********************************************

// ********** Begin Class APortal ******************************************************************
void APortal::StaticRegisterNativesAPortal()
{
	UClass* Class = APortal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &APortal::execOnOverlapBegin },
		{ "SetBool", &APortal::execSetBool },
		{ "UpdatePortal", &APortal::execUpdatePortal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APortal;
UClass* APortal::GetPrivateStaticClass()
{
	using TClass = APortal;
	if (!Z_Registration_Info_UClass_APortal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Portal"),
			Z_Registration_Info_UClass_APortal.InnerSingleton,
			StaticRegisterNativesAPortal,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APortal.InnerSingleton;
}
UClass* Z_Construct_UClass_APortal_NoRegister()
{
	return APortal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Portal.h" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sceneCapture_MetaData[] = {
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rootArrow_MetaData[] = {
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_renderTarget_MetaData[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[] = {
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPortal_MetaData[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mat_MetaData[] = {
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sceneCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rootArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_renderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPortal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APortal_OnOverlapBegin, "OnOverlapBegin" }, // 3002705252
		{ &Z_Construct_UFunction_APortal_SetBool, "SetBool" }, // 1065392043
		{ &Z_Construct_UFunction_APortal_UpdatePortal, "UpdatePortal" }, // 931380545
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_sceneCapture = { "sceneCapture", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, sceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sceneCapture_MetaData), NewProp_sceneCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_rootArrow = { "rootArrow", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, rootArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rootArrow_MetaData), NewProp_rootArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_renderTarget = { "renderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, renderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_renderTarget_MetaData), NewProp_renderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boxComp_MetaData), NewProp_boxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_OtherPortal = { "OtherPortal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, OtherPortal), Z_Construct_UClass_APortal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPortal_MetaData), NewProp_OtherPortal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mat_MetaData), NewProp_mat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_sceneCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_rootArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_renderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_boxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_OtherPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_mat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APortal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGAM415,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortal_Statics::ClassParams = {
	&APortal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APortal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams), Z_Construct_UClass_APortal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortal()
{
	if (!Z_Registration_Info_UClass_APortal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortal.OuterSingleton, Z_Construct_UClass_APortal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortal);
APortal::~APortal() {}
// ********** End Class APortal ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h__Script_FirstPersonGAM415_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortal, APortal::StaticClass, TEXT("APortal"), &Z_Registration_Info_UClass_APortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortal), 2026393064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h__Script_FirstPersonGAM415_3988361142(TEXT("/Script/FirstPersonGAM415"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h__Script_FirstPersonGAM415_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_Portal_h__Script_FirstPersonGAM415_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
