/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSArray, NSString;


@protocol _CDPDataPoint <NSObject>
@property (nonatomic,readonly) BOOL userIsSender; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSArray * peopleIdentifiers; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL userIsThreadInitiator; 
@required
-(NSDate *)timestamp;
-(NSString *)title;
-(NSArray *)peopleIdentifiers;
-(BOOL)userIsSender;
-(BOOL)userIsThreadInitiator;

@end
