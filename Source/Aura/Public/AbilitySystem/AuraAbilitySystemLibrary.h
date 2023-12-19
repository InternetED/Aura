// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AuraAbilitySystemLibrary.generated.h"

class UAttributeMenuWidgetController;
class UOverlayWidgetController;
/**
 * 
 */
UCLASS()
class AURA_API UAuraAbilitySystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// 以下這段，可以讓 BP 中不需設定 WorldContextObject
	// meta=(WorldContext="WorldContextObject", UnsafeDuringActorConstruction="true") 
	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|WidgetController",
		meta=(WorldContext="WorldContextObject", UnsafeDuringActorConstruction="true"))
	static UOverlayWidgetController* GetOverlayWidgetController(const UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "AuraAbilitySystemLibrary|WidgetController",
		meta=(WorldContext="WorldContextObject", UnsafeDuringActorConstruction="true"))
	static UAttributeMenuWidgetController* GetAttributeMenuWidgetController(const UObject* WorldContextObject);
};
