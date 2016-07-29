/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HAPTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HAPTimer, NSSet, NSMutableSet, NSString;

@interface HMDHomeAssistantOperation : NSObject <HAPTimerDelegate> {

	BOOL _completionHandlerCalled;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _completionHandler;
	HAPTimer* _accessoryConnectivityWaitTimer;
	NSSet* _accessoriesToOperateOn;
	NSMutableSet* _reachableAccessoriesToOperateOn;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) HAPTimer * accessoryConnectivityWaitTimer;                   //@synthesize accessoryConnectivityWaitTimer=_accessoryConnectivityWaitTimer - In the implementation block
@property (nonatomic,readonly) NSSet * accessoriesToOperateOn;                              //@synthesize accessoriesToOperateOn=_accessoriesToOperateOn - In the implementation block
@property (nonatomic,readonly) NSMutableSet * reachableAccessoriesToOperateOn;              //@synthesize reachableAccessoriesToOperateOn=_reachableAccessoriesToOperateOn - In the implementation block
@property (assign,nonatomic) BOOL completionHandlerCalled;                                  //@synthesize completionHandlerCalled=_completionHandlerCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2 ;
+(id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2 ;
+(id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)setCompletionHandlerCalled:(BOOL)arg1 ;
-(BOOL)completionHandlerCalled;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(id)initWithAccessories:(id)arg1 queue:(id)arg2 ;
-(NSSet *)accessoriesToOperateOn;
-(NSMutableSet *)reachableAccessoriesToOperateOn;
-(BOOL)_testForReachability;
-(void)_callCompletion;
-(HAPTimer *)accessoryConnectivityWaitTimer;
@end

