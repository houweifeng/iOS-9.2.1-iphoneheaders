/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface RadioPlaybackTimeoutInfo : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _playbackTimeoutIdentifierToTimeoutNumber;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_playbackTimeoutIdentifierForBase:(id)arg1 playbackType:(long long)arg2 ;
-(double)pausedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)unlockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)dockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)lockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
@end

