/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSFileHandle, NSDate, NSArray, NSEnumerator, NSOperationQueue, NSObject, NSString;

@interface _HDDataReplayer : NSObject {

	NSFileHandle* _replayFileHandle;
	/*^block*/id _dataHandler;
	BOOL _shouldRepeat;
	NSDate* _replayStartDate;
	NSArray* _chunkOfReplayEvents;
	NSEnumerator* _eventEnumerator;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(NSString *)path;
-(void)stop;
-(void)start;
-(id)initWithReplayFile:(id)arg1 repeat:(BOOL)arg2 dataHandler:(/*^block*/id)arg3 ;
-(BOOL)_queue_scheduleNextEvent;
-(BOOL)_queue_loadNextChunkOfReplayEvents;
@end

