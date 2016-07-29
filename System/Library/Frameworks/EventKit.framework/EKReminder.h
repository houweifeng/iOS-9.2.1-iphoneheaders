/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, NSDate, NSURL, EKObjectID, EKAlarm;

@interface EKReminder : EKCalendarItem {

	BOOL hadRecurrences;

}

@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * dueDateComponents; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long priority; 
@property (assign,nonatomic) unsigned long long displayOrder; 
@property (nonatomic,readonly) NSDate * dueDate; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,readonly) EKObjectID * parentID; 
@property (nonatomic,readonly) EKAlarm * bestDisplayAlarm; 
@property (assign,nonatomic) BOOL hadRecurrences; 
@property (nonatomic,copy) NSDate * firstAlertDate; 
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
-(id)locationTitleWithProximity:(long long*)arg1 ;
-(id)stringForCellDetailShowingDate:(BOOL)arg1 andTime:(BOOL)arg2 date:(id)arg3 ;
-(id)timeStringForCellDetail:(id)arg1 ;
-(id)locationStringForCellDetail;
-(id)dateStringForCellDetail:(id)arg1 ;
-(id)dateTimeStringForCellDetail:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)externalURI;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)_sendModifiedNote;
-(NSDate *)firstAlertDate;
-(void)setFirstAlertDate:(NSDate *)arg1 ;
-(id)reminderIdentifier;
-(NSDateComponents *)dueDateComponents;
-(NSDateComponents *)startDateComponents;
-(void)setStartDateComponents:(NSDateComponents *)arg1 ;
-(id)_persistentReminder;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(void)clearParentID;
-(EKAlarm *)bestDisplayAlarm;
-(BOOL)hadRecurrences;
-(void)setHadRecurrences:(BOOL)arg1 ;
-(id)startDateForRecurrence;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(unsigned long long)displayOrder;
-(NSDate *)dueDate;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(EKObjectID *)parentID;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)commit:(id*)arg1 ;
@end

