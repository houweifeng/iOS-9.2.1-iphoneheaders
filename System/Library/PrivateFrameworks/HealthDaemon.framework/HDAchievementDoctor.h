/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDAchievementEngineDelegate.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, NSCalendar, HKActivityCache, NSArray, NSString;

@interface HDAchievementDoctor : NSObject <HDAchievementEngineDelegate> {

	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSCalendar* _calendar;
	HKActivityCache* _currentActivityCache;
	HKActivityCache* _yesterdayActivityCache;
	NSArray* _workouts;
	NSArray* _workoutEndDates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_achievementsInSet:(id)arg1 missingFromSet:(id)arg2 ;
-(id)init;
-(id)currentDate;
-(id)_queue_detectMissingAchievementsWithError:(id*)arg1 ;
-(BOOL)_queue_saveMissingAchievements:(id)arg1 error:(id*)arg2 ;
-(id)_fetchActivityCachesOrderedByCacheIndexWithError:(id*)arg1 ;
-(id)_fetchWorkoutsSortedByEndDateWithError:(id*)arg1 ;
-(id)_fetchAchievementsWithError:(id*)arg1 ;
-(id)_queue_detectAchievementsForActivityCaches:(id)arg1 workouts:(id)arg2 ;
-(id)_queue_findExpectedAchievements:(id)arg1 missingFromAchievements:(id)arg2 ;
-(id)_newEmptyActivityCacheWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3 ;
-(BOOL)_isActivityCache:(id)arg1 oneDayAfterActivityCache:(id)arg2 ;
-(id)_achievementsGroupedByActivityCacheIndex:(id)arg1 ;
-(id)_fetchAppleWatchSourcePersistentIDs;
-(long long)activityCacheIndexToday;
-(id)energyBurnedGoalYesterday;
-(id)energyBurnedGoalToday;
-(double)caloriesBurnedYesterday;
-(double)caloriesBurnedToday;
-(double)briskMinutesYesterday;
-(double)briskMinutesToday;
-(unsigned long long)standingHoursYesterday;
-(unsigned long long)standingHoursToday;
-(unsigned long long)stepsTakenYesterday;
-(unsigned long long)stepsTakenToday;
-(unsigned long long)numberOfSessionsCompletedAfterDate:(id)arg1 beforeDate:(id)arg2 minimumSessionDuration:(double)arg3 ;
-(id)sessionsEndingAfterDate:(id)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 targetQueue:(id)arg2 ;
-(void)runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

