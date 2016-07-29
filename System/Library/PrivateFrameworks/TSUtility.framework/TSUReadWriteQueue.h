/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface TSUReadWriteQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> mCanEnqueueReaders;
	NSObject*<OS_dispatch_queue> mGlobalQueue;
	NSObject*<OS_dispatch_group> mInFlightReaders;
	NSObject*<OS_dispatch_group> mInFlightWriters;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)performAsyncWrite:(/*^block*/id)arg1 ;
-(void)performSyncRead:(/*^block*/id)arg1 ;
-(void)waitOnInFlightWriters;
-(void)performSyncWrite:(/*^block*/id)arg1 ;
@end

