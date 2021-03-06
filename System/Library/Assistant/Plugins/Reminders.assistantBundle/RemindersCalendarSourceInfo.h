/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(BOOL)arg2 ;
-(BOOL)shouldShowWhenEditingLists;
-(BOOL)shouldShowWhenViewingLists;
-(BOOL)canDeleteList;
-(BOOL)_isNonEmpty;
-(BOOL)canAddList;
-(NSMutableArray *)calendarArray;
-(id)title;
-(int)sortOrder;
-(id)source;
-(id)initWithSource:(id)arg1 ;
@end

