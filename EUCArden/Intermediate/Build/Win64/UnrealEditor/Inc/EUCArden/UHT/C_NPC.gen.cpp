// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/C_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_NPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
EUCARDEN_API UClass* Z_Construct_UClass_AC_NPC();
EUCARDEN_API UClass* Z_Construct_UClass_AC_NPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class AC_NPC
void AC_NPC::StaticRegisterNativesAC_NPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_NPC);
UClass* Z_Construct_UClass_AC_NPC_NoRegister()
{
	return AC_NPC::StaticClass();
}
struct Z_Construct_UClass_AC_NPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_NPC.h" },
		{ "ModuleRelativePath", "C_NPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_NPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_NPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_NPC_Statics::ClassParams = {
	&AC_NPC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_NPC()
{
	if (!Z_Registration_Info_UClass_AC_NPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_NPC.OuterSingleton, Z_Construct_UClass_AC_NPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_NPC.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<AC_NPC>()
{
	return AC_NPC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_NPC);
AC_NPC::~AC_NPC() {}
// End Class AC_NPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_C_NPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_NPC, AC_NPC::StaticClass, TEXT("AC_NPC"), &Z_Registration_Info_UClass_AC_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_NPC), 3461259999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_C_NPC_h_373307413(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_C_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_C_NPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
