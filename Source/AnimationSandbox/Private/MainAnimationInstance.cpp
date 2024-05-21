// Fill out your copyright notice in the Description page of Project Settings.

#include "MainAnimationInstance.h"


void UMainAnimationInstance::SetMotionMode(const EMotionMode NewMotionMode)
{
	MotionMode = NewMotionMode;
}

void UMainAnimationInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
}

void UMainAnimationInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	OwningCharacter = StaticCast<AAnimationSandboxCharacter*>(TryGetPawnOwner());

	if (!OwningCharacter)
	{
		return;
	}
	
	TrajectoryComponent = OwningCharacter->CharacterTrajectoryComponent;
}
