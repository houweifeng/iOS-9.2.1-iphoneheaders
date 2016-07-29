/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTAuthenticatorDelegate;
@class NSMutableArray;

@interface YTAuthenticator : NSObject {

	id<YTAuthenticatorDelegate> _delegate;
	NSMutableArray* _deferredRequests;
	int _accountAuthState;

}
+(id)sharedAuthenticator;
+(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidateToken;
-(BOOL)isAccountAuthenticated;
-(void)clearAccountInfo;
-(void)didAuthenticateAccount;
-(BOOL)cachedCredentialsValid;
-(BOOL)loadStoredCredentials;
-(id)accountUsername;
-(void)setAuthenticatedUsername:(id)arg1 oauth2Token:(id)arg2 oauth2RefreshToken:(id)arg3 youTubeName:(id)arg4 ;
-(void)_failedToAuthenticateAccount:(id)arg1 ;
-(void)_removeAccountAuthenticationObservers;
-(void)_completeAuthenticationForDeferredRequests;
-(void)_removeDefferredRequests;
-(void)_addAccountAuthenticationObserers;
-(void)_addDeferredRequest:(id)arg1 accountAuthRequired:(BOOL)arg2 ;
-(void)setAuthenticatedOauth2Token:(id)arg1 ;
-(void)userCancelledAccountAuthentication;
-(void)addAuthenticationHeadersToRequest:(id)arg1 accountAuthRequired:(BOOL)arg2 ;
@end

