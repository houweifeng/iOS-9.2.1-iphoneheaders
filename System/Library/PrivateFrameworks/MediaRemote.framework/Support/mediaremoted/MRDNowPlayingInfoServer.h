/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSObject, NSMapTable, NSMutableDictionary;

@interface MRDNowPlayingInfoServer : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _nowPlayingInfoClientsForCustomOrigins;
	NSMutableDictionary* _nowPlayingInfoClientsForPIDs;

}
-(id)activeNowPlayingInfoClient;
-(id)existingLocalNowPlayingInfoClientForPID:(int)arg1 ;
-(id)existingCustomOriginNowPlayingInfoClientForOrigin:(MROriginRef)arg1 ;
-(id)existingNowPlayingInfoClientForOrigin:(MROriginRef)arg1 pid:(int)arg2 ;
-(id)localNowPlayingInfoClientForPID:(int)arg1 ;
-(id)customOriginNowPlayingInfoClientForOrigin:(MROriginRef)arg1 ;
-(void)removeLocalNowPlayingInfoClientForPID:(int)arg1 ;
-(void)removeCustomOriginNowPlayingInfoClientForOrigin:(MROriginRef)arg1 ;
-(id)nowPlayingInfoClientForOrigin:(MROriginRef)arg1 pid:(int)arg2 ;
-(void)removeNowPlayingInfoClientForOrigin:(MROriginRef)arg1 pid:(int)arg2 ;
-(id)existingNowPlayingInfoClientForOrigin:(MROriginRef)arg1 displayID:(id)arg2 ;
-(void)setNowPlayingInfo:(id)arg1 forOrigin:(MROriginRef)arg2 pid:(int)arg3 withArtwork:(id)arg4 mergePolicy:(unsigned char)arg5 ;
-(void)dealloc;
-(id)init;
@end

