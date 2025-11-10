// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGAM415/ProcMeshFromStatic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProcMeshFromStatic() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AProcMeshFromStatic();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AProcMeshFromStatic_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGAM415();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProcMeshFromStatic ******************************************************
void AProcMeshFromStatic::StaticRegisterNativesAProcMeshFromStatic()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProcMeshFromStatic;
UClass* AProcMeshFromStatic::GetPrivateStaticClass()
{
	using TClass = AProcMeshFromStatic;
	if (!Z_Registration_Info_UClass_AProcMeshFromStatic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProcMeshFromStatic"),
			Z_Registration_Info_UClass_AProcMeshFromStatic.InnerSingleton,
			StaticRegisterNativesAProcMeshFromStatic,
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
	return Z_Registration_Info_UClass_AProcMeshFromStatic.InnerSingleton;
}
UClass* Z_Construct_UClass_AProcMeshFromStatic_NoRegister()
{
	return AProcMeshFromStatic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProcMeshFromStatic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProcMeshFromStatic.h" },
		{ "ModuleRelativePath", "ProcMeshFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "ProcMeshFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "ProcMeshFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "ModuleRelativePath", "ProcMeshFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "ModuleRelativePath", "ProcMeshFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseMesh_MetaData[] = {
		{ "Category", "ProcMeshFromStatic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProcMeshFromStatic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_baseMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProcMeshFromStatic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcMeshFromStatic, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcMeshFromStatic, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcMeshFromStatic, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcMeshFromStatic, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_baseMesh = { "baseMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProcMeshFromStatic, baseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseMesh_MetaData), NewProp_baseMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProcMeshFromStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_VertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProcMeshFromStatic_Statics::NewProp_baseMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshFromStatic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProcMeshFromStatic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGAM415,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshFromStatic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProcMeshFromStatic_Statics::ClassParams = {
	&AProcMeshFromStatic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProcMeshFromStatic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshFromStatic_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProcMeshFromStatic_Statics::Class_MetaDataParams), Z_Construct_UClass_AProcMeshFromStatic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProcMeshFromStatic()
{
	if (!Z_Registration_Info_UClass_AProcMeshFromStatic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProcMeshFromStatic.OuterSingleton, Z_Construct_UClass_AProcMeshFromStatic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProcMeshFromStatic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProcMeshFromStatic);
AProcMeshFromStatic::~AProcMeshFromStatic() {}
// ********** End Class AProcMeshFromStatic ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcMeshFromStatic_h__Script_FirstPersonGAM415_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProcMeshFromStatic, AProcMeshFromStatic::StaticClass, TEXT("AProcMeshFromStatic"), &Z_Registration_Info_UClass_AProcMeshFromStatic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProcMeshFromStatic), 3305162049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcMeshFromStatic_h__Script_FirstPersonGAM415_3892294936(TEXT("/Script/FirstPersonGAM415"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcMeshFromStatic_h__Script_FirstPersonGAM415_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_FPSGAM415_FirstPersonGAM415_Source_FirstPersonGAM415_ProcMeshFromStatic_h__Script_FirstPersonGAM415_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
