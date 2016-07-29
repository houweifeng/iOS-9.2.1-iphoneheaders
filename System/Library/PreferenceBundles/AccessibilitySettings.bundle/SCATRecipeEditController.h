/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXEditableTableCellWithStepperDelegate.h>

@class AXSwitchRecipe, PSSpecifier, NSString;

@interface SCATRecipeEditController : AccessibilityBaseListController <AXEditableTableCellWithStepperDelegate> {

	AXSwitchRecipe* _recipe;
	PSSpecifier* _timeoutSpecifier;

}

@property (nonatomic,retain) AXSwitchRecipe * recipe;                     //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,retain) PSSpecifier * timeoutSpecifier;              //@synthesize timeoutSpecifier=_timeoutSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldAllowEditing;
-(id)_footerTextForNoMappings;
-(id)_isTimeoutEnabledForSpecifier:(id)arg1 ;
-(id)_createNewMappingSpecifier;
-(void)setTimeoutSpecifier:(PSSpecifier *)arg1 ;
-(void)_saveRecipeIfApplicable;
-(id)_recipeNameForSpecifier:(id)arg1 ;
-(id)_timeoutSpecifiers;
-(id)_mappingActionForSpecifier:(id)arg1 ;
-(BOOL)_isTimeoutEnabled;
-(PSSpecifier *)timeoutSpecifier;
-(void)_showSwitchesForMapping:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_showLongPressControllerForExistingMapping:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_showActionsForExistingMapping:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_showSwitchesForNewMappingForSpecifier:(id)arg1 ;
-(BOOL)_canShowCreateNewMappingSpecifier;
-(AXSwitchRecipe *)recipe;
-(void)setRecipe:(AXSwitchRecipe *)arg1 ;
-(long long)keyboardTypeforSpecifier:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(id)stringValueForSpecifier:(id)arg1 ;
-(void)_setTimeoutEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_mappingsSpecifiers;
-(void)_setRecipeName:(id)arg1 specifier:(id)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)specifiers;
@end

