/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject {

	_TRUserNotification* _activeUserNotification;

}

@property (nonatomic,retain) _TRUserNotification * activeUserNotification;              //@synthesize activeUserNotification=_activeUserNotification - In the implementation block
+(id)sharedInstance;
-(void)cancel;
-(void)dealloc;
-(void)setActiveUserNotification:(_TRUserNotification *)arg1 ;
-(_TRUserNotification *)activeUserNotification;
-(void)_showUserNotificationWithDictionary:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestPermissionToInitiateSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestPermissionForDiagnosticSubmissionWithCompletion:(/*^block*/id)arg1 ;
-(void)requestPermissionToRememberPasswordForiTunesStoreID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentWiFiNetworkConnectionError:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

