/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BiometricKit;

@interface SBBiometricEventLogger : NSObject {

	BiometricKit* _biometricKit;
	BOOL _fingerOnWithScreenOn;
	unsigned long long _fingerOnTime;
	unsigned long long _keybagUnlockTime;

}

@property (assign,nonatomic) unsigned long long fingerOnTime;                  //@synthesize fingerOnTime=_fingerOnTime - In the implementation block
@property (assign,nonatomic) BOOL fingerOnWithScreenOn;                        //@synthesize fingerOnWithScreenOn=_fingerOnWithScreenOn - In the implementation block
@property (assign,nonatomic) unsigned long long keybagUnlockTime;              //@synthesize keybagUnlockTime=_keybagUnlockTime - In the implementation block
+(id)sharedInstance;
-(void)_screenTurnedOn:(id)arg1 ;
-(void)_fingerOn:(id)arg1 ;
-(void)_tryAgain:(id)arg1 ;
-(void)_keybagBioUnlock:(id)arg1 ;
-(void)_unlockAnimationWillStart:(id)arg1 ;
-(void)_prearmMatch:(id)arg1 ;
-(void)setFingerOnTime:(unsigned long long)arg1 ;
-(void)setKeybagUnlockTime:(unsigned long long)arg1 ;
-(void)setFingerOnWithScreenOn:(BOOL)arg1 ;
-(unsigned long long)fingerOnTime;
-(unsigned long long)keybagUnlockTime;
-(BOOL)_shouldSyslogTimestamps;
-(BOOL)fingerOnWithScreenOn;
-(id)init;
-(void)_clearEverything;
-(BOOL)_shouldSignpost;
-(void)timestampEvent:(unsigned long long)arg1 ;
@end

