/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface StorePasswordSettingsController : PSListController {

	BOOL _ignoreAccountStoreChangedNotification;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(id)specifiers;
-(void)_setPurchasesPasswordSetting:(id)arg1 ;
-(void)_setFreeDownloadsRequirePasswordEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_freeDownloadsRequirePasswordEnabled;
-(void)_updateSpecifierValues;
-(void)_updateAccountPasswordSettings:(id)arg1 ;
@end

