/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface _HDSessionAchievementState : NSObject {

	NSArray* _sortedSessions;
	NSDictionary* _sortedSessionsByActivityType;
	NSDictionary* _bestCaloriesSessionsByActivityType;
	NSDictionary* _initialSessionCountByActivityType;

}

@property (nonatomic,retain) NSArray * sortedSessions;                                       //@synthesize sortedSessions=_sortedSessions - In the implementation block
@property (nonatomic,retain) NSDictionary * sortedSessionsByActivityType;                    //@synthesize sortedSessionsByActivityType=_sortedSessionsByActivityType - In the implementation block
@property (nonatomic,retain) NSDictionary * bestCaloriesSessionsByActivityType;              //@synthesize bestCaloriesSessionsByActivityType=_bestCaloriesSessionsByActivityType - In the implementation block
@property (nonatomic,retain) NSDictionary * initialSessionCountByActivityType;               //@synthesize initialSessionCountByActivityType=_initialSessionCountByActivityType - In the implementation block
-(NSArray *)sortedSessions;
-(void)setSortedSessions:(NSArray *)arg1 ;
-(void)setSortedSessionsByActivityType:(NSDictionary *)arg1 ;
-(void)setBestCaloriesSessionsByActivityType:(NSDictionary *)arg1 ;
-(void)setInitialSessionCountByActivityType:(NSDictionary *)arg1 ;
-(NSDictionary *)sortedSessionsByActivityType;
-(NSDictionary *)initialSessionCountByActivityType;
-(NSDictionary *)bestCaloriesSessionsByActivityType;
@end

