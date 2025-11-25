// Fill out your copyright notice in the Description page of Project Settings.


#include "AIC_NPC.h"
#include "C_NPC.h"
//sets default values for this controller's properties

AAIC_NPC::AAIC_NPC(FObjectInitializer const& ObjectInitializer)
{
	
}

void AAIC_NPC::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	AC_NPC* NPC = Cast<AC_NPC>(InPawn);
	if (NPC)
	{
		// Initialize AI behavior here
	}
}