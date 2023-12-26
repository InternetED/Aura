// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraGameplayTags.h"

#include "GameplayTagsManager.h"


FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	/*
	 * Primary Attributes
	 */
	AddGameplayTags(GameplayTags.Attributes_Primary_Strength,
	                FName("Attributes.Primary.Strength"), FString("Increases physical damage"));
	AddGameplayTags(GameplayTags.Attributes_Primary_Intelligence,
	                FName("Attributes.Primary.Intelligence"), FString("Increases magical damage"));
	AddGameplayTags(GameplayTags.Attributes_Primary_Resilience,
	                FName("Attributes.Primary.Resilience"), FString("Increases Armor and Armor Penetration"));
	AddGameplayTags(GameplayTags.Attributes_Primary_Vigor,
	                FName("Attributes.Primary.Vigor"), FString("Increases Health"));


	/*
	 * Secondary Attributes
	 */
	AddGameplayTags(GameplayTags.Attributes_Secondary_Armor,
	                FName("Attributes.Secondary.Armor"), FString("Reduces damage taken, improves Block Chance"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_ArmorPenetration,
	                FName("Attributes.Secondary.ArmorPenetration"),
	                FString("Ignores Percentage of enemy Armor, increases Critical Hit Chance"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_BlockChance,
	                FName("Attributes.Secondary.BlockChance"), FString("Chance to cut incoming damage in half"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_CriticalHitChance,
	                FName("Attributes.Secondary.CriticalHitChance"),
	                FString("Chance to double damage plus critical hit bonus"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_CriticalHitDamage,
	                FName("Attributes.Secondary.CriticalHitDamage"),
	                FString("Bonus damage added when a critical hit is scored"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_CriticalHitResistance,
	                FName("Attributes.Secondary.CriticalHitResistance"),
	                FString("Reduces Critical Hit Chance of attacking enemies"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_HealthRegeneration,
	                FName("Attributes.Secondary.HealthRegeneration"),
	                FString("Amount of Health regenerated every 1 second"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_ManaRegeneration,
	                FName("Attributes.Secondary.ManaRegeneration"),
	                FString("Amount of Mana regenerated every 1 second"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_MaxHealth,
	                FName("Attributes.Secondary.MaxHealth"), FString("Maximum amount to Health obtainable"));
	AddGameplayTags(GameplayTags.Attributes_Secondary_MaxMana,
	                FName("Attributes.Secondary.MaxMana"), FString("Maximum amount to Mana obtainable"));

	/*
	 * Input Tags
	 */
	AddGameplayTags(GameplayTags.InputTag_LMB,
					FName("InputTag.LMB"), FString("Input Tag for Left Mouse Button"));
	
	AddGameplayTags(GameplayTags.InputTag_RMB,
					FName("InputTag.RMB"), FString("Input Tag for Right Mouse Button"));
	
	AddGameplayTags(GameplayTags.InputTag_1,
					FName("InputTag.1"), FString("Input Tag for 1 key"));
	
	AddGameplayTags(GameplayTags.InputTag_2,
					FName("InputTag.2"), FString("Input Tag for 2 key"));
	
	AddGameplayTags(GameplayTags.InputTag_3,
					FName("InputTag.3"), FString("Input Tag for 3 key"));
	
	AddGameplayTags(GameplayTags.InputTag_4,
					FName("InputTag.4"), FString("Input Tag for 4 key"));

	
	AddGameplayTags(GameplayTags.Damage,
					FName("Damage"), FString("Damage"));
	AddGameplayTags(GameplayTags.Effects_HitReact,
					FName("Effects.HitReact"), FString("Tag granted when Hit Reacting"));
}

void FAuraGameplayTags::AddGameplayTags(FGameplayTag& GameplayTag, const FName TagName, const FString& Description)
{
	GameplayTag = UGameplayTagsManager::Get().AddNativeGameplayTag(TagName, Description);
}
