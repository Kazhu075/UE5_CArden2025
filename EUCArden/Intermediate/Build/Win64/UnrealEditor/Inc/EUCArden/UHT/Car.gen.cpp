// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/Car.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCar() {}

// Begin Cross Module References
EUCARDEN_API UClass* Z_Construct_UClass_ACar();
EUCARDEN_API UClass* Z_Construct_UClass_ACar_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_AVehicle();
EUCARDEN_API UEnum* Z_Construct_UEnum_EUCArden_ECardBrand();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Enum ECardBrand
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardBrand;
static UEnum* ECardBrand_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECardBrand.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECardBrand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EUCArden_ECardBrand, (UObject*)Z_Construct_UPackage__Script_EUCArden(), TEXT("ECardBrand"));
	}
	return Z_Registration_Info_UEnum_ECardBrand.OuterSingleton;
}
template<> EUCARDEN_API UEnum* StaticEnum<ECardBrand>()
{
	return ECardBrand_StaticEnum();
}
struct Z_Construct_UEnum_EUCArden_ECardBrand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BMW.DisplayName", "BMW" },
		{ "BMW.Name", "ECardBrand::BMW" },
		{ "Ferrari.DisplayName", "Ferrari" },
		{ "Ferrari.Name", "ECardBrand::Ferrari" },
		{ "Ford.DisplayName", "Ford" },
		{ "Ford.Name", "ECardBrand::Ford" },
		{ "Jeep.DisplayName", "Jeep" },
		{ "Jeep.Name", "ECardBrand::Jeep" },
		{ "Lamborghini.DisplayName", "Lamborghini" },
		{ "Lamborghini.Name", "ECardBrand::Lamborghini" },
		{ "MCLaren.DisplayName", "McLaren" },
		{ "MCLaren.Name", "ECardBrand::MCLaren" },
		{ "Mercedes.DisplayName", "Mercedes" },
		{ "Mercedes.Name", "ECardBrand::Mercedes" },
		{ "ModuleRelativePath", "Car.h" },
		{ "RollsRoyce.DisplayName", "Rolls Royce" },
		{ "RollsRoyce.Name", "ECardBrand::RollsRoyce" },
		{ "Toyota.DisplayName", "Toyota" },
		{ "Toyota.Name", "ECardBrand::Toyota" },
		{ "Volkswagen.DisplayName", "Volkswagen" },
		{ "Volkswagen.Name", "ECardBrand::Volkswagen" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECardBrand::Mercedes", (int64)ECardBrand::Mercedes },
		{ "ECardBrand::BMW", (int64)ECardBrand::BMW },
		{ "ECardBrand::Toyota", (int64)ECardBrand::Toyota },
		{ "ECardBrand::Ford", (int64)ECardBrand::Ford },
		{ "ECardBrand::Jeep", (int64)ECardBrand::Jeep },
		{ "ECardBrand::MCLaren", (int64)ECardBrand::MCLaren },
		{ "ECardBrand::Volkswagen", (int64)ECardBrand::Volkswagen },
		{ "ECardBrand::Ferrari", (int64)ECardBrand::Ferrari },
		{ "ECardBrand::Lamborghini", (int64)ECardBrand::Lamborghini },
		{ "ECardBrand::RollsRoyce", (int64)ECardBrand::RollsRoyce },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EUCArden_ECardBrand_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EUCArden,
	nullptr,
	"ECardBrand",
	"ECardBrand",
	Z_Construct_UEnum_EUCArden_ECardBrand_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EUCArden_ECardBrand_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EUCArden_ECardBrand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EUCArden_ECardBrand_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EUCArden_ECardBrand()
{
	if (!Z_Registration_Info_UEnum_ECardBrand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardBrand.InnerSingleton, Z_Construct_UEnum_EUCArden_ECardBrand_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECardBrand.InnerSingleton;
}
// End Enum ECardBrand

// Begin Class ACar
void ACar::StaticRegisterNativesACar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACar);
UClass* Z_Construct_UClass_ACar_NoRegister()
{
	return ACar::StaticClass();
}
struct Z_Construct_UClass_ACar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Car.h" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarBrand_MetaData[] = {
		{ "Category", "Car Properties" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarModel_MetaData[] = {
		{ "Category", "Car Properties" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicensePlate_MetaData[] = {
		{ "Category", "Car Properties" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarBrand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CarBrand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CarModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LicensePlate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarBrand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarBrand = { "CarBrand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, CarBrand), Z_Construct_UEnum_EUCArden_ECardBrand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarBrand_MetaData), NewProp_CarBrand_MetaData) }; // 1360418394
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarModel = { "CarModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, CarModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarModel_MetaData), NewProp_CarModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_LicensePlate = { "LicensePlate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, LicensePlate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicensePlate_MetaData), NewProp_LicensePlate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarBrand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarBrand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_LicensePlate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVehicle,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACar_Statics::ClassParams = {
	&ACar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACar()
{
	if (!Z_Registration_Info_UClass_ACar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACar.OuterSingleton, Z_Construct_UClass_ACar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACar.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<ACar>()
{
	return ACar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACar);
ACar::~ACar() {}
// End Class ACar

// Begin Registration
struct Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_Car_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECardBrand_StaticEnum, TEXT("ECardBrand"), &Z_Registration_Info_UEnum_ECardBrand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1360418394U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACar, ACar::StaticClass, TEXT("ACar"), &Z_Registration_Info_UClass_ACar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACar), 3369147113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_Car_h_4173421513(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_Car_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_Car_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_Car_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EUCArden_Source_EUCArden_Car_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
