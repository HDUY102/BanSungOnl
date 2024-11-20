// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Zombie/Zombies.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombies() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AZombies();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombies_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AZombies
void AZombies::StaticRegisterNativesAZombies()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombies);
UClass* Z_Construct_UClass_AZombies_NoRegister()
{
	return AZombies::StaticClass();
}
struct Z_Construct_UClass_AZombies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zombie/Zombies.h" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthZomb_MetaData[] = {
		{ "Category", "Zombies" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageZomb_MetaData[] = {
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthZomb_MetaData[] = {
		{ "Category", "Zombies" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display HealthBar\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display HealthBar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthZomb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageZomb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthZomb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombies>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_HealthZomb = { "HealthZomb", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, HealthZomb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthZomb_MetaData), NewProp_HealthZomb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_DamageZomb = { "DamageZomb", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, DamageZomb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageZomb_MetaData), NewProp_DamageZomb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_MaxHealthZomb = { "MaxHealthZomb", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, MaxHealthZomb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthZomb_MetaData), NewProp_MaxHealthZomb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_HealthZomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_DamageZomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_MaxHealthZomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_WidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AZombies_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombies_Statics::ClassParams = {
	&AZombies::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AZombies_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombies()
{
	if (!Z_Registration_Info_UClass_AZombies.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombies.OuterSingleton, Z_Construct_UClass_AZombies_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombies.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AZombies>()
{
	return AZombies::StaticClass();
}
void AZombies::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_HealthZomb(TEXT("HealthZomb"));
	static const FName Name_DamageZomb(TEXT("DamageZomb"));
	const bool bIsValid = true
		&& Name_HealthZomb == ClassReps[(int32)ENetFields_Private::HealthZomb].Property->GetFName()
		&& Name_DamageZomb == ClassReps[(int32)ENetFields_Private::DamageZomb].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AZombies"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombies);
AZombies::~AZombies() {}
// End Class AZombies

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombies, AZombies::StaticClass, TEXT("AZombies"), &Z_Registration_Info_UClass_AZombies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombies), 2576595539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_1600154759(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
