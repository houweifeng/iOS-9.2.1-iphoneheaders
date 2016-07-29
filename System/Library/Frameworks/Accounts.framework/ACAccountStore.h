/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, ACRemoteAccountStoreSession, NSArray;

@interface ACAccountStore : NSObject {

	NSString* _clientBundleID;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id _daemonAccountStoreDidChangeObserver;
	NSMutableDictionary* _accountCache;
	ACRemoteAccountStoreSession* _remoteAccountStoreSession;

}

@property (nonatomic,__weak,readonly) NSArray * accounts; 
@property (readonly) NSString * effectiveBundleID;                                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) ACRemoteAccountStoreSession * remoteAccountStoreSession;              //@synthesize remoteAccountStoreSession=_remoteAccountStoreSession - In the implementation block
+(BOOL)SLDuplicateAccountExistsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 andAccountPropertyIDKey:(id)arg3 ;
+(BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1 ;
+(long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
+(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
-(id)_mailAccountTypeIdentifiers;
-(BOOL)hasMailAccountsForSync;
-(id)mailAccountsForSync;
-(id)br_appleAccountWithPersonID:(id)arg1 ;
-(id)br_primaryAppleAccount;
-(id)aaui_accountDescriptionFromEmailAddress:(id)arg1 ;
-(void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)sl_openGoogleAuthenticationSheetForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 delegateClassName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sl_openGoogleAuthenticationSheetWithAccountDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sl_openYouTubeAuthenticationSheetWithAccountDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sl_openYouTubeAuthenticationSheetWithUsername:(id)arg1 accountDescription:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)da_loadDAAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)da_accounts;
-(id)da_accountsEnabledForDADataclasses:(long long)arg1 ;
-(id)da_accountsWithAccountTypeIdentifiers:(id)arg1 ;
-(id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 ;
-(void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)aa_isUsingiCloud;
-(id)aa_appleAccountType;
-(id)aa_appleAccounts;
-(void)_performUpdateRequestWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)aa_primaryAppleAccountWithPreloadedDataclasses;
-(void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aa_registerAppleAccountWithHSA:(id)arg1 usingCookieHeaders:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)aa_grandSlamAccountForiCloudAccount:(id)arg1 ;
-(void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)aa_registerAppleAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)aa_accountsEnabledForDataclass:(id)arg1 ;
-(id)aa_appleAccountWithUsername:(id)arg1 ;
-(id)aa_primaryAppleAccount;
-(id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1 ;
-(id)aa_appleAccountWithPersonID:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 appleID:(id)arg2 ;
-(id)accountWithAppleID:(id)arg1 ;
-(id)aida_AppleIDAuthenticationAccountType;
-(id)aida_AppleIDAuthenticationAccounts;
-(id)_primaryiCloudAccount;
-(id)aida_accountForiCloudAccount:(id)arg1 ;
-(void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)aida_accountForPrimaryiCloudAccount;
-(id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 ;
-(void)setRemoteAccountStoreSession:(ACRemoteAccountStoreSession *)arg1 ;
-(id)_connectionFailureError;
-(void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_unsanitizeError:(id)arg1 ;
-(id)_sanitizeOptionsDictionary:(id)arg1 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithRemoteEndpoint:(id)arg1 ;
-(void)insertAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccountType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)canSaveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id*)arg4 ;
-(id)credentialForAccount:(id)arg1 bundleID:(id)arg2 ;
-(id)parentAccountForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 ;
-(id)enabledDataclassesForAccount:(id)arg1 ;
-(id)provisionedDataclassesForAccount:(id)arg1 ;
-(id)supportedDataclassesForAccountType:(id)arg1 ;
-(id)syncableDataclassesForAccountType:(id)arg1 ;
-(id)accessKeysForAccountType:(id)arg1 ;
-(id)appPermissionsForAccountType:(id)arg1 ;
-(id)grantedPermissionsForAccountType:(id)arg1 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 ;
-(id)typeIdentifierForDomain:(id)arg1 ;
-(BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1 ;
-(void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 ;
-(void)notifyRemoteDevicesOfNewAccount:(id)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccountsFromPairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)disconnectFromRemoteAccountStore;
-(ACRemoteAccountStoreSession *)remoteAccountStoreSession;
-(id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 ;
-(void)saveCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)insertCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)allCredentialItems;
-(void)removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)credentialForAccount:(id)arg1 serviceID:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)accountsWithAccountType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cachedAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 ;
-(id)displayTypeForAccountWithIdentifier:(id)arg1 ;
-(id)accountIdentifiersEnabledToSyncDataclass:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tetheredSyncSourceTypeForDataclass:(id)arg1 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 ;
-(int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)addClientToken:(id)arg1 forAccount:(id)arg2 ;
-(id)clientTokenForAccount:(id)arg1 ;
-(NSArray *)accounts;
-(void)renewCredentialsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithEffectiveBundleID:(id)arg1 ;
-(NSString *)effectiveBundleID;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)allAccountTypes;
-(id)dataclassActionsForAccountSave:(id)arg1 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)permissionForAccountType:(id)arg1 ;
-(id)allDataclasses;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasAccountWithDescription:(id)arg1 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)credentialForAccount:(id)arg1 error:(id*)arg2 ;
@end

