/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CAMPreciseTimer : NSObject {

	double _delay;
	double _interval;
	/*^block*/id __handler;
	NSObject*<OS_dispatch_source> __currentTimer;

}

@property (nonatomic,readonly) double delay;                                                                    //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double interval;                                                                 //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy,readonly) id _handler;                                                                //@synthesize _handler=__handler - In the implementation block
@property (setter=_setCurrentTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _currentTimer;              //@synthesize _currentTimer=__currentTimer - In the implementation block
-(id)init;
-(void)invalidate;
-(double)delay;
-(void)start;
-(id)_handler;
-(double)interval;
-(id)initWithDelay:(double)arg1 interval:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_setCurrentTimer:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)_currentTimer;
@end

