// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Weapon/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABullet_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AWeapon();
BANSUNGONL_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AWeapon Function ReloadSound
struct Z_Construct_UFunction_AWeapon_ReloadSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ReloadSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "ReloadSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ReloadSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_ReloadSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeapon_ReloadSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_ReloadSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execReloadSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReloadSound();
	P_NATIVE_END;
}
// End Class AWeapon Function ReloadSound

// Begin Class AWeapon Function Server_ShootBullet
struct Weapon_eventServer_ShootBullet_Parms
{
	FVector Location;
};
static FName NAME_AWeapon_Server_ShootBullet = FName(TEXT("Server_ShootBullet"));
void AWeapon::Server_ShootBullet(const FVector Location)
{
	Weapon_eventServer_ShootBullet_Parms Parms;
	Parms.Location=Location;
	ProcessEvent(FindFunctionChecked(NAME_AWeapon_Server_ShootBullet),&Parms);
}
struct Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventServer_ShootBullet_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Server_ShootBullet", nullptr, nullptr, Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::PropPointers), sizeof(Weapon_eventServer_ShootBullet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Weapon_eventServer_ShootBullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeapon_Server_ShootBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_Server_ShootBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execServer_ShootBullet)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ShootBullet_Implementation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class AWeapon Function Server_ShootBullet

// Begin Class AWeapon Function ShootSound
struct Z_Construct_UFunction_AWeapon_ShootSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ShootSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "ShootSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ShootSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_ShootSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeapon_ShootSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_ShootSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execShootSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootSound();
	P_NATIVE_END;
}
// End Class AWeapon Function ShootSound

// Begin Class AWeapon
void AWeapon::StaticRegisterNativesAWeapon()
{
	UClass* Class = AWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReloadSound", &AWeapon::execReloadSound },
		{ "Server_ShootBullet", &AWeapon::execServer_ShootBullet },
		{ "ShootSound", &AWeapon::execShootSound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Weapon.h" },
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_ShootSound_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound Shoot\n" },
#endif
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound Shoot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SB_ReloadSound_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound Reload\n" },
#endif
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound Reload" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[] = {
		{ "Category", "BulletToSocket" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawned_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_ShootSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SB_ReloadSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurAmmo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletSpawned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_ReloadSound, "ReloadSound" }, // 2102349448
		{ &Z_Construct_UFunction_AWeapon_Server_ShootBullet, "Server_ShootBullet" }, // 3252953574
		{ &Z_Construct_UFunction_AWeapon_ShootSound, "ShootSound" }, // 2321030508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SB_ShootSound = { "SB_ShootSound", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, SB_ShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_ShootSound_MetaData), NewProp_SB_ShootSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_SB_ReloadSound = { "SB_ReloadSound", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, SB_ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SB_ReloadSound_MetaData), NewProp_SB_ReloadSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ammo_MetaData), NewProp_Ammo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_CurAmmo = { "CurAmmo", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, CurAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurAmmo_MetaData), NewProp_CurAmmo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunMesh_MetaData), NewProp_GunMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpawned = { "BulletSpawned", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BulletSpawned), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpawned_MetaData), NewProp_BulletSpawned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SB_ShootSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_SB_ReloadSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_CurAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_GunMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BulletSpawned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AWeapon>()
{
	return AWeapon::StaticClass();
}
void AWeapon::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Ammo(TEXT("Ammo"));
	static const FName Name_CurAmmo(TEXT("CurAmmo"));
	const bool bIsValid = true
		&& Name_Ammo == ClassReps[(int32)ENetFields_Private::Ammo].Property->GetFName()
		&& Name_CurAmmo == ClassReps[(int32)ENetFields_Private::CurAmmo].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWeapon"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// End Class AWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 248142591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_2306113272(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Weapon_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
