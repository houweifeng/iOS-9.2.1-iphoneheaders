/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPDialerSoundController : NSObject {

	CFSetRef _inflightSounds;
	unsigned _soundsActivated : 1;
	unsigned long long _incompleteSoundCount;

}

@property (assign) unsigned long long incompleteSoundCount;              //@synthesize incompleteSoundCount=_incompleteSoundCount - In the implementation block
+(void)_delayedDeactivate;
-(void)dealloc;
-(id)init;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)stopSoundForDialerCharacter:(unsigned)arg1 ;
-(void)playSoundForDialerCharacter:(unsigned)arg1 ;
-(void)applicationSuspendedNotification:(id)arg1 ;
-(void)applicationResumedNotification:(id)arg1 ;
-(void)setSoundsActivated:(BOOL)arg1 ;
-(unsigned long long)incompleteSoundCount;
-(void)setIncompleteSoundCount:(unsigned long long)arg1 ;
-(void)soundCompletedPlaying:(unsigned)arg1 ;
@end

