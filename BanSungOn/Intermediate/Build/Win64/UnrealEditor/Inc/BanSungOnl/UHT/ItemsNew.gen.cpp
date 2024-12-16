// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Items/ItemsNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemsNew() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AItems();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemsNew();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemsNew_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AItemsNew
void AItemsNew::StaticRegisterNativesAItemsNew()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemsNew);
UClass* Z_Construct_UClass_AItemsNew_NoRegister()
{
	return AItemsNew::StaticClass();
}
struct Z_Construct_UClass_AItemsNew_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ItemsNew.h" },
		{ "ModuleRelativePath", "Items/ItemsNew.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemsNew>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemsNew_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemsNew_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemsNew_Statics::ClassParams = {
	&AItemsNew::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemsNew_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemsNew_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemsNew()
{
	if (!Z_Registration_Info_UClass_AItemsNew.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemsNew.OuterSingleton, Z_Construct_UClass_AItemsNew_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemsNew.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AItemsNew>()
{
	return AItemsNew::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemsNew);
AItemsNew::~AItemsNew() {}
// End Class AItemsNew

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemsNew_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemsNew, AItemsNew::StaticClass, TEXT("AItemsNew"), &Z_Registration_Info_UClass_AItemsNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemsNew), 676876970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemsNew_h_2231551957(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemsNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemsNew_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
