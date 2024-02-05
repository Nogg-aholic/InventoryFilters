

#pragma once

#include "CoreMinimal.h"
#include "Subsystem/ModSubsystem.h"
#include "InventoryFilters_ItemSubsystem.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class INVENTORYFILTERS_API AInventoryFilters_ItemSubsystem : public AModSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void RebuildItemRecords(TArray<TSubclassOf<class UFGItemDescriptor>> AllItems);

	UFUNCTION(BlueprintCallable)
	TArray<TSubclassOf<UFGItemDescriptor>> GetItemsMatchingFilter(const FString FilterString, const int32 ResutLimit = 200);


	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class UFGItemDescriptor>> AllItems;

	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class UFGItemDescriptor>> AllAcceptedFilterItems;
	
};
