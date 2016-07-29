/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant

@property (assign,nonatomic) long long pendingStatus; 
@property (nonatomic,readonly) NSDate * lastModifiedParticipationStatus; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(long long)participantRole;
-(void)setParticipantRole:(long long)arg1 ;
-(long long)pendingStatus;
-(void)setPendingStatus:(long long)arg1 ;
-(void)setCommentChanged:(BOOL)arg1 ;
-(void)setStatusChanged:(BOOL)arg1 ;
-(id)_persistentAttendee;
-(NSDate *)lastModifiedParticipationStatus;
-(long long)participantType;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantType:(long long)arg1 ;
-(long long)participantStatus;
-(BOOL)isCurrentUser;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(BOOL)statusChanged;
-(BOOL)commentChanged;
-(void)setParticipantStatus:(long long)arg1 ;
-(id)owner;
@end

