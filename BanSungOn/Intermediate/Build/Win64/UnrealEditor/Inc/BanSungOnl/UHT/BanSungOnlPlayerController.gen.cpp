// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/BanSungOnlPlayerController.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlPlayerController() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlPlayerController();
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlPlayerController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class ABanSungOnlPlayerController Function Client_PlayFireSound
static FName NAME_ABanSungOnlPlayerController_Client_PlayFireSound = FName(TEXT("Client_PlayFireSound"));
void ABanSungOnlPlayerController::Client_PlayFireSound()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Client_PlayFireSound),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Client_PlayFireSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execClient_PlayFireSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_PlayFireSound_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function Client_PlayFireSound

// Begin Class ABanSungOnlPlayerController Function Client_PlayReloadSound
static FName NAME_ABanSungOnlPlayerController_Client_PlayReloadSound = FName(TEXT("Client_PlayReloadSound"));
void ABanSungOnlPlayerController::Client_PlayReloadSound()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Client_PlayReloadSound),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Client_PlayReloadSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execClient_PlayReloadSound)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_PlayReloadSound_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function Client_PlayReloadSound

// Begin Class ABanSungOnlPlayerController Function Server_FirePistol
static FName NAME_ABanSungOnlPlayerController_Server_FirePistol = FName(TEXT("Server_FirePistol"));
void ABanSungOnlPlayerController::Server_FirePistol()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Server_FirePistol),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fire Input\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire Input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Server_FirePistol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execServer_FirePistol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_FirePistol_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function Server_FirePistol

// Begin Class ABanSungOnlPlayerController Function Server_FireRifle
static FName NAME_ABanSungOnlPlayerController_Server_FireRifle = FName(TEXT("Server_FireRifle"));
void ABanSungOnlPlayerController::Server_FireRifle()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Server_FireRifle),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Server_FireRifle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execServer_FireRifle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_FireRifle_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function Server_FireRifle

// Begin Class ABanSungOnlPlayerController Function Server_Reload
static FName NAME_ABanSungOnlPlayerController_Server_Reload = FName(TEXT("Server_Reload"));
void ABanSungOnlPlayerController::Server_Reload()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Server_Reload),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reload Input\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload Input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Server_Reload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execServer_Reload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Reload_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function Server_Reload

// Begin Class ABanSungOnlPlayerController Function Server_SetRotation
struct BanSungOnlPlayerController_eventServer_SetRotation_Parms
{
	FVector MousePosition;
};
static FName NAME_ABanSungOnlPlayerController_Server_SetRotation = FName(TEXT("Server_SetRotation"));
void ABanSungOnlPlayerController::Server_SetRotation(const FVector MousePosition)
{
	BanSungOnlPlayerController_eventServer_SetRotation_Parms Parms;
	Parms.MousePosition=MousePosition;
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Server_SetRotation),&Parms);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move Input\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MousePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::NewProp_MousePosition = { "MousePosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlPlayerController_eventServer_SetRotation_Parms, MousePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePosition_MetaData), NewProp_MousePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::NewProp_MousePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Server_SetRotation", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::PropPointers), sizeof(BanSungOnlPlayerController_eventServer_SetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(BanSungOnlPlayerController_eventServer_SetRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execServer_SetRotation)
{
	P_GET_STRUCT(FVector,Z_Param_MousePosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetRotation_Implementation(Z_Param_MousePosition);
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function Server_SetRotation

// Begin Class ABanSungOnlPlayerController
void ABanSungOnlPlayerController::StaticRegisterNativesABanSungOnlPlayerController()
{
	UClass* Class = ABanSungOnlPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_PlayFireSound", &ABanSungOnlPlayerController::execClient_PlayFireSound },
		{ "Client_PlayReloadSound", &ABanSungOnlPlayerController::execClient_PlayReloadSound },
		{ "Server_FirePistol", &ABanSungOnlPlayerController::execServer_FirePistol },
		{ "Server_FireRifle", &ABanSungOnlPlayerController::execServer_FireRifle },
		{ "Server_Reload", &ABanSungOnlPlayerController::execServer_Reload },
		{ "Server_SetRotation", &ABanSungOnlPlayerController::execServer_SetRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlPlayerController);
UClass* Z_Construct_UClass_ABanSungOnlPlayerController_NoRegister()
{
	return ABanSungOnlPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BanSungOnlPlayerController.h" },
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Variable Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Variable Fire Input Action */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable Fire Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyBoardPistol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Change gun */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change gun" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyBoardRifle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAmmo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reload Ammo */" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload Ammo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnKeyBoardPistol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnKeyBoardRifle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAmmo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayFireSound, "Client_PlayFireSound" }, // 2524822919
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Client_PlayReloadSound, "Client_PlayReloadSound" }, // 2461445346
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol, "Server_FirePistol" }, // 2947245062
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle, "Server_FireRifle" }, // 2030136717
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload, "Server_Reload" }, // 197696860
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation, "Server_SetRotation" }, // 3440356538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnKeyBoardPistol = { "OnKeyBoardPistol", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, OnKeyBoardPistol), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyBoardPistol_MetaData), NewProp_OnKeyBoardPistol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnKeyBoardRifle = { "OnKeyBoardRifle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, OnKeyBoardRifle), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyBoardRifle_MetaData), NewProp_OnKeyBoardRifle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_ReloadAmmo = { "ReloadAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, ReloadAmmo), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAmmo_MetaData), NewProp_ReloadAmmo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOnlPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_FireAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnKeyBoardPistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnKeyBoardRifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_ReloadAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABanSungOnlPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::ClassParams = {
	&ABanSungOnlPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABanSungOnlPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlPlayerController()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlPlayerController.OuterSingleton, Z_Construct_UClass_ABanSungOnlPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlPlayerController.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<ABanSungOnlPlayerController>()
{
	return ABanSungOnlPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlPlayerController);
ABanSungOnlPlayerController::~ABanSungOnlPlayerController() {}
// End Class ABanSungOnlPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlPlayerController, ABanSungOnlPlayerController::StaticClass, TEXT("ABanSungOnlPlayerController"), &Z_Registration_Info_UClass_ABanSungOnlPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlPlayerController), 1370231423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_717389800(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
