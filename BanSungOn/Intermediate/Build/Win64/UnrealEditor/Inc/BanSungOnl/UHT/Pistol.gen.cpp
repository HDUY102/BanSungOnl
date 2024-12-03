// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Weapon/Pistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_APistol();
BANSUNGONL_API UClass* Z_Construct_UClass_APistol_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AWeapon();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class APistol
void APistol::StaticRegisterNativesAPistol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APistol);
UClass* Z_Construct_UClass_APistol_NoRegister()
{
	return APistol::StaticClass();
}
struct Z_Construct_UClass_APistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Pistol.h" },
		{ "ModuleRelativePath", "Weapon/Pistol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_ShootPistol_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapon/Pistol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_ReloadPistol_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapon/Pistol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_ShootPistol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_ReloadPistol;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APistol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APistol_Statics::NewProp_SB_ShootPistol = { "SB_ShootPistol", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APistol, SB_ShootPistol), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_ShootPistol_MetaData), NewProp_SB_ShootPistol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APistol_Statics::NewProp_SB_ReloadPistol = { "SB_ReloadPistol", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APistol, SB_ReloadPistol), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_ReloadPistol_MetaData), NewProp_SB_ReloadPistol_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APistol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APistol_Statics::NewProp_SB_ShootPistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APistol_Statics::NewProp_SB_ReloadPistol,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APistol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeapon,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APistol_Statics::ClassParams = {
	&APistol::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APistol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams), Z_Construct_UClass_APistol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APistol()
{
	if (!Z_Registration_Info_UClass_APistol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APistol.OuterSingleton, Z_Construct_UClass_APistol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APistol.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<APistol>()
{
	return APistol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APistol);
APistol::~APistol() {}
// End Class APistol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Pistol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APistol, APistol::StaticClass, TEXT("APistol"), &Z_Registration_Info_UClass_APistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APistol), 843664006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Pistol_h_3478388284(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Pistol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
