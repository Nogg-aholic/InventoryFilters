#include "InventoryFilters_ItemSubsystem.h"

#include "Resources/FGAnyUndefinedDescriptor.h"
#include "Resources/FGBuildingDescriptor.h"
#include "Resources/FGNoneDescriptor.h"
#include "Resources/FGOverflowDescriptor.h"
#include "Resources/FGWildCardDescriptor.h"
#include "Creature/FGCreatureDescriptor.h"

void AInventoryFilters_ItemSubsystem::RebuildItemRecords(const TArray<TSubclassOf<UFGItemDescriptor>> AllItemsIn) {
	AllItems = AllItemsIn;
	AllAcceptedFilterItems.Empty();
	for (auto& candidate : AllItems) {
		if (UFGItemDescriptor::GetForm(candidate) == EResourceForm::RF_SOLID
			&& !candidate->IsChildOf(UFGBuildDescriptor::StaticClass())
			&& !candidate->IsChildOf(UFGFactoryCustomizationDescriptor::StaticClass())
			&& !candidate->IsChildOf(UFGNoneDescriptor::StaticClass())
			&& !candidate->IsChildOf(UFGAnyUndefinedDescriptor::StaticClass())
			&& !candidate->IsChildOf(UFGOverflowDescriptor::StaticClass())
			&& !candidate->IsChildOf(UFGWildCardDescriptor::StaticClass())
			&& !candidate->IsChildOf(UFGCreatureDescriptor::StaticClass())
			&& !UFGItemDescriptor::GetItemName(candidate).IsEmpty())
		{
			AllAcceptedFilterItems.Add(candidate);
		}
	}
}

TArray<TSubclassOf<UFGItemDescriptor>> AInventoryFilters_ItemSubsystem::GetItemsMatchingFilter(const FString FilterString, const int32 ResutLimit) {
	if (FilterString == "")
		return AllAcceptedFilterItems;

	TArray<TSubclassOf<class UFGItemDescriptor>> ArrOut;
	for (auto& candidate : AllAcceptedFilterItems) {
		if (ArrOut.Num() >= ResutLimit) {
			break;
		} else if (UFGItemDescriptor::GetItemName(candidate).ToString().Contains(*FilterString)) {
			ArrOut.Add(candidate);
		}
	}

	return ArrOut;
}
