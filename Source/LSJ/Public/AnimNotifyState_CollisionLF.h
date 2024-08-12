﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_CollisionLF.generated.h"

/**
 * 
 */
UCLASS()
class LSJ_API UAnimNotifyState_CollisionLF : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	virtual void NotifyBegin ( USkeletalMeshComponent* MeshComp , UAnimSequenceBase* Animation , float TotalDuration , const FAnimNotifyEventReference& EventReference ) override;
	//virtual void NotifyTick ( USkeletalMeshComponent* MeshComp , UAnimSequenceBase* Animation , float FrameDeltaTime , const FAnimNotifyEventReference& EventReference ) override;
	virtual void NotifyEnd ( USkeletalMeshComponent* MeshComp , UAnimSequenceBase* Animation , const FAnimNotifyEventReference& EventReference ) override;
};