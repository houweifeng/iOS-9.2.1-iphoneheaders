/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSURLConnectionResponse;

@interface AuthorizeMachineOperation : ISOperation {

	NSNumber* _accountIdentifier;
	NSString* _clientIdentifierHeader;
	NSNumber* _familyMemberAccountIdentifier;
	NSString* _keybagPath;
	long long _mdRetryCount;
	NSString* _mdSyncState;
	NSString* _reason;
	SSURLConnectionResponse* _response;
	BOOL _shouldAddKeysToKeyBag;
	BOOL _shouldPromptForCredentials;
	id _token;
	NSString* _userAgent;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSNumber * familyMemberAccountIdentifier; 
@property (copy) id authorizationToken; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * keybagPath; 
@property (copy) NSString * reason; 
@property (assign) BOOL shouldAddKeysToKeyBag; 
@property (assign) BOOL shouldPromptForCredentials; 
@property (copy) NSString * userAgent; 
@property (readonly) SSURLConnectionResponse * response; 
-(void)setShouldAddKeysToKeyBag:(BOOL)arg1 ;
-(void)setFamilyMemberAccountIdentifier:(NSNumber *)arg1 ;
-(void)setShouldPromptForCredentials:(BOOL)arg1 ;
-(id)_newURLOperation;
-(id)initWithAuthorizationRequest:(id)arg1 ;
-(BOOL)shouldAddKeysToKeyBag;
-(id)_newBodyDictionary;
-(id)_newAuthenticationContext;
-(void)setAuthorizationToken:(id)arg1 ;
-(BOOL)shouldPromptForCredentials;
-(BOOL)_runAuthentication:(id*)arg1 ;
-(BOOL)_runAuthorizationWithAuthentication:(BOOL)arg1 error:(id*)arg2 ;
-(void)_setResponse:(id)arg1 ;
-(id)_newMachineDataOperationWithResponse:(id)arg1 ;
-(NSNumber *)familyMemberAccountIdentifier;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)authorizationToken;
-(NSString *)keybagPath;
-(void)dealloc;
-(void)_run;
-(void)run;
-(SSURLConnectionResponse *)response;
-(NSString *)reason;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)_accountIdentifier;
-(void)setKeybagPath:(NSString *)arg1 ;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

