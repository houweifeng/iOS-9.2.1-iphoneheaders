/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLRemoteSession.h>

@class ACAccountStore;

@interface VURemoteSession : SLRemoteSession {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(void)incrementPowerAssertion;
+(void)decrementPowerAssertion;
+(void)refreshPowerAssertion;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
@end

