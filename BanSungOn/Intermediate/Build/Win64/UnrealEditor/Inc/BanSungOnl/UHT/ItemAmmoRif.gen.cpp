// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Items/ItemAmmoRif.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAmmoRif() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AItemAmmoRif();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemAmmoRif_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItems();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AItemAmmoRif
void AItemAmmoRif::StaticRegisterNativesAItemAmmoRif()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemAmmoRif);
UClass* Z_Construct_UClass_AItemAmmoRif_NoRegister()
{
	return AItemAmmoRif::StaticClass();
}
struct Z_Construct_UClass_AItemAmmoRif_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ItemAmmoRif.h" },
		{ "ModuleRelativePath", "Items/ItemAmmoRif.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemAmmoRif>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemAmmoRif_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemAmmoRif_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemAmmoRif_Statics::ClassParams = {
	&AItemAmmoRif::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemAmmoRif_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemAmmoRif_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemAmmoRif()
{
	if (!Z_Registration_Info_UClass_AItemAmmoRif.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemAmmoRif.OuterSingleton, Z_Construct_UClass_AItemAmmoRif_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemAmmoRif.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AItemAmmoRif>()
{
	return AItemAmmoRif::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemAmmoRif);
AItemAmmoRif::~AItemAmmoRif() {}
// End Class AItemAmmoRif

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoRif_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemAmmoRif, AItemAmmoRif::StaticClass, TEXT("AItemAmmoRif"), &Z_Registration_Info_UClass_AItemAmmoRif, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemAmmoRif), 2053222447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoRif_h_302941650(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoRif_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoRif_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
