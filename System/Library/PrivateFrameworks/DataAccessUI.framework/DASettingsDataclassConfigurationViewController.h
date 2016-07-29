/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <UIKit/UIModalViewDelegate.h>

@class DAAccount, NSString;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController <UIModalViewDelegate> {

	DAAccount* _daAccount;
	BOOL _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;                 //@synthesize daAccount=_daAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)otherSpecifiers;
-(void)_accountsChanged:(id)arg1 ;
-(id)_navTitle;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)reloadAccount;
-(void)setDaAccount:(DAAccount *)arg1 ;
-(DAAccount *)daAccount;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
-(id)accountDescriptionForFirstTimeSetup;
-(Class)accountInfoControllerClass;
-(BOOL)shouldVerifyBeforeAccountSave;
@end

