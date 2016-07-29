/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface EventMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _events;
	double _lastPollTime;
	NSObject*<OS_dispatch_source> _pollTimer;

}
+(id)sharedEventMonitor;
-(void)_cancelPollTimer;
-(void)_reloadPollTimer;
-(void)_willRemoveEvent:(id)arg1 ;
-(void)_fireEventsAfterPollTimer;
-(id)monitorEvent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeEvent:(id)arg1 ;
@end

