/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADEventInterface.h>

@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(SCD_Struct_CA1)_getDefaultCalendarIDForNewEvents;
-(BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
-(void)CADDatabaseActOnSuggestedEvent:(SCD_Struct_CA1)arg1 action:(int)arg2 validator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1 ;
-(void)CADDatabaseExportEventAsICS:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetDefaultCalendarForNewEventsWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseSetDefaultCalendarForNewEvents:(SCD_Struct_CA1)arg1 ;
-(void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetCountOfUnacknowledgedEvents:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetCountOfNotifiableEvents:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(id)arg1 timeZone:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 ;
-(void)CADDatabaseGetSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCanModifySuggestedEventCalendar:(/*^block*/id)arg1 ;
-(void)CADDatabaseInsertSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseActOnSuggestedEvent:(SCD_Struct_CA1)arg1 action:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseGetBirthdayContactIdentifierForEvent:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(/*^block*/id)arg1 ;
-(void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(/*^block*/id)arg4 ;
@end

