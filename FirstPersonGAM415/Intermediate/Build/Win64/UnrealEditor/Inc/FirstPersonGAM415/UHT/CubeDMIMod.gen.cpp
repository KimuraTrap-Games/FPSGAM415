// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGAM415/CubeDMIMod.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCubeDMIMod() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_ACubeDMIMod();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_ACubeDMIMod_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGAM415();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACubeDMIMod Function OnOverlapBegin **************************************
struct Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics
{
	struct CubeDMIMod_eventOnOverlapBegin_Parms
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
		{ "ModuleRelativePath", "CubeDMIMod.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeDMIMod_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeDMIMod_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeDMIMod_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeDMIMod_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CubeDMIMod_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeDMIMod_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeDMIMod_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACubeDMIMod, nullptr, "OnOverlapBegin", Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::CubeDMIMod_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::CubeDMIMod_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACubeDMIMod::execOnOverlapBegin)
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
// ********** End Class ACubeDMIMod Function OnOverlapBegin ****************************************

// ********** Begin Class ACubeDMIMod **************************************************************
void ACubeDMIMod::StaticRegisterNativesACubeDMIMod()
{
	UClass* Class = ACubeDMIMod::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ACubeDMIMod::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACubeDMIMod;
UClass* ACubeDMIMod::GetPrivateStaticClass()
{
	using TClass = ACubeDMIMod;
	if (!Z_Registration_Info_UClass_ACubeDMIMod.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CubeDMIMod"),
			Z_Registration_Info_UClass_ACubeDMIMod.InnerSingleton,
			StaticRegisterNativesACubeDMIMod,
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
	return Z_Registration_Info_UClass_ACubeDMIMod.InnerSingleton;
}
UClass* Z_Construct_UClass_ACubeDMIMod_NoRegister()
{
	return ACubeDMIMod::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACubeDMIMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CubeDMIMod.h" },
		{ "ModuleRelativePath", "CubeDMIMod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[] = {
		{ "Category", "CubeDMIMod" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeDMIMod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cubeMesh_MetaData[] = {
		{ "Category", "CubeDMIMod" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeDMIMod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseMat_MetaData[] = {
		{ "Category", "CubeDMIMod" },
		{ "ModuleRelativePath", "CubeDMIMod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dmiMat_MetaData[] = {
		{ "ModuleRelativePath", "CubeDMIMod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_colorP_MetaData[] = {
		{ "Category", "CubeDMIMod" },
		{ "ModuleRelativePath", "CubeDMIMod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cubeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_dmiMat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_colorP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACubeDMIMod_OnOverlapBegin, "OnOverlapBegin" }, // 3374032523
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeDMIMod>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeDMIMod, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boxComp_MetaData), NewProp_boxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_cubeMesh = { "cubeMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeDMIMod, cubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cubeMesh_MetaData), NewProp_cubeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_baseMat = { "baseMat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeDMIMod, baseMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseMat_MetaData), NewProp_baseMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_dmiMat = { "dmiMat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeDMIMod, dmiMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dmiMat_MetaData), NewProp_dmiMat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_colorP = { "colorP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeDMIMod, colorP), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_colorP_MetaData), NewProp_colorP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeDMIMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_boxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_cubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_baseMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_dmiMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeDMIMod_Statics::NewProp_colorP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeDMIMod_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACubeDMIMod_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGAM415,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeDMIMod_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACubeDMIMod_Statics::ClassParams = {
	&ACubeDMIMod::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACubeDMIMod_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACubeDMIMod_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeDMIMod_Statics::Class_MetaDataParams), Z_Construct_UClass_ACubeDMIMod_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACubeDMIMod()
{
	if (!Z_Registration_Info_UClass_ACubeDMIMod.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACubeDMIMod.OuterSingleton, Z_Construct_UClass_ACubeDMIMod_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACubeDMIMod.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeDMIMod);
ACubeDMIMod::~ACubeDMIMod() {}
// ********** End Class ACubeDMIMod ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_CubeDMIMod_h__Script_FirstPersonGAM415_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACubeDMIMod, ACubeDMIMod::StaticClass, TEXT("ACubeDMIMod"), &Z_Registration_Info_UClass_ACubeDMIMod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeDMIMod), 984032995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_CubeDMIMod_h__Script_FirstPersonGAM415_141191411(TEXT("/Script/FirstPersonGAM415"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_CubeDMIMod_h__Script_FirstPersonGAM415_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_CubeDMIMod_h__Script_FirstPersonGAM415_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
