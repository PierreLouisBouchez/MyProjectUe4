// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AThrow_Notify.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UAThrow_Notify : public UAnimNotify
{
	GENERATED_BODY()


		virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

};
