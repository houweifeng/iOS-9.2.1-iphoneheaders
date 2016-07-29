/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MusicEntityPlaybackStatus : NSObject <NSCopying, NSMutableCopying> {

	double _playbackCurrentTime;
	double _playbackCurrentTimeOriginatingTime;
	long long _playbackDisplayState;
	double _playbackDuration;
	float _playbackRate;

}

@property (nonatomic,readonly) double playbackCurrentTime; 
@property (nonatomic,readonly) long long playbackDisplayState;              //@synthesize playbackDisplayState=_playbackDisplayState - In the implementation block
@property (nonatomic,readonly) double playbackDuration;                     //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) float playbackRate;                          //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayPlaying; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)playbackDuration;
-(double)playbackCurrentTime;
-(BOOL)shouldDisplayPlaying;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(long long)playbackDisplayState;
-(float)playbackRate;
@end

