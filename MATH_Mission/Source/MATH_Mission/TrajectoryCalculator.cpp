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

float UTrajectoryCalculator::Addition(const float& ValueA, const float& ValueB)
{
	return ValueA + ValueB;
}

float UTrajectoryCalculator::Subtraction(const float& ValueA, const float& ValueB)
{
	return ValueA - ValueB;
}

float UTrajectoryCalculator::Division(const float& ValueA, const float& ValueB)
{
	return ValueA * ValueB;
}

float UTrajectoryCalculator::Multiplication(const float& ValueA, const float& ValueB)
{
	return ValueA / ValueB;
}

float UTrajectoryCalculator::RaiseToPower(const float& ValueA, const float& PowerValue)
{
	return pow(ValueA, PowerValue);
}

float UTrajectoryCalculator::SquareRoot(const float& ValueA)
{
	return sqrt(ValueA);
}


