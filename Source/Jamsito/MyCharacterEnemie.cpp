


#include "MyCharacterEnemie.h"
#include "Engine/World.h"

// Sets default values
AMyCharacterEnemie::AMyCharacterEnemie()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterEnemie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterEnemie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterEnemie::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*PlayerInputComponent->BindAxis("MoveForward/Backwards", this, &AMyCharacterEnemie::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight/Left", this, &AMyCharacterEnemie::MoveRight);
	PlayerInputComponent->BindAxis("LookUp/Down", this, &AMyCharacterEnemie::RotateYaw);
	PlayerInputComponent->BindAxis("LookLeft/Right", this, &AMyCharacterEnemie::RotatePitch);*/
}

//void AMyCharacterEnemie::MoveForward(float value)
//{
//	AddMovementInput(GetActorForwardVector(), value);
//}
//
//void AMyCharacterEnemie::MoveRight(float value)
//{
//	AddMovementInput(GetActorRightVector(), value);
//}
//
//void AMyCharacterEnemie::RotateYaw(float value)
//{
//	AddControllerYawInput(value * RotationSpeed * GetWorld()->GetDeltaSeconds());
//}
//
//void AMyCharacterEnemie::RotatePitch(float value)
//{
//	AddControllerPitchInput(value * RotationSpeed * GetWorld()->GetDeltaSeconds());
//}

