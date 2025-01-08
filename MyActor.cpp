// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	move();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// ��ġ �̵�
void AMyActor::move() {
	FVector2D position = start;
	for (int32 i = 0; i < 10; i++) {
		int32 posX = step();
		int32 posY = step();
		position += FVector2D(posX, posY);
		UE_LOG(LogTemp, Warning, TEXT("%.0f, %.0f"), position.X, position.Y);
	}
}

//����
int32 AMyActor::step()
{
	return FMath::RandRange(0,1);
}
