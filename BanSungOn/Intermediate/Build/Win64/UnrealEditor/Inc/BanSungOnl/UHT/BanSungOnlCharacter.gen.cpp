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
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature();
BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
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

// Begin Delegate FShowLoseGame
struct Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// show HUD WinGame\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "show HUD WinGame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "ShowLoseGame__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FShowLoseGame_DelegateWrapper(const FMulticastScriptDelegate& ShowLoseGame)
{
	ShowLoseGame.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FShowLoseGame

// Begin Delegate FScore
struct Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// show HUD LoseGame\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "show HUD LoseGame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "Score__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FScore_DelegateWrapper(const FMulticastScriptDelegate& Score)
{
	Score.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FScore

// Begin Delegate FShowNameItem
struct Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics
{
	struct _Script_BanSungOnl_eventShowNameItem_Parms
	{
		int32 ItemType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BanSungOnl_eventShowNameItem_Parms, ItemType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BanSungOnl, nullptr, "ShowNameItem__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::_Script_BanSungOnl_eventShowNameItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::_Script_BanSungOnl_eventShowNameItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FShowNameItem_DelegateWrapper(const FMulticastScriptDelegate& ShowNameItem, int32 ItemType)
{
	struct _Script_BanSungOnl_eventShowNameItem_Parms
	{
		int32 ItemType;
	};
	_Script_BanSungOnl_eventShowNameItem_Parms Parms;
	Parms.ItemType=ItemType;
	ShowNameItem.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FShowNameItem

// Begin Class ABanSungOnlCharacter Function OnRep_ChangeHealth
struct Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "OnRep_ChangeHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execOnRep_ChangeHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ChangeHealth();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function OnRep_ChangeHealth

// Begin Class ABanSungOnlCharacter Function OnRep_IsDead
struct Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "OnRep_IsDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execOnRep_IsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsDead();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function OnRep_IsDead

// Begin Class ABanSungOnlCharacter Function OnRep_IsGameOver
struct Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "OnRep_IsGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execOnRep_IsGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsGameOver();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function OnRep_IsGameOver

// Begin Class ABanSungOnlCharacter Function OnRep_IsGameWin
struct Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "OnRep_IsGameWin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execOnRep_IsGameWin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsGameWin();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function OnRep_IsGameWin

// Begin Class ABanSungOnlCharacter Function OnRep_Score
struct Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "OnRep_Score", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execOnRep_Score)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Score();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function OnRep_Score

// Begin Class ABanSungOnlCharacter Function PlayerTakeDmg
struct Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics
{
	struct BanSungOnlCharacter_eventPlayerTakeDmg_Parms
	{
		float Dmg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dmg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::NewProp_Dmg = { "Dmg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlCharacter_eventPlayerTakeDmg_Parms, Dmg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::NewProp_Dmg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "PlayerTakeDmg", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::BanSungOnlCharacter_eventPlayerTakeDmg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::BanSungOnlCharacter_eventPlayerTakeDmg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execPlayerTakeDmg)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Dmg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerTakeDmg(Z_Param_Dmg);
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function PlayerTakeDmg

// Begin Class ABanSungOnlCharacter Function ResetPlayer
struct Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlCharacter, nullptr, "ResetPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlCharacter::execResetPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPlayer();
	P_NATIVE_END;
}
// End Class ABanSungOnlCharacter Function ResetPlayer

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
		{ "OnRep_ChangeHealth", &ABanSungOnlCharacter::execOnRep_ChangeHealth },
		{ "OnRep_IsDead", &ABanSungOnlCharacter::execOnRep_IsDead },
		{ "OnRep_IsGameOver", &ABanSungOnlCharacter::execOnRep_IsGameOver },
		{ "OnRep_IsGameWin", &ABanSungOnlCharacter::execOnRep_IsGameWin },
		{ "OnRep_Score", &ABanSungOnlCharacter::execOnRep_Score },
		{ "PlayerTakeDmg", &ABanSungOnlCharacter::execPlayerTakeDmg },
		{ "ResetPlayer", &ABanSungOnlCharacter::execResetPlayer },
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
		{ "Comment", "// show name item\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BanSungOnlCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "show name item" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mouse_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "BanSungOnlCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dead\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlusHealth_MetaData[] = {
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGameOver_MetaData[] = {
		{ "Category", "BanSungOnlCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game Over\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Over" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowLoseGame_MetaData[] = {
		{ "Category", "Show Lose Game" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGameWin_MetaData[] = {
		{ "Category", "BanSungOnlCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Win Game\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Win Game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save Camera Controller Original\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save Camera Controller Original" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowWBIsAtked_MetaData[] = {
		{ "Category", "Show HUD Attacked" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowWinGame_MetaData[] = {
		{ "Category", "Show Win Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Var show HUD attacked\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Var show HUD attacked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowNameItem_MetaData[] = {
		{ "Category", "Show Name Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Var Show Win Game\n" },
#endif
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Var Show Win Game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowScore_MetaData[] = {
		{ "Category", "Show Score" },
		{ "ModuleRelativePath", "BanSungOnlCharacter.h" },
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mouse;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static void NewProp_bPlusHealth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlusHealth;
	static void NewProp_bIsGameOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGameOver;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowLoseGame;
	static void NewProp_bIsGameWin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGameWin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rifle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pistol;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RifleToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PistolToSpawn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowWBIsAtked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowWinGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowNameItem;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_ChangeHealth, "OnRep_ChangeHealth" }, // 735446729
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsDead, "OnRep_IsDead" }, // 1928504942
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameOver, "OnRep_IsGameOver" }, // 2087988672
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_IsGameWin, "OnRep_IsGameWin" }, // 2503400899
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_OnRep_Score, "OnRep_Score" }, // 3810513410
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_PlayerTakeDmg, "PlayerTakeDmg" }, // 216150070
		{ &Z_Construct_UFunction_ABanSungOnlCharacter_ResetPlayer, "ResetPlayer" }, // 2193391467
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Health = { "Health", "OnRep_ChangeHealth", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Mouse = { "Mouse", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Mouse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mouse_MetaData), NewProp_Mouse_MetaData) };
void Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((ABanSungOnlCharacter*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsDead = { "bIsDead", "OnRep_IsDead", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABanSungOnlCharacter), &Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
void Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bPlusHealth_SetBit(void* Obj)
{
	((ABanSungOnlCharacter*)Obj)->bPlusHealth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bPlusHealth = { "bPlusHealth", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABanSungOnlCharacter), &Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bPlusHealth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlusHealth_MetaData), NewProp_bPlusHealth_MetaData) };
void Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameOver_SetBit(void* Obj)
{
	((ABanSungOnlCharacter*)Obj)->bIsGameOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameOver = { "bIsGameOver", "OnRep_IsGameOver", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABanSungOnlCharacter), &Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGameOver_MetaData), NewProp_bIsGameOver_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowLoseGame = { "ShowLoseGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowLoseGame), Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowLoseGame_MetaData), NewProp_ShowLoseGame_MetaData) }; // 1352318164
void Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameWin_SetBit(void* Obj)
{
	((ABanSungOnlCharacter*)Obj)->bIsGameWin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameWin = { "bIsGameWin", "OnRep_IsGameWin", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABanSungOnlCharacter), &Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameWin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGameWin_MetaData), NewProp_bIsGameWin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Score = { "Score", "OnRep_Score", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_OriginalController = { "OriginalController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, OriginalController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalController_MetaData), NewProp_OriginalController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CurWeapon = { "CurWeapon", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, CurWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurWeapon_MetaData), NewProp_CurWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Rifle = { "Rifle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Rifle), Z_Construct_UClass_ARifle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rifle_MetaData), NewProp_Rifle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Pistol = { "Pistol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, Pistol), Z_Construct_UClass_APistol_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pistol_MetaData), NewProp_Pistol_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_RifleToSpawn = { "RifleToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, RifleToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleToSpawn_MetaData), NewProp_RifleToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_PistolToSpawn = { "PistolToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, PistolToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolToSpawn_MetaData), NewProp_PistolToSpawn_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowWBIsAtked = { "ShowWBIsAtked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowWBIsAtked), Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowWBIsAtked_MetaData), NewProp_ShowWBIsAtked_MetaData) }; // 2563558558
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowWinGame = { "ShowWinGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowWinGame), Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowWinGame_MetaData), NewProp_ShowWinGame_MetaData) }; // 370598886
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowNameItem = { "ShowNameItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowNameItem), Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowNameItem_MetaData), NewProp_ShowNameItem_MetaData) }; // 1664120216
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowScore = { "ShowScore", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, ShowScore), Z_Construct_UDelegateFunction_BanSungOnl_Score__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowScore_MetaData), NewProp_ShowScore_MetaData) }; // 1293031371
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlCharacter, WidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponent_MetaData), NewProp_WidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOnlCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Mouse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bPlusHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowLoseGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_bIsGameWin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_OriginalController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_CurWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Rifle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_Pistol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_RifleToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_PistolToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowWBIsAtked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowWinGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowNameItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlCharacter_Statics::NewProp_ShowScore,
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
	static const FName Name_Mouse(TEXT("Mouse"));
	static const FName Name_bIsDead(TEXT("bIsDead"));
	static const FName Name_bPlusHealth(TEXT("bPlusHealth"));
	static const FName Name_bIsGameOver(TEXT("bIsGameOver"));
	static const FName Name_bIsGameWin(TEXT("bIsGameWin"));
	static const FName Name_Score(TEXT("Score"));
	static const FName Name_CurWeapon(TEXT("CurWeapon"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Mouse == ClassReps[(int32)ENetFields_Private::Mouse].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
		&& Name_bPlusHealth == ClassReps[(int32)ENetFields_Private::bPlusHealth].Property->GetFName()
		&& Name_bIsGameOver == ClassReps[(int32)ENetFields_Private::bIsGameOver].Property->GetFName()
		&& Name_bIsGameWin == ClassReps[(int32)ENetFields_Private::bIsGameWin].Property->GetFName()
		&& Name_Score == ClassReps[(int32)ENetFields_Private::Score].Property->GetFName()
		&& Name_CurWeapon == ClassReps[(int32)ENetFields_Private::CurWeapon].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABanSungOnlCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlCharacter);
ABanSungOnlCharacter::~ABanSungOnlCharacter() {}
// End Class ABanSungOnlCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlCharacter, ABanSungOnlCharacter::StaticClass, TEXT("ABanSungOnlCharacter"), &Z_Registration_Info_UClass_ABanSungOnlCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlCharacter), 1929734937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_2806955311(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnline_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
