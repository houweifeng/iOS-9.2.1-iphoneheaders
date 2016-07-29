/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, RTCReporting;

@interface RURTCReportingController : MPUReportingController {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _reportingState;
	NSMutableArray* _reportingStateLoadCompletionHandlers;
	RTCReporting* _rtcReporting;
	BOOL _shouldDeferEventFlushing;

}

@property (assign,nonatomic) BOOL shouldDeferEventFlushing; 
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(BOOL)_getMethod:(unsigned short*)arg1 respCode:(unsigned short*)arg2 infoDictionary:(id*)arg3 fromReportingEvent:(id)arg4 ;
-(void)setShouldDeferEventFlushing:(BOOL)arg1 ;
-(BOOL)shouldDeferEventFlushing;
@end

