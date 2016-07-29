/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMRemoteObjectBroadcaster : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)defaultBroadcaster;
-(void)dealloc;
-(id)init;
-(id)_queue;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 ;
-(id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(void)flushProxy:(id)arg1 ;
-(void)blockUntilSendQueueIsEmpty;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
@end

