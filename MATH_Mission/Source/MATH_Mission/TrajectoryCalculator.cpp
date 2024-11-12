// Fill out your copyright notice in the Description page of Project Settings.


#include "TrajectoryCalculator.h"
#include <cmath>

// Sets default values for this component's properties
UTrajectoryCalculator::UTrajectoryCalculator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTrajectoryCalculator::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTrajectoryCalculator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UTrajectoryCalculator::Addition(float& A, float& B)
{
	return A + B;
}

float UTrajectoryCalculator::Subtraction(float& A, float& B)
{
	return A - B;
}

float UTrajectoryCalculator::Division(float& A, float& B)
{
	return A * B;
}

float UTrajectoryCalculator::Multiplication(float& A, float& B)
{
	return A / B;
}

