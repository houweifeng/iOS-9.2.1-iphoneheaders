/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MessageCallToActionFormatter.h>

@class NSDateFormatter, NSArray;

@interface MessageCallToActionRealtimeEventFormatter : MessageCallToActionFormatter {

	BOOL _eventsAreInSameDay;
	NSDateFormatter* _weekdayFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _mediumDateFormatter;
	NSArray* _events;
	NSArray* _callsToAction;

}

@property (nonatomic,retain,readonly) NSDateFormatter * weekdayFormatter;                 //@synthesize weekdayFormatter=_weekdayFormatter - In the implementation block
@property (nonatomic,retain,readonly) NSDateFormatter * timeFormatter;                    //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (nonatomic,retain,readonly) NSDateFormatter * mediumDateFormatter;              //@synthesize mediumDateFormatter=_mediumDateFormatter - In the implementation block
@property (nonatomic,copy) NSArray * callsToAction;                                       //@synthesize callsToAction=_callsToAction - In the implementation block
@property (nonatomic,retain,readonly) NSArray * events;                                   //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) BOOL eventsAreInSameDay;                                   //@synthesize eventsAreInSameDay=_eventsAreInSameDay - In the implementation block
+(Class)_formatterClassForCallsToAction:(id)arg1 ;
-(NSArray *)callsToAction;
-(id)initWithCallsToAction:(id)arg1 ;
-(id)_timeZoneForEvent:(id)arg1 ;
-(NSDateFormatter *)mediumDateFormatter;
-(BOOL)_areEventsInSameDay:(id)arg1 ;
-(id)_formattedStartTimeForEvent:(id)arg1 ;
-(id)_formattedStartDateForEvent:(id)arg1 ;
-(void)setCallsToAction:(NSArray *)arg1 ;
-(BOOL)eventsAreInSameDay;
-(void)dealloc;
-(id)title;
-(id)subtitle;
-(NSDateFormatter *)weekdayFormatter;
-(NSDateFormatter *)timeFormatter;
-(NSArray *)events;
-(id)actionTitle;
@end

