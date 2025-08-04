// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGAM415/ProcPlane.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcPlane() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AProcPlane();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AProcPlane_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGAM415();
// End Cross Module References

// Begin Class AProcPlane Function CreateMesh
struct Z_Construct_UFunction_AProcPlane_CreateMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProcPlane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProcPlane_CreateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProcPlane, nullptr, "CreateMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProcPlane_CreateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProcPlane_CreateMesh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AProcPlane_CreateMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProcPlane_CreateMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProcPlane::execCreateMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMesh();
	P_NATIVE_END;
}
// End Class AProcPlane Function CreateMesh

// Begin Class AProcPlane
void AProcPlane::StaticRegisterNativesAProcPlane()
{
	UClass* Class = AProcPlane::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateMesh", &AProcPlane::execCreateMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProcPlane);
UClass* Z_Construct_UClass_AProcPlane_NoRegister()
{
	return AProcPlane::StaticClass();
}
struct Z_Construct_UClass_AProcPlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProcPlane.h" },
		{ "ModuleRelativePath", "ProcPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "ProcPlane" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY Section\n" },
#endif
		{ "ModuleRelativePath", "ProcPlane.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY Section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "Category", "ProcPlane" },
		{ "ModuleRelativePath", "ProcPlane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProcPlane_CreateMesh, "CreateMesh" }, // 57776731
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcPlane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProcPlane_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProcPlane_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcPlane, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProcPlane_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProcPlane_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcPlane, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProcPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcPlane_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcPlane_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcPlane_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcPlane_Statics::NewProp_Triangles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProcPlane_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProcPlane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGAM415,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProcPlane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProcPlane_Statics::ClassParams = {
	&AProcPlane::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProcPlane_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProcPlane_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProcPlane_Statics::Class_MetaDataParams), Z_Construct_UClass_AProcPlane_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProcPlane()
{
	if (!Z_Registration_Info_UClass_AProcPlane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProcPlane.OuterSingleton, Z_Construct_UClass_AProcPlane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProcPlane.OuterSingleton;
}
template<> FIRSTPERSONGAM415_API UClass* StaticClass<AProcPlane>()
{
	return AProcPlane::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProcPlane);
AProcPlane::~AProcPlane() {}
// End Class AProcPlane

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProcPlane, AProcPlane::StaticClass, TEXT("AProcPlane"), &Z_Registration_Info_UClass_AProcPlane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProcPlane), 308319868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_3040454761(TEXT("/Script/FirstPersonGAM415"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcPlane_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
