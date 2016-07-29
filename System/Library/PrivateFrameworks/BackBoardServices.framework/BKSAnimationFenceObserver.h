/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSHashTable;

@interface BKSAnimationFenceObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _fencePointerToTraceMap;
	NSMapTable* _fencePointerToTriggerPortMap;
	NSMapTable* _fencePointerToCAPortMap;
	NSHashTable* _reportableFencePointers;
	NSMapTable* _triggerPortToFencePointersMap;
	NSMapTable* _triggerPortToDeathWatcherMap;
	NSHashTable* _validDeathWatchersTable;
	unsigned long long _encodeCount;

}
+(id)sharedInstance;
-(BOOL)addFence:(id)arg1 ;
-(void)removeFencePointer:(void*)arg1 ;
-(unsigned long long)nextEncodeIdentifier;
-(void)dealloc;
-(id)init;
-(id)description;
@end

