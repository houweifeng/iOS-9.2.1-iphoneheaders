/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OITSUProgressObserver : NSObject {

	double mValueInterval;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mHandler;
	double mLastHandledValue;
	BOOL mLastHandledIndeterminate;

}

@property (nonatomic,readonly) double valueInterval; 
-(void)dealloc;
-(id)init;
-(id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3 ;
-(double)valueInterval;
@end

