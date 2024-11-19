// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/BanSungOnlCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlCharacter() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlCharacter();
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlCharacter_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_APistol_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_ARifle_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Delegate FShowHealth
struct Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "ShowHealth__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FShowHealth_DelegateWrapper(const FMulticastScriptDelegate& ShowHealth)
{
	ShowHealth.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FShowHealth

// Begin Delegate FShowWinGame
struct Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// show HUD attacked\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "show HUD attacked" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "ShowWinGame__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FShowWinGame_DelegateWrapper(const FMulticastScriptDelegate& ShowWinGame)
{
	ShowWinGame.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FShowWinGame

// Begin Class ABanSungOnlCharacter Function Server_EquipPistol
static FName NAME_ABanSungOnlCharacter_Server_EquipPistol = FName(TEXT("Server_EquipPistol"));
void ABanSungOnlCharacter::Server_EquipPistol()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlCharacter_Server_EquipPistol),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "Server_EquipPistol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execServer_EquipPistol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipPistol_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function Server_EquipPistol

// Begin Class ABanSungOnlCharacter Function Server_EquipRifle
static FName NAME_ABanSungOnlCharacter_Server_EquipRifle = FName(TEXT("Server_EquipRifle"));
void ABanSungOnlCharacter::Server_EquipRifle()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlCharacter_Server_EquipRifle),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "Server_EquipRifle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execServer_EquipRifle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EquipRifle_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function Server_EquipRifle

// Begin Class ABanSungOnlCharacter Function Server_SpawnPistol
static FName NAME_ABanSungOnlCharacter_Server_SpawnPistol = FName(TEXT("Server_SpawnPistol"));
void ABanSungOnlCharacter::Server_SpawnPistol()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlCharacter_Server_SpawnPistol),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "Server_SpawnPistol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execServer_SpawnPistol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SpawnPistol_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function Server_SpawnPistol

// Begin Class ABanSungOnlCharacter Function Server_SpawnRifle
static FName NAME_ABanSungOnlCharacter_Server_SpawnRifle = FName(TEXT("Server_SpawnRifle"));
void ABanSungOnlCharacter::Server_SpawnRifle()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlCharacter_Server_SpawnRifle),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "Server_SpawnRifle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execServer_SpawnRifle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SpawnRifle_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function Server_SpawnRifle

// Begin Class ABanSungOnlCharacter
void ABanSungOnlCharacter::StaticRegisterNativesABanSungOnlCharacter()
{
	UClass* Class = ABanSungOnlCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_EquipPistol", &ABanSungOnlCharacter::execServer_EquipPistol },
		{ "Server_EquipRifle", &ABanSungOnlCharacter::execServer_EquipRifle },
		{ "Server_SpawnPistol", &ABanSungOnlCharacter::execServer_SpawnPistol },
		{ "Server_SpawnRifle", &ABanSungOnlCharacter::execServer_SpawnRifle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlCharacter);
UClass* Z_Construct_UClass_ABanSungOnlCharacter_NoRegister()
{
	return ABanSungOnlCharacter::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// show HUD WinGame\n// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowNameItem, int32, ItemType); // show name item\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BanSungOnlCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "show HUD WinGame\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowNameItem, int32, ItemType);  show name item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rifle_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pistol_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleToSpawn_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PistolToSpawn_MetaData[] = {
		{ "Category", "input" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowHealth_MetaData[] = {
		{ "Category", "Show HUD Attacked" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Var show HUD attacked\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Var show HUD attacked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowWinGame_MetaData[] = {
		{ "Category", "Show Win Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Var Show Win Game\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Var Show Win Game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display HealthBar\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display HealthBar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rifle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pistol;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RifleToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PistolToSpawn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowHealth;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowWinGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipPistol, "Server_EquipPistol" }, // 1687733419
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_Server_EquipRifle, "Server_EquipRifle" }, // 456743258
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnPistol, "Server_SpawnPistol" }, // 1523122481
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_Server_SpawnRifle, "Server_SpawnRifle" }, // 490397120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CurWeapon = { "CurWeapon", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, CurWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurWeapon_MetaData), NewProp_CurWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Rifle = { "Rifle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Rifle), Z_Construct_UClass_ARifle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rifle_MetaData), NewProp_Rifle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Pistol = { "Pistol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Pistol), Z_Construct_UClass_APistol_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pistol_MetaData), NewProp_Pistol_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_RifleToSpawn = { "RifleToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, RifleToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleToSpawn_MetaData), NewProp_RifleToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_PistolToSpawn = { "PistolToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, PistolToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolToSpawn_MetaData), NewProp_PistolToSpawn_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowHealth = { "ShowHealth", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowHealth), Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowHealth_MetaData), NewProp_ShowHealth_MetaData) }; // 2563558558
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowWinGame = { "ShowWinGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowWinGame), Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowWinGame_MetaData), NewProp_ShowWinGame_MetaData) }; // 370598886
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOnlCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CurWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Rifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Pistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_RifleToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_PistolToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowWinGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_WidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABanSungOnlCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::ClassParams = {
	&ABanSungOnlCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABanSungOnlCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlCharacter()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlCharacter.OuterSingleton, Z_Construct_UClass_ABanSungOnlCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlCharacter.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<ABanSungOnlCharacter>()
{
	return ABanSungOnlCharacter::StaticClass();
}
void ABanSungOnlCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_CurWeapon(TEXT("CurWeapon"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_CurWeapon == ClassReps[(int32)ENetFields_Private::CurWeapon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABanSungOnlCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlCharacter);
ABanSungOnlCharacter::~ABanSungOnlCharacter() {}
// End Class ABanSungOnlCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlCharacter, ABanSungOnlCharacter::StaticClass, TEXT("ABanSungOnlCharacter"), &Z_Registration_Info_UClass_ABanSungOnlCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlCharacter), 1254394950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_2427480965(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
