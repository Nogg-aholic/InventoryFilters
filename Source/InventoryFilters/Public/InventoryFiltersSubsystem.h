

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "InventoryFiltersSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORYFILTERS_API UInventoryFiltersSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintCallable)
	void Init(TArray<TSubclassOf<class UFGItemDescriptor>> AllItems);

	UFUNCTION(BlueprintCallable)
	TArray<TSubclassOf<class UFGItemDescriptor>> GetAllItemsFiltered(const FString FilterString);
	
	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class UFGItemDescriptor>> AllSlotItems;

	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class UFGItemDescriptor>> AllItems;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget *  ActivePopup;

};
