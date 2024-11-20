// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Zombie/ZombiesNor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiesNor() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AZombies();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombiesNor();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombiesNor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AZombiesNor
void AZombiesNor::StaticRegisterNativesAZombiesNor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombiesNor);
UClass* Z_Construct_UClass_AZombiesNor_NoRegister()
{
	return AZombiesNor::StaticClass();
}
struct Z_Construct_UClass_AZombiesNor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zombie/ZombiesNor.h" },
		{ "ModuleRelativePath", "Zombie/ZombiesNor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombiesNor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AZombiesNor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AZombies,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesNor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombiesNor_Statics::ClassParams = {
	&AZombiesNor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesNor_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombiesNor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombiesNor()
{
	if (!Z_Registration_Info_UClass_AZombiesNor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombiesNor.OuterSingleton, Z_Construct_UClass_AZombiesNor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombiesNor.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AZombiesNor>()
{
	return AZombiesNor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombiesNor);
AZombiesNor::~AZombiesNor() {}
// End Class AZombiesNor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesNor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombiesNor, AZombiesNor::StaticClass, TEXT("AZombiesNor"), &Z_Registration_Info_UClass_AZombiesNor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombiesNor), 2725809847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesNor_h_1846334996(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesNor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesNor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
