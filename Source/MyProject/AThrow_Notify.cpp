// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "AThrow_Notify.h"

void UAThrow_Notify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Throw"));
	AEnemy* Player = Cast<AEnemy>(MeshComp->GetOwner());
	if (Player) {
		Player->ThrowPatate();
	}

}
