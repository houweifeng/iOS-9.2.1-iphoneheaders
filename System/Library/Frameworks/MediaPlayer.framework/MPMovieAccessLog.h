/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLog, NSData, NSArray;

@interface MPMovieAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLog* _accessLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAVItemAccessLog:(id)arg1 ;
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(NSArray *)events;
@end

