// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimationSandbox/AnimationSandboxCharacter.h"
#include "MainAnimationInstance.generated.h"

UENUM(BlueprintType)
enum class EMotionMode : uint8
{
	Walk = 0,
	Jog = 1,
	Crouch = 2
};

/**
 * 
 */
UCLASS()
class ANIMATIONSANDBOX_API UMainAnimationInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMotionMode(const EMotionMode NewMotionMode);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character, meta = (AllowPrivate))
	EMotionMode MotionMode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	UCharacterTrajectoryComponent* TrajectoryComponent;	
private:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY()
	AAnimationSandboxCharacter* OwningCharacter;

};
