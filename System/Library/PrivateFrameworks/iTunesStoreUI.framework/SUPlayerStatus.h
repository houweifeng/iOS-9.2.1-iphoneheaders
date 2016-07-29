/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying> {

	double _currentTime;
	double _duration;
	NSError* _error;
	long long _state;

}

@property (assign,nonatomic) double currentTime;                 //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long playerState;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlayerState:(long long)arg1 ;
-(long long)playerState;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

