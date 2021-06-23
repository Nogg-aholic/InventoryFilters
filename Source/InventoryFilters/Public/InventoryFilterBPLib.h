

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InventoryFilterBPLib.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FOnWidgetConstructed, UUserWidget*, Widget);


/**
 * 
 */
UCLASS()
class INVENTORYFILTERS_API UInventoryFilterBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprinTCallable)
		static void BindOnWidgetConstruct(const TSubclassOf<UUserWidget> WidgetClass, FOnWidgetConstructed Binding);
	
	static FOnWidgetConstructed OnWidgetConstruct;

};
