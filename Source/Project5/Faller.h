// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/ProjectileMovementComponent.h"
#include "Sound/SoundCue.h"

#include "CoreMinimal.h"
#include "Shape.h"
#include "Faller.generated.h"

class AGrid;

/**
 * 
 */
UCLASS()
class PROJECT5_API AFaller : public AShape
{
	GENERATED_BODY()
public:
	AFaller();
	FIntVector2 xyPos;

	// Projectile movement component
	UProjectileMovementComponent* ProjectileMovement;

	void SetSpeed(float speed);
	void IsOffScreen();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void Drop();

	TSubclassOf<class AActor> Miss;
	USoundCue* missSoundCue;
};
