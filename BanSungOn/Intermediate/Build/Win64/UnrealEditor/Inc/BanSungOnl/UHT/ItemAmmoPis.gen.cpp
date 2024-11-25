// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Items/ItemAmmoPis.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAmmoPis() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AItemAmmoPis();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemAmmoPis_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItems();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AItemAmmoPis
void AItemAmmoPis::StaticRegisterNativesAItemAmmoPis()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemAmmoPis);
UClass* Z_Construct_UClass_AItemAmmoPis_NoRegister()
{
	return AItemAmmoPis::StaticClass();
}
struct Z_Construct_UClass_AItemAmmoPis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ItemAmmoPis.h" },
		{ "ModuleRelativePath", "Items/ItemAmmoPis.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemAmmoPis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemAmmoPis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemAmmoPis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemAmmoPis_Statics::ClassParams = {
	&AItemAmmoPis::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemAmmoPis_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemAmmoPis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemAmmoPis()
{
	if (!Z_Registration_Info_UClass_AItemAmmoPis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemAmmoPis.OuterSingleton, Z_Construct_UClass_AItemAmmoPis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemAmmoPis.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AItemAmmoPis>()
{
	return AItemAmmoPis::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemAmmoPis);
AItemAmmoPis::~AItemAmmoPis() {}
// End Class AItemAmmoPis

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoPis_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemAmmoPis, AItemAmmoPis::StaticClass, TEXT("AItemAmmoPis"), &Z_Registration_Info_UClass_AItemAmmoPis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemAmmoPis), 1348114333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoPis_h_3443272330(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoPis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemAmmoPis_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
