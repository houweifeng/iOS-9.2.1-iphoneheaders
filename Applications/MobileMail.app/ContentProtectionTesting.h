/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface ContentProtectionTesting : NSObject {

	NSTimer* _lockTimer;

}
+(id)sharedInstance;
-(void)_simulateContentProtectionState:(int)arg1 ;
-(void)_lockTimerFired:(id)arg1 ;
-(void)_invalidateLockTimer;
-(void)toggleLockState;
-(void)disableContentProtection;
-(id)init;
@end

