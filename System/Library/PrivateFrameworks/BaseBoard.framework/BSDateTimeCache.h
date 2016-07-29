/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BSDateTimeCache : NSObject {

	double _yesterday;
	double _today;
	double _tomorrow;
	double _2daysFromNow;
	double _6daysAgo;
	double _prevWeek;
	double _nextWeek;
	double _lastAttemptedResetTime;
	double _lastSuccessfulResetTime;

}
+(id)sharedInstance;
-(void)_resetAndConfigureAndPostNotification:(BOOL)arg1 ;
-(void)_resetAndConfigure;
-(void)_resetAndConfigureIfNecessary;
-(BOOL)_isToday:(double)arg1 ;
-(BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2 ;
-(double)today;
-(double)tomorrow;
-(double)yesterday;
-(double)prevWeek;
-(double)nextWeek;
-(BOOL)isToday:(double)arg1 ;
-(BOOL)isTomorrow:(double)arg1 ;
-(BOOL)isYesterday:(double)arg1 ;
-(BOOL)isWithinPrevWeek:(double)arg1 ;
-(BOOL)isWithinNextWeek:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

