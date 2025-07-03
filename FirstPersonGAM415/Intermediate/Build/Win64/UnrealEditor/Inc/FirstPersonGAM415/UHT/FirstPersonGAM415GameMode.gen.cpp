// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonGAM415/FirstPersonGAM415GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGAM415GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AFirstPersonGAM415GameMode();
FIRSTPERSONGAM415_API UClass* Z_Construct_UClass_AFirstPersonGAM415GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FirstPersonGAM415();
// End Cross Module References

// Begin Class AFirstPersonGAM415GameMode
void AFirstPersonGAM415GameMode::StaticRegisterNativesAFirstPersonGAM415GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonGAM415GameMode);
UClass* Z_Construct_UClass_AFirstPersonGAM415GameMode_NoRegister()
{
	return AFirstPersonGAM415GameMode::StaticClass();
}
struct Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstPersonGAM415GameMode.h" },
		{ "ModuleRelativePath", "FirstPersonGAM415GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGAM415GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonGAM415,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics::ClassParams = {
	&AFirstPersonGAM415GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstPersonGAM415GameMode()
{
	if (!Z_Registration_Info_UClass_AFirstPersonGAM415GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonGAM415GameMode.OuterSingleton, Z_Construct_UClass_AFirstPersonGAM415GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstPersonGAM415GameMode.OuterSingleton;
}
template<> FIRSTPERSONGAM415_API UClass* StaticClass<AFirstPersonGAM415GameMode>()
{
	return AFirstPersonGAM415GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonGAM415GameMode);
AFirstPersonGAM415GameMode::~AFirstPersonGAM415GameMode() {}
// End Class AFirstPersonGAM415GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonGAM415GameMode, AFirstPersonGAM415GameMode::StaticClass, TEXT("AFirstPersonGAM415GameMode"), &Z_Registration_Info_UClass_AFirstPersonGAM415GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonGAM415GameMode), 3295723028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415GameMode_h_1486033799(TEXT("/Script/FirstPersonGAM415"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_FirstPersonGAM415_Source_FirstPersonGAM415_FirstPersonGAM415GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
