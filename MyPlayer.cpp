// Fill out your copyright notice in the Description page of Project Settings.

#include "TutorialProject.h"
#include "MyPlayer.h"


// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayer::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
    
    InputComponent->BindAxis("MoveForward", this, &AMyPlayer::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AMyPlayer::MoveRight);
    InputComponent->BindAxis("LookYaw", this &AMyPlayer::LookYaw);
    InputComponent->BindAxis("LookPitch", this, &AMyPlayer::LookPitch);
    InputComponent->BindAxis("Use", IE_Pressed, this, &AMyPlayer::Use);
    
    void &AMyPlayer::MoveForward(float val)
    {
        
    };
   
   
    void &AMyPlayer::MoveRight(float val)
    {
        
    };
    
   
    void &AMyPlayer::LookYaw(float val)
    {
        
    };
    
    
    void &AMyPlayer::LookPitch(float val)
    {
        
    };
    
    
    void &AMyPlayer::use()
    {
        
    };

}

