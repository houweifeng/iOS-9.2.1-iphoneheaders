/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CertUI/CertUI-Structs.h>
@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject {

	CertUITrustManager* _trustManager;
	id _forwardingDelegate;
	NSString* _connectionDisplayName;
	SCD_Struct_Ce0 _delegateRespondsTo;

}

@property (assign,nonatomic,__weak) id forwardingDelegate;                //@synthesize forwardingDelegate=_forwardingDelegate - In the implementation block
@property (nonatomic,copy) NSString * connectionDisplayName;              //@synthesize connectionDisplayName=_connectionDisplayName - In the implementation block
+(id)defaultServiceForProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3 ;
-(void)setForwardingDelegate:(id)arg1 ;
-(id)forwardingDelegate;
-(NSString *)connectionDisplayName;
-(void)setConnectionDisplayName:(NSString *)arg1 ;
@end

