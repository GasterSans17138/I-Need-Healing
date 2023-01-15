// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "IsTargetAAZone.generated.h"

/**
 * 
 */
UCLASS()
class JOURNEY_OF_HEALER_API UIsTargetAAZone : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UIsTargetAAZone();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
