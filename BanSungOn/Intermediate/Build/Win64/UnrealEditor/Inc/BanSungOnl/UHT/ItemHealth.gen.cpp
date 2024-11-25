// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Items/ItemHealth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemHealth() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AItemHealth();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemHealth_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItems();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AItemHealth
void AItemHealth::StaticRegisterNativesAItemHealth()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemHealth);
UClass* Z_Construct_UClass_AItemHealth_NoRegister()
{
	return AItemHealth::StaticClass();
}
struct Z_Construct_UClass_AItemHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/ItemHealth.h" },
		{ "ModuleRelativePath", "Items/ItemHealth.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItems,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemHealth_Statics::ClassParams = {
	&AItemHealth::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemHealth()
{
	if (!Z_Registration_Info_UClass_AItemHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemHealth.OuterSingleton, Z_Construct_UClass_AItemHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemHealth.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AItemHealth>()
{
	return AItemHealth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemHealth);
AItemHealth::~AItemHealth() {}
// End Class AItemHealth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemHealth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemHealth, AItemHealth::StaticClass, TEXT("AItemHealth"), &Z_Registration_Info_UClass_AItemHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemHealth), 836909780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemHealth_h_545478073(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemHealth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_ItemHealth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
