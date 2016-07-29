/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSDaemonPriorityQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _sync_queue;
	NSObject*<OS_dispatch_queue> _default_queue;
	NSObject*<OS_dispatch_queue> _urgent_queue;

}
+(id)sharedInstance;
-(void)performBlockUrgentPriority:(/*^block*/id)arg1 ;
-(void)performBlockDefaultPriority:(/*^block*/id)arg1 ;
-(void)performBlockSyncPriority:(/*^block*/id)arg1 ;
-(void)assertRunningOnMain;
-(void)assertRunningWithPriority:(long long)arg1 ;
-(void)performBlockSYNCHRONOUSLYWithPriority:(/*^block*/id)arg1 priority:(int)arg2 ;
-(id)queueForPriority:(long long)arg1 ;
-(void)performBlockMainQueue:(/*^block*/id)arg1 ;
-(void)performBlockWithPriority:(/*^block*/id)arg1 priority:(int)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 withImplicitPriority:(int)arg2 ;
-(id)_queueForImplicitPriority:(long long)arg1 ;
-(void)dealloc;
-(id)init;
@end

