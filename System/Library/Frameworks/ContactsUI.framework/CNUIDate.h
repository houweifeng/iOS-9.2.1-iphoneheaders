/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDate : NSObject
+(void)initialize;
+(void)localeDidChange:(id)arg1 ;
+(id)gregorianCalendarGMT;
+(id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3 ;
+(BOOL)isYearlessComponents:(id)arg1 ;
+(id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)currentCalendarGMT;
+(id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2 ;
+(id)yearlessComponentsFromDate:(id)arg1 ;
+(id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
+(id)dateByNormalizingToGMT:(id)arg1 ;
@end

