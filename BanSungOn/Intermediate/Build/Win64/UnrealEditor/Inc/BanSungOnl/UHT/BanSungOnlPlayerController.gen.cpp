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
BANSUNGONL_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Delegate FRemoveUI
struct Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "RemoveUI__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRemoveUI_DelegateWrapper(const FMulticastScriptDelegate& RemoveUI)
{
	RemoveUI.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRemoveUI

// Begin Delegate FRemoveWinUI
struct Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "RemoveWinUI__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRemoveWinUI_DelegateWrapper(const FMulticastScriptDelegate& RemoveWinUI)
{
	RemoveWinUI.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FRemoveWinUI

// Begin Class ABanSungOnlPlayerController Function OnRep_IsPlayAgain
struct Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "OnRep_IsPlayAgain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execOnRep_IsPlayAgain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsPlayAgain();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function OnRep_IsPlayAgain

// Begin Class ABanSungOnlPlayerController Function OnRep_IsWinPlayAgain
struct Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "OnRep_IsWinPlayAgain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execOnRep_IsWinPlayAgain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsWinPlayAgain();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function OnRep_IsWinPlayAgain

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
struct BanSungOnlPlayerController_eventServer_FireRifle_Parms
{
	FVector Mouse;
};
static FName NAME_ABanSungOnlPlayerController_Server_FireRifle = FName(TEXT("Server_FireRifle"));
void ABanSungOnlPlayerController::Server_FireRifle(FVector Mouse)
{
	BanSungOnlPlayerController_eventServer_FireRifle_Parms Parms;
	Parms.Mouse=Mouse;
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_Server_FireRifle),&Parms);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::NewProp_Mouse = { "Mouse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlPlayerController_eventServer_FireRifle_Parms, Mouse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::NewProp_Mouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "Server_FireRifle", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::PropPointers), sizeof(BanSungOnlPlayerController_eventServer_FireRifle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle_Statics::Function_MetaDataParams) };
static_assert(sizeof(BanSungOnlPlayerController_eventServer_FireRifle_Parms) < MAX_uint16);
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
	P_GET_STRUCT(FVector,Z_Param_Mouse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_FireRifle_Implementation(Z_Param_Mouse);
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
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
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

// Begin Class ABanSungOnlPlayerController Function ServerPlayAgain
static FName NAME_ABanSungOnlPlayerController_ServerPlayAgain = FName(TEXT("ServerPlayAgain"));
void ABanSungOnlPlayerController::ServerPlayAgain()
{
	ProcessEvent(FindFunctionChecked(NAME_ABanSungOnlPlayerController_ServerPlayAgain),NULL);
}
struct Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlPlayerController, nullptr, "ServerPlayAgain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlPlayerController::execServerPlayAgain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPlayAgain_Implementation();
	P_NATIVE_END;
}
// End Class ABanSungOnlPlayerController Function ServerPlayAgain

// Begin Class ABanSungOnlPlayerController
void ABanSungOnlPlayerController::StaticRegisterNativesABanSungOnlPlayerController()
{
	UClass* Class = ABanSungOnlPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_IsPlayAgain", &ABanSungOnlPlayerController::execOnRep_IsPlayAgain },
		{ "OnRep_IsWinPlayAgain", &ABanSungOnlPlayerController::execOnRep_IsWinPlayAgain },
		{ "Server_FirePistol", &ABanSungOnlPlayerController::execServer_FirePistol },
		{ "Server_FireRifle", &ABanSungOnlPlayerController::execServer_FireRifle },
		{ "Server_Reload", &ABanSungOnlPlayerController::execServer_Reload },
		{ "Server_SetRotation", &ABanSungOnlPlayerController::execServer_SetRotation },
		{ "ServerPlayAgain", &ABanSungOnlPlayerController::execServerPlayAgain },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HUD\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveWinUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HUD win\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD win" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadingWeapon_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Change Rifle Input\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change Rifle Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayAgain_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinPlayAgain_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlPlayerController.h" },
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
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveUI;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveWinUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadingWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayAgain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinPlayAgain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsPlayAgain, "OnRep_IsPlayAgain" }, // 4248766233
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_OnRep_IsWinPlayAgain, "OnRep_IsWinPlayAgain" }, // 2394631875
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FirePistol, "Server_FirePistol" }, // 2947245062
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_FireRifle, "Server_FireRifle" }, // 1564274230
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_Reload, "Server_Reload" }, // 283673966
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_Server_SetRotation, "Server_SetRotation" }, // 3440356538
		{ &Z_Construct_UFunction_ABanSungOnlPlayerController_ServerPlayAgain, "ServerPlayAgain" }, // 1860591472
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
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnRemoveUI = { "OnRemoveUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, OnRemoveUI), Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoveUI_MetaData), NewProp_OnRemoveUI_MetaData) }; // 3876962347
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnRemoveWinUI = { "OnRemoveWinUI", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, OnRemoveWinUI), Z_Construct_UDelegateFunction_BanSungOnl_RemoveWinUI__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoveWinUI_MetaData), NewProp_OnRemoveWinUI_MetaData) }; // 482805595
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_ReloadingWeapon = { "ReloadingWeapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, ReloadingWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadingWeapon_MetaData), NewProp_ReloadingWeapon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_PlayAgain = { "PlayAgain", "OnRep_IsPlayAgain", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, PlayAgain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayAgain_MetaData), NewProp_PlayAgain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_WinPlayAgain = { "WinPlayAgain", "OnRep_IsWinPlayAgain", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlPlayerController, WinPlayAgain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinPlayAgain_MetaData), NewProp_WinPlayAgain_MetaData) };
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnRemoveUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_OnRemoveWinUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_ReloadingWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_PlayAgain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlPlayerController_Statics::NewProp_WinPlayAgain,
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
void ABanSungOnlPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayAgain(TEXT("PlayAgain"));
	static const FName Name_WinPlayAgain(TEXT("WinPlayAgain"));
	const bool bIsValid = true
		&& Name_PlayAgain == ClassReps[(int32)ENetFields_Private::PlayAgain].Property->GetFName()
		&& Name_WinPlayAgain == ClassReps[(int32)ENetFields_Private::WinPlayAgain].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABanSungOnlPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlPlayerController);
ABanSungOnlPlayerController::~ABanSungOnlPlayerController() {}
// End Class ABanSungOnlPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlPlayerController, ABanSungOnlPlayerController::StaticClass, TEXT("ABanSungOnlPlayerController"), &Z_Registration_Info_UClass_ABanSungOnlPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlPlayerController), 433629831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_405165619(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
