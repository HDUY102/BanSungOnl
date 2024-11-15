// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/BanSungOnlGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlGameMode() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlGameMode();
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class ABanSungOnlGameMode
void ABanSungOnlGameMode::StaticRegisterNativesABanSungOnlGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlGameMode);
UClass* Z_Construct_UClass_ABanSungOnlGameMode_NoRegister()
{
	return ABanSungOnlGameMode::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BanSungOnlGameMode.h" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABanSungOnlGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlGameMode_Statics::ClassParams = {
	&ABanSungOnlGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlGameMode()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlGameMode.OuterSingleton, Z_Construct_UClass_ABanSungOnlGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlGameMode.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<ABanSungOnlGameMode>()
{
	return ABanSungOnlGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlGameMode);
ABanSungOnlGameMode::~ABanSungOnlGameMode() {}
// End Class ABanSungOnlGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_Source_BanSungOnl_BanSungOnlGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlGameMode, ABanSungOnlGameMode::StaticClass, TEXT("ABanSungOnlGameMode"), &Z_Registration_Info_UClass_ABanSungOnlGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlGameMode), 1866930448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_Source_BanSungOnl_BanSungOnlGameMode_h_2167896612(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_Source_BanSungOnl_BanSungOnlGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_Source_BanSungOnl_BanSungOnlGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
