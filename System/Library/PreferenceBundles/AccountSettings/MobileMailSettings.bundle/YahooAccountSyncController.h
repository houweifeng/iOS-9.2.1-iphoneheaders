/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailSettings/AccountPSSyncController.h>

@class NSString, SLYahooWebAuthController;

@interface YahooAccountSyncController : AccountPSSyncController {

	NSString* _firstTimeSetupValidationOriginalTitle;
	SLYahooWebAuthController* _webAuthController;
	BOOL _didFirstTimeSetupValidation;
	BOOL _reAuthenticating;

}

@property (assign,nonatomic) BOOL didFirstTimeSetupValidation;              //@synthesize didFirstTimeSetupValidation=_didFirstTimeSetupValidation - In the implementation block
@property (assign,nonatomic) BOOL reAuthenticating;                         //@synthesize reAuthenticating=_reAuthenticating - In the implementation block
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)handleURL:(id)arg1 ;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)specifiers;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_reAuthenticationButtonTapped:(id)arg1 ;
-(id)_reAuthenticationSectionSpecifiers;
-(void)setReAuthenticating:(BOOL)arg1 ;
-(BOOL)didFirstTimeSetupValidation;
-(void)setDidFirstTimeSetupValidation:(BOOL)arg1 ;
-(BOOL)reAuthenticating;
@end

