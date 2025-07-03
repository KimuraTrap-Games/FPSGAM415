// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonGAM415PickUpComponent.h"

UFirstPersonGAM415PickUpComponent::UFirstPersonGAM415PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UFirstPersonGAM415PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UFirstPersonGAM415PickUpComponent::OnSphereBeginOverlap);
}

void UFirstPersonGAM415PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AFirstPersonGAM415Character* Character = Cast<AFirstPersonGAM415Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
