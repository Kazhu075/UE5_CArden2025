// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Car.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EUCARDEN_Car_generated_h
#error "Car.generated.h already included, missing '#pragma once' in Car.h"
#endif
#define EUCARDEN_Car_generated_h

#define FID_EUCArden_Source_EUCArden_Car_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACar(); \
	friend struct Z_Construct_UClass_ACar_Statics; \
public: \
	DECLARE_CLASS(ACar, AVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EUCArden"), NO_API) \
	DECLARE_SERIALIZER(ACar)


#define FID_EUCArden_Source_EUCArden_Car_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACar(ACar&&); \
	ACar(const ACar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACar) \
	NO_API virtual ~ACar();


#define FID_EUCArden_Source_EUCArden_Car_h_26_PROLOG
#define FID_EUCArden_Source_EUCArden_Car_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EUCArden_Source_EUCArden_Car_h_29_INCLASS_NO_PURE_DECLS \
	FID_EUCArden_Source_EUCArden_Car_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EUCARDEN_API UClass* StaticClass<class ACar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EUCArden_Source_EUCArden_Car_h


#define FOREACH_ENUM_ECARDBRAND(op) \
	op(ECardBrand::Mercedes) \
	op(ECardBrand::BMW) \
	op(ECardBrand::Toyota) \
	op(ECardBrand::Ford) \
	op(ECardBrand::Jeep) \
	op(ECardBrand::MCLaren) \
	op(ECardBrand::Volkswagen) \
	op(ECardBrand::Ferrari) \
	op(ECardBrand::Lamborghini) \
	op(ECardBrand::RollsRoyce) 

enum class ECardBrand;
template<> struct TIsUEnumClass<ECardBrand> { enum { Value = true }; };
template<> EUCARDEN_API UEnum* StaticEnum<ECardBrand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
