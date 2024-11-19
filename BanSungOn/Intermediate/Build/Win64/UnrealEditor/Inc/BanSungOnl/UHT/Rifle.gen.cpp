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
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_ShootRifle_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapon/Rifle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_ReloadRifle_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapon/Rifle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_ShootRifle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_ReloadRifle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_SB_ShootRifle = { "SB_ShootRifle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARifle, SB_ShootRifle), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_ShootRifle_MetaData), NewProp_SB_ShootRifle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifle_Statics::NewProp_SB_ReloadRifle = { "SB_ReloadRifle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARifle, SB_ReloadRifle), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_ReloadRifle_MetaData), NewProp_SB_ReloadRifle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARifle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_SB_ShootRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifle_Statics::NewProp_SB_ReloadRifle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ARifle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::PropPointers),
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
		{ Z_Construct_UClass_ARifle, ARifle::StaticClass, TEXT("ARifle"), &Z_Registration_Info_UClass_ARifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARifle), 2719916943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_1454102604(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Rifle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
