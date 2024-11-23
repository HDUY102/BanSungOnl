// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/BanSungOnlGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnlGameMode() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlCharacter_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlGameMode();
BANSUNGONL_API UClass* Z_Construct_UClass_ABanSungOnlGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class ABanSungOnlGameMode Function AddPlayer
struct Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics
{
	struct BanSungOnlGameMode_eventAddPlayer_Parms
	{
		ABanSungOnlCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Management" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlGameMode_eventAddPlayer_Parms, Player), Z_Construct_UClass_ABanSungOnlCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlGameMode, nullptr, "AddPlayer", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::BanSungOnlGameMode_eventAddPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::BanSungOnlGameMode_eventAddPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlGameMode::execAddPlayer)
{
	P_GET_OBJECT(ABanSungOnlCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// End Class ABanSungOnlGameMode Function AddPlayer

// Begin Class ABanSungOnlGameMode Function DelPlayer
struct Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics
{
	struct BanSungOnlGameMode_eventDelPlayer_Parms
	{
		ABanSungOnlCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Management" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlGameMode_eventDelPlayer_Parms, Player), Z_Construct_UClass_ABanSungOnlCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlGameMode, nullptr, "DelPlayer", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::BanSungOnlGameMode_eventDelPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::BanSungOnlGameMode_eventDelPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlGameMode::execDelPlayer)
{
	P_GET_OBJECT(ABanSungOnlCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// End Class ABanSungOnlGameMode Function DelPlayer

// Begin Class ABanSungOnlGameMode Function GameOver
struct Z_Construct_UFunction_ABanSungOnlGameMode_GameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlGameMode, nullptr, "GameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlGameMode_GameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlGameMode_GameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlGameMode_GameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlGameMode::execGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameOver();
	P_NATIVE_END;
}
// End Class ABanSungOnlGameMode Function GameOver

// Begin Class ABanSungOnlGameMode Function GetAlivePlayers
struct Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics
{
	struct BanSungOnlGameMode_eventGetAlivePlayers_Parms
	{
		TArray<ABanSungOnlCharacter*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABanSungOnlCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BanSungOnlGameMode_eventGetAlivePlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlGameMode, nullptr, "GetAlivePlayers", nullptr, nullptr, Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::BanSungOnlGameMode_eventGetAlivePlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::BanSungOnlGameMode_eventGetAlivePlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlGameMode::execGetAlivePlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ABanSungOnlCharacter*>*)Z_Param__Result=P_THIS->GetAlivePlayers();
	P_NATIVE_END;
}
// End Class ABanSungOnlGameMode Function GetAlivePlayers

// Begin Class ABanSungOnlGameMode Function PlayAgain
struct Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABanSungOnlGameMode, nullptr, "PlayAgain", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABanSungOnlGameMode::execPlayAgain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAgain();
	P_NATIVE_END;
}
// End Class ABanSungOnlGameMode Function PlayAgain

// Begin Class ABanSungOnlGameMode
void ABanSungOnlGameMode::StaticRegisterNativesABanSungOnlGameMode()
{
	UClass* Class = ABanSungOnlGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayer", &ABanSungOnlGameMode::execAddPlayer },
		{ "DelPlayer", &ABanSungOnlGameMode::execDelPlayer },
		{ "GameOver", &ABanSungOnlGameMode::execGameOver },
		{ "GetAlivePlayers", &ABanSungOnlGameMode::execGetAlivePlayers },
		{ "PlayAgain", &ABanSungOnlGameMode::execPlayAgain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABanSungOnlGameMode);
UClass* Z_Construct_UClass_ABanSungOnlGameMode_NoRegister()
{
	return ABanSungOnlGameMode::StaticClass();
}
struct Z_Construct_UClass_ABanSungOnlGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BanSungOnlGameMode.h" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPlayerAgain_MetaData[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerList_MetaData[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "BanSungOnlGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CPlayerAgain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CPlayerAgain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABanSungOnlGameMode_AddPlayer, "AddPlayer" }, // 1140685977
		{ &Z_Construct_UFunction_ABanSungOnlGameMode_DelPlayer, "DelPlayer" }, // 409800230
		{ &Z_Construct_UFunction_ABanSungOnlGameMode_GameOver, "GameOver" }, // 2171201370
		{ &Z_Construct_UFunction_ABanSungOnlGameMode_GetAlivePlayers, "GetAlivePlayers" }, // 4124155433
		{ &Z_Construct_UFunction_ABanSungOnlGameMode_PlayAgain, "PlayAgain" }, // 2191800421
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABanSungOnlGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_CPlayerAgain_Inner = { "CPlayerAgain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_CPlayerAgain = { "CPlayerAgain", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlGameMode, CPlayerAgain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPlayerAgain_MetaData), NewProp_CPlayerAgain_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_PlayerList_Inner = { "PlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABanSungOnlCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_PlayerList = { "PlayerList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABanSungOnlGameMode, PlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerList_MetaData), NewProp_PlayerList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABanSungOnlGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_CPlayerAgain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_CPlayerAgain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_PlayerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABanSungOnlGameMode_Statics::NewProp_PlayerList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABanSungOnlGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABanSungOnlGameMode_Statics::ClassParams = {
	&ABanSungOnlGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABanSungOnlGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABanSungOnlGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABanSungOnlGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABanSungOnlGameMode()
{
	if (!Z_Registration_Info_UClass_ABanSungOnlGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABanSungOnlGameMode.OuterSingleton, Z_Construct_UClass_ABanSungOnlGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABanSungOnlGameMode.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<ABanSungOnlGameMode>()
{
	return ABanSungOnlGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABanSungOnlGameMode);
ABanSungOnlGameMode::~ABanSungOnlGameMode() {}
// End Class ABanSungOnlGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABanSungOnlGameMode, ABanSungOnlGameMode::StaticClass, TEXT("ABanSungOnlGameMode"), &Z_Registration_Info_UClass_ABanSungOnlGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABanSungOnlGameMode), 1373838176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlGameMode_h_1424687854(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_BanSungOnlGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
