/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLAccessQueue, NSMutableDictionary, TLAlertLoopPlayer, TLAlert;

@interface TLAlertController : NSObject {

	TLAccessQueue* _accessQueue;
	NSMutableDictionary* _alertsBySoundIDs;
	TLAlertLoopPlayer* _loopPlayer;
	TLAlert* _repeatedlyPlayingAlert;

}

@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;                                        //@synthesize accessQueue=_accessQueue - In the implementation block
@property (setter=_setAlertsBySoundIDs:,nonatomic,retain) NSMutableDictionary * _alertsBySoundIDs;              //@synthesize alertsBySoundIDs=_alertsBySoundIDs - In the implementation block
@property (setter=_setLoopPlayer:,nonatomic,retain) TLAlertLoopPlayer * _loopPlayer;                            //@synthesize loopPlayer=_loopPlayer - In the implementation block
@property (setter=_setRepeatedlyPlayingAlert:,nonatomic,retain) TLAlert * _repeatedlyPlayingAlert;              //@synthesize repeatedlyPlayingAlert=_repeatedlyPlayingAlert - In the implementation block
+(id)sharedAlertController;
-(void)dealloc;
-(id)init;
-(BOOL)_playAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 targetQueue:(id)arg3 ;
-(void)_startPlayingAlertRepeatedly:(id)arg1 ;
-(void)_stopAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 targetQueue:(id)arg5 ;
-(NSMutableDictionary *)_alertsBySoundIDs;
-(void)_removeSoundID:(unsigned)arg1 shouldStopSound:(BOOL)arg2 fireCompletionHandler:(BOOL)arg3 ;
-(void)_setAlertsBySoundIDs:(id)arg1 ;
-(TLAlert *)_repeatedlyPlayingAlert;
-(void)_stopRepeatedlyPlayingAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned long long)arg3 allowingFallbackLogic:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 targetQueue:(id)arg6 ;
-(void)_setRepeatedlyPlayingAlert:(id)arg1 ;
-(void)_setLoopPlayer:(id)arg1 ;
-(BOOL)_stopAllAlerts;
-(unsigned)_soundIDForAlert:(id)arg1 ;
-(void)_didReachTimeoutForSystemSound:(id)arg1 ;
-(TLAlertLoopPlayer *)_loopPlayer;
-(BOOL)stopAllAlerts;
-(void)_systemSoundDidFinishPlaying:(unsigned)arg1 ;
-(void)_setAccessQueue:(id)arg1 ;
-(TLAccessQueue *)_accessQueue;
@end

