// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Projectitle/Bullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullet() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABullet();
BANSUNGONL_API UClass* Z_Construct_UClass_ABullet_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class ABullet Function SetBulletProperties
struct Bullet_eventSetBulletProperties_Parms
{
	float Damage;
	float Speed;
};
static FName NAME_ABullet_SetBulletProperties = FName(TEXT("SetBulletProperties"));
void ABullet::SetBulletProperties(float Damage, float Speed)
{
	Bullet_eventSetBulletProperties_Parms Parms;
	Parms.Damage=Damage;
	Parms.Speed=Speed;
	ProcessEvent(FindFunctionChecked(NAME_ABullet_SetBulletProperties),&Parms);
}
struct Z_Construct_UFunction_ABullet_SetBulletProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Projectitle/Bullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventSetBulletProperties_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventSetBulletProperties_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "SetBulletProperties", nullptr, nullptr, Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::PropPointers), sizeof(Bullet_eventSetBulletProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::Function_MetaDataParams) };
static_assert(sizeof(Bullet_eventSetBulletProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_SetBulletProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_SetBulletProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execSetBulletProperties)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBulletProperties_Implementation(Z_Param_Damage,Z_Param_Speed);
	P_NATIVE_END;
}
// End Class ABullet Function SetBulletProperties

// Begin Class ABullet Function SetDirectionBullet
struct Bullet_eventSetDirectionBullet_Parms
{
	FVector NewDirection;
};
static FName NAME_ABullet_SetDirectionBullet = FName(TEXT("SetDirectionBullet"));
void ABullet::SetDirectionBullet(const FVector NewDirection)
{
	Bullet_eventSetDirectionBullet_Parms Parms;
	Parms.NewDirection=NewDirection;
	ProcessEvent(FindFunctionChecked(NAME_ABullet_SetDirectionBullet),&Parms);
}
struct Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Projectitle/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::NewProp_NewDirection = { "NewDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventSetDirectionBullet_Parms, NewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDirection_MetaData), NewProp_NewDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::NewProp_NewDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "SetDirectionBullet", nullptr, nullptr, Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::PropPointers), sizeof(Bullet_eventSetDirectionBullet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Bullet_eventSetDirectionBullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_SetDirectionBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_SetDirectionBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execSetDirectionBullet)
{
	P_GET_STRUCT(FVector,Z_Param_NewDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirectionBullet_Implementation(Z_Param_NewDirection);
	P_NATIVE_END;
}
// End Class ABullet Function SetDirectionBullet

// Begin Class ABullet
void ABullet::StaticRegisterNativesABullet()
{
	UClass* Class = ABullet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBulletProperties", &ABullet::execSetBulletProperties },
		{ "SetDirectionBullet", &ABullet::execSetDirectionBullet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullet);
UClass* Z_Construct_UClass_ABullet_NoRegister()
{
	return ABullet::StaticClass();
}
struct Z_Construct_UClass_ABullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectitle/Bullet.h" },
		{ "ModuleRelativePath", "Projectitle/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Projectitle/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletDmg_MetaData[] = {
		{ "ModuleRelativePath", "Projectitle/Bullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Projectitle/Bullet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletDmg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullet_SetBulletProperties, "SetBulletProperties" }, // 3758176783
		{ &Z_Construct_UFunction_ABullet_SetDirectionBullet, "SetDirectionBullet" }, // 2895194506
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, BulletSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletSpeed_MetaData), NewProp_BulletSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_BulletDmg = { "BulletDmg", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, BulletDmg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletDmg_MetaData), NewProp_BulletDmg_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABullet_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullet, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_BulletDmg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullet_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
	&ABullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullet()
{
	if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullet.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<ABullet>()
{
	return ABullet::StaticClass();
}
void ABullet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_BulletSpeed(TEXT("BulletSpeed"));
	static const FName Name_BulletDmg(TEXT("BulletDmg"));
	static const FName Name_Direction(TEXT("Direction"));
	const bool bIsValid = true
		&& Name_BulletSpeed == ClassReps[(int32)ENetFields_Private::BulletSpeed].Property->GetFName()
		&& Name_BulletDmg == ClassReps[(int32)ENetFields_Private::BulletDmg].Property->GetFName()
		&& Name_Direction == ClassReps[(int32)ENetFields_Private::Direction].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABullet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullet);
ABullet::~ABullet() {}
// End Class ABullet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 2924994383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_849832491(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Projectitle_Bullet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
