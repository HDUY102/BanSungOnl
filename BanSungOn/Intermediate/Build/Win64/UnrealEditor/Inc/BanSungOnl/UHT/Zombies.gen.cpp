// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Zombie/Zombies.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombies() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlCharacter_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemAmmoPis_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemAmmoRif_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItemHealth_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombies();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombies_NoRegister();
BANSUNGONL_API UEnum* Z_Construct_UEnum_BanSungOnl_EnumItems();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Enum EnumItems
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EnumItems;
static UEnum* EnumItems_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EnumItems.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EnumItems.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BanSungOnl_EnumItems, (UObject*)Z_Construct_UPackage__Script_BanSungOnl(), TEXT("EnumItems"));
	}
	return Z_Registration_Info_UEnum_EnumItems.OuterSingleton;
}
template<> BANSUNGONL_API UEnum* StaticEnum<EnumItems>()
{
	return EnumItems_StaticEnum();
}
struct Z_Construct_UEnum_BanSungOnl_EnumItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AmmoPis.DisplayName", "Item Pis" },
		{ "AmmoPis.Name", "EnumItems::AmmoPis" },
		{ "AmmoRif.DisplayName", "Item Rif" },
		{ "AmmoRif.Name", "EnumItems::AmmoRif" },
		{ "BlueprintType", "true" },
		{ "Health.DisplayName", "Item Health" },
		{ "Health.Name", "EnumItems::Health" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EnumItems::Health", (int64)EnumItems::Health },
		{ "EnumItems::AmmoRif", (int64)EnumItems::AmmoRif },
		{ "EnumItems::AmmoPis", (int64)EnumItems::AmmoPis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BanSungOnl_EnumItems_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl,
	nullptr,
	"EnumItems",
	"EnumItems",
	Z_Construct_UEnum_BanSungOnl_EnumItems_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BanSungOnl_EnumItems_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BanSungOnl_EnumItems_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BanSungOnl_EnumItems_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BanSungOnl_EnumItems()
{
	if (!Z_Registration_Info_UEnum_EnumItems.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EnumItems.InnerSingleton, Z_Construct_UEnum_BanSungOnl_EnumItems_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EnumItems.InnerSingleton;
}
// End Enum EnumItems

// Begin Class AZombies Function OnEndOverlap
struct Z_Construct_UFunction_AZombies_OnEndOverlap_Statics
{
	struct Zombies_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::Zombies_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::Zombies_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombies_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombies_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombies::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AZombies Function OnEndOverlap

// Begin Class AZombies Function OnOverlap
struct Z_Construct_UFunction_AZombies_OnOverlap_Statics
{
	struct Zombies_eventOnOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Zombies_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Zombies_eventOnOverlap_Parms), &Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AZombies_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombies_OnOverlap_Statics::Zombies_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombies_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombies_OnOverlap_Statics::Zombies_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombies_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombies_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombies::execOnOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AZombies Function OnOverlap

// Begin Class AZombies Function RandomItems
struct Z_Construct_UFunction_AZombies_RandomItems_Statics
{
	struct Zombies_eventRandomItems_Parms
	{
		FVector BodyZombie;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyZombie;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombies_RandomItems_Statics::NewProp_BodyZombie = { "BodyZombie", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventRandomItems_Parms, BodyZombie), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_RandomItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_RandomItems_Statics::NewProp_BodyZombie,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_RandomItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_RandomItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, nullptr, "RandomItems", nullptr, nullptr, Z_Construct_UFunction_AZombies_RandomItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_RandomItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombies_RandomItems_Statics::Zombies_eventRandomItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_RandomItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombies_RandomItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombies_RandomItems_Statics::Zombies_eventRandomItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombies_RandomItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombies_RandomItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombies::execRandomItems)
{
	P_GET_STRUCT(FVector,Z_Param_BodyZombie);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RandomItems(Z_Param_BodyZombie);
	P_NATIVE_END;
}
// End Class AZombies Function RandomItems

// Begin Class AZombies Function TakeDmg
struct Z_Construct_UFunction_AZombies_TakeDmg_Statics
{
	struct Zombies_eventTakeDmg_Parms
	{
		float Dmg;
		ABanSungOnlCharacter* Shooter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dmg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shooter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombies_TakeDmg_Statics::NewProp_Dmg = { "Dmg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventTakeDmg_Parms, Dmg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombies_TakeDmg_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Zombies_eventTakeDmg_Parms, Shooter), Z_Construct_UClass_ABanSungOnlCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombies_TakeDmg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_TakeDmg_Statics::NewProp_Dmg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombies_TakeDmg_Statics::NewProp_Shooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_TakeDmg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombies_TakeDmg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombies, nullptr, "TakeDmg", nullptr, nullptr, Z_Construct_UFunction_AZombies_TakeDmg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_TakeDmg_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombies_TakeDmg_Statics::Zombies_eventTakeDmg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombies_TakeDmg_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombies_TakeDmg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombies_TakeDmg_Statics::Zombies_eventTakeDmg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombies_TakeDmg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombies_TakeDmg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombies::execTakeDmg)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Dmg);
	P_GET_OBJECT(ABanSungOnlCharacter,Z_Param_Shooter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDmg(Z_Param_Dmg,Z_Param_Shooter);
	P_NATIVE_END;
}
// End Class AZombies Function TakeDmg

// Begin Class AZombies
void AZombies::StaticRegisterNativesAZombies()
{
	UClass* Class = AZombies::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEndOverlap", &AZombies::execOnEndOverlap },
		{ "OnOverlap", &AZombies::execOnOverlap },
		{ "RandomItems", &AZombies::execRandomItems },
		{ "TakeDmg", &AZombies::execTakeDmg },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Category", "Zombies" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthZomb_MetaData[] = {
		{ "Category", "Zombies" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Coli" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanAtk_MetaData[] = {
		{ "Category", "Zombies" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Atk\n// UFUNCTION(Server,Unreliable)\n// void Server_AtkCharacter();\n" },
#endif
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Atk\nUFUNCTION(Server,Unreliable)\nvoid Server_AtkCharacter();" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthToSpawn_MetaData[] = {
		{ "Category", "ItemsSpawn" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PisToSpawn_MetaData[] = {
		{ "Category", "ItemsSpawn" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifToSpawn_MetaData[] = {
		{ "Category", "ItemsSpawn" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeItem_MetaData[] = {
		{ "Category", "Zombies" },
		{ "ModuleRelativePath", "Zombie/Zombies.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthZomb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageZomb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthZomb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static void NewProp_CanAtk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanAtk;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PisToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RifToSpawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeItem_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombies_OnEndOverlap, "OnEndOverlap" }, // 4242726135
		{ &Z_Construct_UFunction_AZombies_OnOverlap, "OnOverlap" }, // 2672535909
		{ &Z_Construct_UFunction_AZombies_RandomItems, "RandomItems" }, // 1344175222
		{ &Z_Construct_UFunction_AZombies_TakeDmg, "TakeDmg" }, // 4069674465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombies>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_HealthZomb = { "HealthZomb", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, HealthZomb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthZomb_MetaData), NewProp_HealthZomb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_DamageZomb = { "DamageZomb", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, DamageZomb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageZomb_MetaData), NewProp_DamageZomb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_MaxHealthZomb = { "MaxHealthZomb", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, MaxHealthZomb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthZomb_MetaData), NewProp_MaxHealthZomb_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
void Z_Construct_UClass_AZombies_Statics::NewProp_CanAtk_SetBit(void* Obj)
{
	((AZombies*)Obj)->CanAtk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_CanAtk = { "CanAtk", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AZombies), &Z_Construct_UClass_AZombies_Statics::NewProp_CanAtk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanAtk_MetaData), NewProp_CanAtk_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_HealthToSpawn = { "HealthToSpawn", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, HealthToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemHealth_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthToSpawn_MetaData), NewProp_HealthToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_PisToSpawn = { "PisToSpawn", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, PisToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemAmmoPis_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PisToSpawn_MetaData), NewProp_PisToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_RifToSpawn = { "RifToSpawn", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, RifToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemAmmoRif_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifToSpawn_MetaData), NewProp_RifToSpawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_TypeItem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombies_Statics::NewProp_TypeItem = { "TypeItem", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombies, TypeItem), Z_Construct_UEnum_BanSungOnl_EnumItems, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeItem_MetaData), NewProp_TypeItem_MetaData) }; // 1198418091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_HealthZomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_DamageZomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_MaxHealthZomb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_CanAtk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_WidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_HealthToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_PisToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_RifToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_TypeItem_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombies_Statics::NewProp_TypeItem,
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
	FuncInfo,
	Z_Construct_UClass_AZombies_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
	static const FName Name_CanAtk(TEXT("CanAtk"));
	const bool bIsValid = true
		&& Name_HealthZomb == ClassReps[(int32)ENetFields_Private::HealthZomb].Property->GetFName()
		&& Name_DamageZomb == ClassReps[(int32)ENetFields_Private::DamageZomb].Property->GetFName()
		&& Name_CanAtk == ClassReps[(int32)ENetFields_Private::CanAtk].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AZombies"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombies);
AZombies::~AZombies() {}
// End Class AZombies

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EnumItems_StaticEnum, TEXT("EnumItems"), &Z_Registration_Info_UEnum_EnumItems, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1198418091U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombies, AZombies::StaticClass, TEXT("AZombies"), &Z_Registration_Info_UClass_AZombies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombies), 827974721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_2584192849(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_Zombie_Zombies_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
