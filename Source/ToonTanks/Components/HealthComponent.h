// Copyright NPUZenith 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ToonTanks/GameModes/TankGameModeBase.h"

#include "HealthComponent.generated.h"

class AGameModeBase;

UCLASS()
class TOONTANKS_API AHealthComponent : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float DefaultHealth = 100.f;
	float Health = 0.f;

	ATankGameModeBase* GameModeRef;

public:	
	// Sets default values for this actor's properties
	AHealthComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void TakeDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
};
