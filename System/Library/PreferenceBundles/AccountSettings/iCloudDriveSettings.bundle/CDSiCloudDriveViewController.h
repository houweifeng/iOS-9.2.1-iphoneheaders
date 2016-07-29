/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <iCloudDriveSettings/CDSUpgradeViewControllerDelegate.h>

@class PSSpecifier, NSMutableArray, NSArray, CDSServiceAccessCache, ACAccount;

@interface CDSiCloudDriveViewController : ACUIViewController <CDSUpgradeViewControllerDelegate> {

	PSSpecifier* _iCloudDriveSpecifier;
	PSSpecifier* _statusInfoSpecifier;
	PSSpecifier* _iCloudDriveAppGroupSpecifier;
	PSSpecifier* _iCloudDriveAppSpecifier;
	NSMutableArray* _appSpecifiers;
	NSArray* _cellularSpecifiers;
	NSArray* _logsSpecifiers;
	CDSServiceAccessCache* _accessCache;
	ACAccount* _appleAccount;
	BOOL _isFirstSetup;
	id _uiApplicationDidBecomeActiveObserver;
	id _brDidUpdateLastSyncStatusObserver;

}
+(id)_sanitizeForDiagnoseName:(id)arg1 ;
-(void)_setDocumentsAndDataEnabled:(BOOL)arg1 ;
-(id)_specifierForCloudKit;
-(void)diagnoseDocumentsAndData:(id)arg1 ;
-(void)_setUseCellular:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_appAccessGrantedForSpecifier:(id)arg1 ;
-(id)_createSpecifiersForDiagnostics;
-(id)_useCellular:(id)arg1 ;
-(void)upgradeViewControllerDidCancel:(id)arg1 ;
-(id)_diagnosePathForBR;
-(id)_appSpecifierWithBundleID:(id)arg1 ;
-(id)_showAppOnHomeScreen:(id)arg1 ;
-(id)_appSpecifiersForTCCServices;
-(id)_valueForCloudKitSpecifier:(id)arg1 ;
-(id)_collectBRLogs;
-(void)_reloadAppleAccount;
-(id)_documentsAndDataEnabled:(id)arg1 ;
-(void)upgradeViewControllerDidSucceed:(id)arg1 ;
-(void)_setDocumentsAndDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_setShowAppOnHomeScreen:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_createSpecifiersForCellularSwitchCell;
-(id)_createSpecifierForUpgradeButton;
-(void)_setAppAccessGranted:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_loadCloudKitSettingsBundleIfNeeded;
-(void)_reloadSpecifiersThatDependOnDocumentsAndDataSwitchState;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(id)_appleAccount;
-(id)_numberOfAppsUsingCloudKit;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)specifiers;
@end

