// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/Items/Items.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItems() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlCharacter_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AItems();
BANSUNGONL_API UClass* Z_Construct_UClass_AItems_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AItems Function NotifyItemsPickup
struct Items_eventNotifyItemsPickup_Parms
{
	ABanSungOnlCharacter* Player;
	int32 ItemType;
};
static FName NAME_AItems_NotifyItemsPickup = FName(TEXT("NotifyItemsPickup"));
void AItems::NotifyItemsPickup(ABanSungOnlCharacter* Player, int32 ItemType)
{
	Items_eventNotifyItemsPickup_Parms Parms;
	Parms.Player=Player;
	Parms.ItemType=ItemType;
	ProcessEvent(FindFunctionChecked(NAME_AItems_NotifyItemsPickup),&Parms);
}
struct Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/Items.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventNotifyItemsPickup_Parms, Player), Z_Construct_UClass_ABanSungOnlCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventNotifyItemsPickup_Parms, ItemType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItems, nullptr, "NotifyItemsPickup", nullptr, nullptr, Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::PropPointers), sizeof(Items_eventNotifyItemsPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Items_eventNotifyItemsPickup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItems_NotifyItemsPickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItems_NotifyItemsPickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItems::execNotifyItemsPickup)
{
	P_GET_OBJECT(ABanSungOnlCharacter,Z_Param_Player);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyItemsPickup_Implementation(Z_Param_Player,Z_Param_ItemType);
	P_NATIVE_END;
}
// End Class AItems Function NotifyItemsPickup

// Begin Class AItems Function OnOverlap
struct Z_Construct_UFunction_AItems_OnOverlap_Statics
{
	struct Items_eventOnOverlap_Parms
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
		{ "ModuleRelativePath", "Items/Items.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventOnOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Items_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Items_eventOnOverlap_Parms), &Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Items_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItems_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItems_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItems_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItems, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AItems_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItems_OnOverlap_Statics::Items_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItems_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItems_OnOverlap_Statics::Items_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItems_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItems_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItems::execOnOverlap)
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
// End Class AItems Function OnOverlap

// Begin Class AItems Function SpawnItems
struct Z_Construct_UFunction_AItems_SpawnItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Items/Items.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItems_SpawnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItems, nullptr, "SpawnItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItems_SpawnItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItems_SpawnItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AItems_SpawnItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItems_SpawnItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItems::execSpawnItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnItems();
	P_NATIVE_END;
}
// End Class AItems Function SpawnItems

// Begin Class AItems
void AItems::StaticRegisterNativesAItems()
{
	UClass* Class = AItems::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NotifyItemsPickup", &AItems::execNotifyItemsPickup },
		{ "OnOverlap", &AItems::execOnOverlap },
		{ "SpawnItems", &AItems::execSpawnItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItems);
UClass* Z_Construct_UClass_AItems_NoRegister()
{
	return AItems::StaticClass();
}
struct Z_Construct_UClass_AItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Items/Items.h" },
		{ "ModuleRelativePath", "Items/Items.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ItemsProperties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Items's Var basic\n" },
#endif
		{ "ModuleRelativePath", "Items/Items.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items's Var basic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthItems_MetaData[] = {
		{ "Category", "ItemsProperties" },
		{ "ModuleRelativePath", "Items/Items.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoItem_MetaData[] = {
		{ "Category", "ItemsProperties" },
		{ "ModuleRelativePath", "Items/Items.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatingMovement_MetaData[] = {
		{ "Category", "RotatingMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create items rotate\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/Items.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create items rotate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Coli" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/Items.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToSpawn_MetaData[] = {
		{ "Category", "ItemsSpawn" },
		{ "ModuleRelativePath", "Items/Items.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotatingMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemsToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItems_NotifyItemsPickup, "NotifyItemsPickup" }, // 4244390310
		{ &Z_Construct_UFunction_AItems_OnOverlap, "OnOverlap" }, // 3447372540
		{ &Z_Construct_UFunction_AItems_SpawnItems, "SpawnItems" }, // 1131018570
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItems, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_HealthItems = { "HealthItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItems, HealthItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthItems_MetaData), NewProp_HealthItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_AmmoItem = { "AmmoItem", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItems, AmmoItem), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoItem_MetaData), NewProp_AmmoItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_RotatingMovement = { "RotatingMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItems, RotatingMovement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatingMovement_MetaData), NewProp_RotatingMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItems, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_ItemsToSpawn = { "ItemsToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItems, ItemsToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AItems_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToSpawn_MetaData), NewProp_ItemsToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_HealthItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_AmmoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_RotatingMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_SphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_ItemsToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItems_Statics::ClassParams = {
	&AItems::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItems_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::Class_MetaDataParams), Z_Construct_UClass_AItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItems()
{
	if (!Z_Registration_Info_UClass_AItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItems.OuterSingleton, Z_Construct_UClass_AItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItems.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AItems>()
{
	return AItems::StaticClass();
}
void AItems::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Type(TEXT("Type"));
	const bool bIsValid = true
		&& Name_Type == ClassReps[(int32)ENetFields_Private::Type].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItems"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItems);
AItems::~AItems() {}
// End Class AItems

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItems, AItems::StaticClass, TEXT("AItems"), &Z_Registration_Info_UClass_AItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItems), 2970835574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_4153165588(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_Items_Items_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
