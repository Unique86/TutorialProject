// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MyPlayer.generated.h"

UCLASS()
class TUTORIALPROJECT_API AMyPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	
	AMyPlayer();
    
    /*Input*/
    void MoveForward(float val);
    void MoveRight(float val);
    void LookYaw(float val);
    void LookPitch(float val);
    void use();
    
    
  
    
    /*Overrides*/

	
	virtual void BeginPlay() override;
	
	
	virtual void Tick( float DeltaSeconds ) override;


	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
    
private:

	
	
};
