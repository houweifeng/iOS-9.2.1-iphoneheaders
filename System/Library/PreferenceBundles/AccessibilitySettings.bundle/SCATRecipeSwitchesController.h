/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class AXSwitchRecipe, AXSwitchRecipeMapping;

@interface SCATRecipeSwitchesController : AccessibilityBaseListController {

	AXSwitchRecipe* _recipe;
	AXSwitchRecipeMapping* _mapping;

}

@property (nonatomic,retain) AXSwitchRecipe * recipe;                      //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,retain) AXSwitchRecipeMapping * mapping;              //@synthesize mapping=_mapping - In the implementation block
-(AXSwitchRecipe *)recipe;
-(void)setRecipe:(AXSwitchRecipe *)arg1 ;
-(BOOL)_isForExistingMappingWithMissingSwitch;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(AXSwitchRecipeMapping *)mapping;
-(id)specifiers;
-(void)setMapping:(AXSwitchRecipeMapping *)arg1 ;
@end

