// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Weapon/Rifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ARifle();
BANSUNGONL_API UClass* Z_Construct_UClass_ARifle_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AWeapon();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class ARifle
void ARifle::StaticRegisterNativesARifle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARifle);
UClass* Z_Construct_UClass_ARifle_NoRegister()
{
	return ARifle::StaticClass();
}
struct Z_Construct_UClass_ARifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Rifle.h" },
		{ "ModuleRelativePath", "Weapon/Rifle.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARifle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARifle_Statics::ClassParams = {
	&ARifle::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARifle()
{
	if (!Z_Registration_Info_UClass_ARifle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARifle.OuterSingleton, Z_Construct_UClass_ARifle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARifle.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<ARifle>()
{
	return ARifle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARifle);
ARifle::~ARifle() {}
// End Class ARifle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARifle, ARifle::StaticClass, TEXT("ARifle"), &Z_Registration_Info_UClass_ARifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARifle), 2105462169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_2873989840(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
