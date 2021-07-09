

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterEnemie.generated.h"

UCLASS()
class JAMSITO_API AMyCharacterEnemie : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterEnemie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		float RotationSpeed = 45;

private:

	void MoveForward(float value);
	void MoveRight(float value);
	void RotateYaw(float value);
	void RotatePitch(float value);

};
