/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUSSDAlert.h>
#import <SpringBoard/SBSMSClass0AlertDisplayDelegate.h>

@class NSString;

@interface SBSMSClass0Alert : SBUSSDAlert <SBSMSClass0AlertDisplayDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)alertWithString:(id)arg1 address:(id)arg2 ;
+(void)playMessageReceived;
+(void)registerForAlerts;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(void)smsClass0AlertDisplayDidTapLearnMoreButton:(id)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(void)deactivate;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
@end

