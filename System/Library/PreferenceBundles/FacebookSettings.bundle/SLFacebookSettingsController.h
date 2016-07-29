/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLSettingsController.h>
#import <FacebookSettings/SLFacebookRegistrationBuddyDelegate.h>
#import <FacebookSettings/SLFacebookLoginInfoViewControllerDelegate.h>
#import <FacebookSettings/SLFacebookContactUpaterDelegate.h>

@protocol OS_dispatch_queue;
@class PSSpecifier, ACAccount, ACAccountType, NSObject, NSString, PSSetupController, SLFacebookUpdateContactsFooterView, SLFacebookRegistrationBuddy, SLFacebookContactUpdater, UIAlertView, SLNetworkReachabilityWarning, NSDictionary;

@interface SLFacebookSettingsController : SLSettingsController <SLFacebookRegistrationBuddyDelegate, SLFacebookLoginInfoViewControllerDelegate, SLFacebookContactUpaterDelegate> {

	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	ACAccount* _account;
	ACAccountType* _facebookAccountType;
	NSObject*<OS_dispatch_queue> _accountRefreshQueue;
	NSString* _email;
	NSString* _password;
	PSSetupController* _loginInfoViewControllerWrapper;
	SLFacebookUpdateContactsFooterView* _updateContactsFooterView;
	SLFacebookRegistrationBuddy* _registrationBuddy;
	SLFacebookContactUpdater* _contactUpdater;
	UIAlertView* _appInstallAlert;
	BOOL _shouldPresentSignInInfo;
	BOOL _userWantsToMergeContacts;
	BOOL _isSavingNewAccount;
	SLNetworkReachabilityWarning* _networkWarning;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _accessList;
	long long _mode;

}

@property (assign,nonatomic) long long mode;                        //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_specifiersForNoAccountMode;
-(id)_specifierForAccount:(id)arg1 ;
-(id)_dataclassSpecifiers;
-(id)_specifiersForAccountMode;
-(id)_authorizedAppsListSpecifiers;
-(void)_confirmAccountDeletion;
-(void)_presentLegalPrompt;
-(void)_showAppDownloadAlert;
-(void)_fetchNameForAccount:(id)arg1 ;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_dismissLegalPrompt;
-(id)_facebookAppSettingsSpecifier;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)contactUpdater:(id)arg1 didFinishUpdatingContacts:(long long)arg2 ;
-(void)_authenticateAndAddAccount;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(BOOL)_isFacebookParentalRestrictionEnabled;
-(void)_setDataclassEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isDataclassEnabledWithSpecifier:(id)arg1 ;
-(id)_accessList;
-(void)contactUpdater:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)_cancelUpdateContactsTapped:(id)arg1 ;
-(id)_installFacebookSpecifiers;
-(id)_loadFreshSpecifiers;
-(id)_specifiersForMergingContacts;
-(id)_learnMoreLinkGroupSpecifier;
-(void)_updateContactsTapped:(id)arg1 ;
-(void)_signInButtonSpecifierTapped:(id)arg1 ;
-(id)_facebookAccountType;
-(id)_specifiersForVerificationMode;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_createNewAccountSpecifier;
-(id)_networkWarning;
-(void)registrationBuddyDidCancel:(id)arg1 ;
-(BOOL)_updateViewMode;
-(id)_facebookApp;
-(BOOL)_confirmContactsMerge;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(id)_loginSpecifiers;
-(void)registrationBuddy:(id)arg1 didCompleteWithUsername:(id)arg2 password:(id)arg3 ;
-(id)presentingViewControllerforRegistrationBuddy:(id)arg1 ;
-(void)registrationBuddy:(id)arg1 didFailWithErrorCode:(int)arg2 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)_willEnterForeground:(id)arg1 ;
-(void)returnPressedAtEnd;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateSignInButton;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)loginInfoViewController:(id)arg1 userDidProvideConsent:(BOOL)arg2 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_updateDoneButton;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)specifiers;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(id)_passwordSpecifier;
@end

