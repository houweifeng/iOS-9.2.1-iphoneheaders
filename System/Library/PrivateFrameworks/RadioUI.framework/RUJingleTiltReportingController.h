/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingController.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface RUJingleTiltReportingController : MPUReportingController {

	NSObject*<OS_dispatch_queue> _accessQueue;
	double _flushInterval;
	NSMutableArray* _pendingReportingEvents;
	NSObject*<OS_dispatch_source> _playEventFlushTimerSource;

}
-(void)dealloc;
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)_updateForLoadedStoreBag:(id)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(id)popPendingReportingEvents;
-(void)_cancelPlaybackFlushTimer;
-(void)_addPendingReportingEvents:(id)arg1 ;
-(void)_flushEvents;
-(void)_schedulePlaybackFlushTimer;
@end

