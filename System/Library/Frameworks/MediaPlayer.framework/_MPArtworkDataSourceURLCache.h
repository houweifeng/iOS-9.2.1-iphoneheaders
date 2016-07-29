/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface _MPArtworkDataSourceURLCache : NSURLCache {

	NSMapTable* _requestSizeMap;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
-(id)init;
-(void)setRepresentationSize:(CGSize)arg1 forRequest:(id)arg2 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
@end

