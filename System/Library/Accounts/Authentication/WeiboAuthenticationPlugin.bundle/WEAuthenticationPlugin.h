/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Accounts/Authentication/WeiboAuthenticationPlugin.bundle/WeiboAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface WEAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountType:(id)arg1 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(BOOL)_duplicateAccountExists:(id)arg1 ;
-(void)_authenticateAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_swapCredentialsForAccount:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

