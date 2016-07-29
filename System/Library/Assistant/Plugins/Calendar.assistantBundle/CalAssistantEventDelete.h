/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SAObjects/SADomainObjectDelete.h>

@class EKEventStore;

@interface CalAssistantEventDelete : SADomainObjectDelete {

	EKEventStore* _eventStore;

}
-(id)_deleteEvent:(id)arg1 ;
-(id)_validateEvent:(id)arg1 ;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(CalDatabase*)database;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

