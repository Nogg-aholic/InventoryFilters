

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
	TArray<TSubclassOf<UFGItemDescriptor>> GetAllItemsFiltered(const FString FilterString, const int32 ResutLimit = 200);

	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class UFGItemDescriptor>> AllSlotItems;

	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class UFGItemDescriptor>> AllItems;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget *  ActivePopup;


	UPROPERTY(BlueprintReadWrite)
	UUserWidget* SelectedSlot;


};
