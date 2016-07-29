/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SAObjects/SACalendarEventSearch.h>
#import <Calendar/CalAssistantCommand.h>

@class EKEventStore, NSString;

@interface CalAssistantEventSearch : SACalendarEventSearch <CalAssistantCommand> {

	CalDatabase* _database;
	EKEventStore* _eventStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (assign,nonatomic) CalDatabase* database; 
-(id)_gregorianDateToString:(SCD_Struct_Ca0)arg1 ;
-(void)_addOccurrences:(CFArrayRef)arg1 toArray:(id)arg2 timeZone:(id)arg3 ;
-(void)dealloc;
-(id)_validate;
-(id)_perform;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

