// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Vehicle.h"
#include "Car.generated.h"

UENUM()
enum class ECardBrand
{
	Mercedes UMETA(DisplayName = "Mercedes"),
	BMW UMETA(DisplayName = "BMW"),
	Toyota UMETA(DisplayName = "Toyota"),
	Ford UMETA(DisplayName = "Ford"),
	Jeep UMETA(DisplayName = "Jeep"),
	MCLaren UMETA(DisplayName = "McLaren"),
	Volkswagen UMETA(DisplayName = "Volkswagen"),
	Ferrari UMETA(DisplayName = "Ferrari"),
	Lamborghini UMETA(DisplayName = "Lamborghini"),
	RollsRoyce UMETA(DisplayName = "Rolls Royce")
};
/**
 * 
 */
UCLASS()
class EUCARDEN_API ACar : public AVehicle
{
	GENERATED_BODY()
	
public:
	//sets default values for this actor's properties
	ACar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void Move() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car Properties")
	ECardBrand CarBrand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car Properties")
	FString CarModel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car Properties")
	FString LicensePlate;

};
