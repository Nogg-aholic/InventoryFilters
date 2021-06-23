


#include "InventoryFiltersSubsystem.h"

#include "FGBlueprintFunctionLibrary.h"
#include "Resources/FGAnyUndefinedDescriptor.h"
#include "Resources/FGBuildingDescriptor.h"
#include "Resources/FGNoneDescriptor.h"
#include "Resources/FGOverflowDescriptor.h"
#include "Resources/FGWildCardDescriptor.h"

void UInventoryFiltersSubsystem::Init(const TArray<TSubclassOf<UFGItemDescriptor>> AllItemsIn)
{
	AllItems = AllItemsIn;
	for(const TSubclassOf<class UFGItemDescriptor> i : AllItems)
		if(i.GetDefaultObject()->mForm == EResourceForm::RF_SOLID
			&& !i->IsChildOf(UFGBuildDescriptor::StaticClass())
			&& !i->IsChildOf(UFGNoneDescriptor::StaticClass())
			&& !i->IsChildOf(UFGAnyUndefinedDescriptor::StaticClass())
			&& !i->IsChildOf(UFGOverflowDescriptor::StaticClass())
			&& !i->IsChildOf(UFGWildCardDescriptor::StaticClass()))
			AllSlotItems.Add(i);
}

TArray<TSubclassOf<UFGItemDescriptor>> UInventoryFiltersSubsystem::GetAllItemsFiltered(const FString FilterString)
{	
	if (FilterString == "")
		return AllSlotItems;

	TArray<TSubclassOf<class UFGItemDescriptor>> ArrOut;
	for(auto i : AllSlotItems)
		if(i.GetDefaultObject()->GetItemName(i).ToString().Contains(*FilterString))
			ArrOut.Add(i);		
	return ArrOut;
}
