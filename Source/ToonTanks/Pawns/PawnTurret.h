// Copyright NPUZenith 2020

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
    float FireRate = 2.f;

    FTimerHandle FireRateTimerHandle;

    void CheckFireCondition();
    
public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
};
