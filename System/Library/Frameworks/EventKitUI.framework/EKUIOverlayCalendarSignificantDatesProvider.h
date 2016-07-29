/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CalDateRange, NSDictionary, NSObject, NSDate;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {

	CalDateRange* _cachedDateRange;
	CalDateRange* _cachedCentralYear;
	NSDictionary* _cachedFirstsOfMonths;
	NSDictionary* _cachedFirstsOfYears;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentGeneration;
	NSDate* _currentRequest;
	BOOL _loadPending;
	/*^block*/id _significantDatesChangedHandler;

}

@property (nonatomic,copy) id significantDatesChangedHandler;              //@synthesize significantDatesChangedHandler=_significantDatesChangedHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_load;
-(id)firstOfOverlayMonthsForCalendarMonth:(id)arg1 ;
-(id)firstOfOverlayYearsForCalendarMonth:(id)arg1 ;
-(void)_invalidateCaches;
-(void)_requestDate:(id)arg1 ;
-(id)significantDatesChangedHandler;
-(void)setSignificantDatesChangedHandler:(id)arg1 ;
@end
