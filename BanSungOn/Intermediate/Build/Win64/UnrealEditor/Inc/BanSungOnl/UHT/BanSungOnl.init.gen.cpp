// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBanSungOnl_init() {}
	BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature();
	BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature();
	BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature();
	BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature();
	BANSUNGONL_API UFunction* Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BanSungOnl;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BanSungOnl()
	{
		if (!Z_Registration_Info_UPackage__Script_BanSungOnl.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnl_RemoveUI__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnl_ShowHealth__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnl_ShowLoseGame__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnl_ShowNameItem__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BanSungOnl_ShowWinGame__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BanSungOnl",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7DEEF3D0,
				0x36893965,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BanSungOnl.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BanSungOnl.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BanSungOnl(Z_Construct_UPackage__Script_BanSungOnl, TEXT("/Script/BanSungOnl"), Z_Registration_Info_UPackage__Script_BanSungOnl, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7DEEF3D0, 0x36893965));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
