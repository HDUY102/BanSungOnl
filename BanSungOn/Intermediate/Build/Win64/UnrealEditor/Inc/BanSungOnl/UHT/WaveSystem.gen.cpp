// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BanSungOnl/WaveSystem/WaveSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveSystem() {}

// Begin Cross Module References
BANSUNGONL_API UClass* Z_Construct_UClass_AWaveSystem();
BANSUNGONL_API UClass* Z_Construct_UClass_AWaveSystem_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombiesBoss_NoRegister();
BANSUNGONL_API UClass* Z_Construct_UClass_AZombiesNor_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BanSungOnl();
// End Cross Module References

// Begin Class AWaveSystem Function CheckEndWave
struct Z_Construct_UFunction_AWaveSystem_CheckEndWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystem_CheckEndWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveSystem, nullptr, "CheckEndWave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystem_CheckEndWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystem_CheckEndWave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWaveSystem_CheckEndWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystem_CheckEndWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystem::execCheckEndWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckEndWave();
	P_NATIVE_END;
}
// End Class AWaveSystem Function CheckEndWave

// Begin Class AWaveSystem Function SetupWave
struct Z_Construct_UFunction_AWaveSystem_SetupWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystem_SetupWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveSystem, nullptr, "SetupWave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystem_SetupWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystem_SetupWave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWaveSystem_SetupWave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystem_SetupWave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystem::execSetupWave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupWave();
	P_NATIVE_END;
}
// End Class AWaveSystem Function SetupWave

// Begin Class AWaveSystem Function SpawnZombies
struct Z_Construct_UFunction_AWaveSystem_SpawnZombies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveSystem_SpawnZombies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveSystem, nullptr, "SpawnZombies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveSystem_SpawnZombies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWaveSystem_SpawnZombies_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWaveSystem_SpawnZombies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveSystem_SpawnZombies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWaveSystem::execSpawnZombies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnZombies();
	P_NATIVE_END;
}
// End Class AWaveSystem Function SpawnZombies

// Begin Class AWaveSystem
void AWaveSystem::StaticRegisterNativesAWaveSystem()
{
	UClass* Class = AWaveSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckEndWave", &AWaveSystem::execCheckEndWave },
		{ "SetupWave", &AWaveSystem::execSetupWave },
		{ "SpawnZombies", &AWaveSystem::execSpawnZombies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveSystem);
UClass* Z_Construct_UClass_AWaveSystem_NoRegister()
{
	return AWaveSystem::StaticClass();
}
struct Z_Construct_UClass_AWaveSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WaveSystem/WaveSystem.h" },
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZombNorSpawn_MetaData[] = {
		{ "Category", "WaveSystem" },
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZombBossSpawn_MetaData[] = {
		{ "Category", "WaveSystem" },
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZombRemaining_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;\n" },
#endif
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveNumber_MetaData[] = {
		{ "ModuleRelativePath", "WaveSystem/WaveSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ZombNorSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ZombBossSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZombRemaining;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaveNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveSystem_CheckEndWave, "CheckEndWave" }, // 3411985006
		{ &Z_Construct_UFunction_AWaveSystem_SetupWave, "SetupWave" }, // 2805051868
		{ &Z_Construct_UFunction_AWaveSystem_SpawnZombies, "SpawnZombies" }, // 4063744983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaveSystem_Statics::NewProp_ZombNorSpawn = { "ZombNorSpawn", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystem, ZombNorSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AZombiesNor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZombNorSpawn_MetaData), NewProp_ZombNorSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWaveSystem_Statics::NewProp_ZombBossSpawn = { "ZombBossSpawn", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystem, ZombBossSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AZombiesBoss_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZombBossSpawn_MetaData), NewProp_ZombBossSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaveSystem_Statics::NewProp_ZombRemaining = { "ZombRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystem, ZombRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZombRemaining_MetaData), NewProp_ZombRemaining_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaveSystem_Statics::NewProp_WaveNumber = { "WaveNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWaveSystem, WaveNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveNumber_MetaData), NewProp_WaveNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystem_Statics::NewProp_ZombNorSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystem_Statics::NewProp_ZombBossSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystem_Statics::NewProp_ZombRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveSystem_Statics::NewProp_WaveNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWaveSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BanSungOnl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveSystem_Statics::ClassParams = {
	&AWaveSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWaveSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWaveSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AWaveSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWaveSystem()
{
	if (!Z_Registration_Info_UClass_AWaveSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveSystem.OuterSingleton, Z_Construct_UClass_AWaveSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWaveSystem.OuterSingleton;
}
template<> BANSUNGONL_API UClass* StaticClass<AWaveSystem>()
{
	return AWaveSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveSystem);
AWaveSystem::~AWaveSystem() {}
// End Class AWaveSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWaveSystem, AWaveSystem::StaticClass, TEXT("AWaveSystem"), &Z_Registration_Info_UClass_AWaveSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveSystem), 4185175349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_2847955407(TEXT("/Script/BanSungOnl"),
	Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_C___Training_BanSungOnl_BanSungOn_Source_BanSungOnl_WaveSystem_WaveSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
