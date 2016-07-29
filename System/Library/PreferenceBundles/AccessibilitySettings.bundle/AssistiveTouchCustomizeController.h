/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AssistiveTouchCustomizeBaseActionPickerController.h>
#import <AccessibilitySettings/ASTStepperCellDelegate.h>
#import <AccessibilitySettings/ASTCustomizeCellDelegateProtocol.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, UITableViewController, ASTCustomizeCell, NSString;

@interface AssistiveTouchCustomizeController : AssistiveTouchCustomizeBaseActionPickerController <ASTStepperCellDelegate, ASTCustomizeCellDelegateProtocol, UIPopoverControllerDelegate> {

	UIPopoverController* _iconPickerPopoverController;
	UITableViewController* _iconPickerTableViewController;
	ASTCustomizeCell* _customizeCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stepperCellCountChanged:(id)arg1 ;
-(void)customCell:(id)arg1 wantsPickerDisplayedForIconKey:(id)arg2 andLocation:(id)arg3 cell:(id)arg4 ;
-(void)_resetCustomization:(id)arg1 specifier:(id)arg2 ;
-(void)_cleanupIconPickerTableView;
-(void)_iconPickerDone:(id)arg1 ;
-(id)_orbAction:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)specifiers;
@end

