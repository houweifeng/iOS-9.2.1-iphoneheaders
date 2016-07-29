/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSString* _clientCacheIdentifier;
	BOOL _hasPreparedForMingling;
	unsigned long long _countOfNotifiedBatchesInPullQueue;

}

@property (retain) id<CPLMinglePulledChangesTaskDelegate> delegate; 
+(BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(BOOL*)arg3 error:(id*)arg4 ;
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_taskDidFinishWithError:(id)arg1 ;
-(void)_processNextBatch;
-(void)_launch;
-(id)taskIdentifier;
@end

