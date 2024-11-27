// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Zombie/ZombiesBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiesBoss() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AZombies();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombiesBoss();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombiesBoss_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AZombiesBoss
void AZombiesBoss::StaticRegisterNativesAZombiesBoss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombiesBoss);
UClass* Z_Construct_UClass_AZombiesBoss_NoRegister()
{
	return AZombiesBoss::StaticClass();
}
struct Z_Construct_UClass_AZombiesBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zombie/ZombiesBoss.h" },
		{ "ModuleRelativePath", "Zombie/ZombiesBoss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombiesBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AZombiesBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AZombies,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombiesBoss_Statics::ClassParams = {
	&AZombiesBoss::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombiesBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombiesBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombiesBoss()
{
	if (!Z_Registration_Info_UClass_AZombiesBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombiesBoss.OuterSingleton, Z_Construct_UClass_AZombiesBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombiesBoss.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AZombiesBoss>()
{
	return AZombiesBoss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombiesBoss);
AZombiesBoss::~AZombiesBoss() {}
// End Class AZombiesBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombiesBoss, AZombiesBoss::StaticClass, TEXT("AZombiesBoss"), &Z_Registration_Info_UClass_AZombiesBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombiesBoss), 325999410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesBoss_h_1443754215(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_ZombiesBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
