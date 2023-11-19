#include "InventoryFilterBPLib.h"

#include "Blueprint/UserWidget.h"
#include "Patching/NativeHookManager.h"
#include "Patching/BlueprintHookHelper.h"
#include "Patching/BlueprintHookManager.h"

//void UInventoryFilterBPLib::BindOnWidgetConstruct(const TSubclassOf<UUserWidget> WidgetClass, FOnWidgetConstructed Binding) {
//	if (!WidgetClass)
//		return;
//	UFunction* ConstructFunction = WidgetClass->FindFunctionByName(TEXT("Construct"));
//	if (!ConstructFunction || ConstructFunction->IsNative())
//	{
//		return;
//	}
//	UBlueprintHookManager* HookManager = GEngine->GetEngineSubsystem<UBlueprintHookManager>();
//	HookManager->HookBlueprintFunction(ConstructFunction, [Binding](FBlueprintHookHelper& HookHelper) {
//		Binding.ExecuteIfBound(Cast<UUserWidget>(HookHelper.GetContext()));
//		}, EPredefinedHookOffset::Return);
//}