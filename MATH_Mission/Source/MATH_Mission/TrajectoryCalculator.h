// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TrajectoryCalculator.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MATH_MISSION_API UTrajectoryCalculator : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTrajectoryCalculator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//functions to calculate coordinates
	UFUNCTION(BlueprintCallable, Category = "Trajectory calculation")
	float Addition(float& A, float& B);
	UFUNCTION(BlueprintCallable, Category = "Trajectory calculation")
	float Subtraction(float& A, float& B);
	UFUNCTION(BlueprintCallable, Category = "Trajectory calculation")
	float Division(float& A, float& B);
	UFUNCTION(BlueprintCallable, Category = "Trajectory calculation")
	float Multiplication(float& A, float& B);

		
};
