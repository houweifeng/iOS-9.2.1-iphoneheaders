/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class AXSwitch;

@interface SCATSwitchActionsController : PSListController {

	BOOL _selectLongPress;
	AXSwitch* _storedSwitch;

}

@property (assign,nonatomic) BOOL selectLongPress;                 //@synthesize selectLongPress=_selectLongPress - In the implementation block
@property (nonatomic,retain) AXSwitch * storedSwitch;              //@synthesize storedSwitch=_storedSwitch - In the implementation block
-(id)_systemActions;
-(void)_addSwitch:(id)arg1 ;
-(BOOL)selectLongPress;
-(id)initWithSwitch:(id)arg1 ;
-(void)_removeSwitch:(id)arg1 ;
-(id)_scannerActions;
-(void)setStoredSwitch:(AXSwitch *)arg1 ;
-(void)setSelectLongPress:(BOOL)arg1 ;
-(AXSwitch *)storedSwitch;
-(id)_actionSpecifiersWithActions:(id)arg1 ;
-(id)_rootSwitchesController;
-(BOOL)_popToActionTypeController;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

