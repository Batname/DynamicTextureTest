// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TextureActor.generated.h"

UCLASS()
class DYNAMICTEXTURETEST_API ATextureActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATextureActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** StaticMesh component that will be the visuals for our flying pawn */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "TextureTest")
	class UStaticMeshComponent* PlaneMesh;

	class UTexture2D* SourceTex;

	// Dynamic texture methods
	void CreateTexture(bool argForceMake);
	void UpdateTexture();

	// update class instances in the editor if changes are made to their properties
	virtual void OnConstruction(const FTransform& Transform) override;

	// Called after the actors components have been initialized
	virtual void PostInitializeComponents() override;

	// Quick random function for testing
	double rnd();

	void UpdateTextureRegions(class UTexture2D* Texture, int32 MipIndex, uint32 NumRegions, FUpdateTextureRegion2D* Regions, uint32 SrcPitch, uint32 SrcBpp, uint8* SrcData, bool bFreeData);


private:
	// dTex res
	int dtWidth;
	int dtHeight;
	int dtBytesPerPixel;

	// dTex buffer
	uint8 *dtBuffer;
	int dtBufferSize;
	int dtBufferSizeSqrt;

	class UTexture2D* dtTexture;

	class UMaterialInstanceDynamic* dtMaterialInstanceDynamic;

	FUpdateTextureRegion2D* dtUpdateTextureRegion;
};
