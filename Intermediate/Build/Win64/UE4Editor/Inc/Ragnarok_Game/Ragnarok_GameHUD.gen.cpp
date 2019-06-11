// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ragnarok_Game/Ragnarok_GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRagnarok_GameHUD() {}
// Cross Module References
	RAGNAROK_GAME_API UClass* Z_Construct_UClass_ARagnarok_GameHUD_NoRegister();
	RAGNAROK_GAME_API UClass* Z_Construct_UClass_ARagnarok_GameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Ragnarok_Game();
// End Cross Module References
	void ARagnarok_GameHUD::StaticRegisterNativesARagnarok_GameHUD()
	{
	}
	UClass* Z_Construct_UClass_ARagnarok_GameHUD_NoRegister()
	{
		return ARagnarok_GameHUD::StaticClass();
	}
	struct Z_Construct_UClass_ARagnarok_GameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARagnarok_GameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Ragnarok_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARagnarok_GameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Ragnarok_GameHUD.h" },
		{ "ModuleRelativePath", "Ragnarok_GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARagnarok_GameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARagnarok_GameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARagnarok_GameHUD_Statics::ClassParams = {
		&ARagnarok_GameHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARagnarok_GameHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARagnarok_GameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARagnarok_GameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARagnarok_GameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARagnarok_GameHUD, 3673858520);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARagnarok_GameHUD(Z_Construct_UClass_ARagnarok_GameHUD, &ARagnarok_GameHUD::StaticClass, TEXT("/Script/Ragnarok_Game"), TEXT("ARagnarok_GameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARagnarok_GameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
