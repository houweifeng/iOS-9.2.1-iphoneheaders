/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CADCalendarInterface
@required
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 hasEvents:(/*^block*/id)arg2;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 hasReminders:(/*^block*/id)arg2;
-(void)CADDatabaseDeleteCalendar:(SCD_Struct_CA1)arg1 forEntityType:(int)arg2 error:(/*^block*/id)arg3;

@end

