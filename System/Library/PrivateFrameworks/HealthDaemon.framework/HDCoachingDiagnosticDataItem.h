/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDCoachingDiagnosticDataItem : NSObject {

	double _walking;
	double _automotive;
	double _cycling;
	double _running;
	double _other;
	double _unknown;
	double _workout;
	double _heartRate;
	double _activeCalories;
	double _briskMinutes;

}

@property (assign,nonatomic) double walking;                     //@synthesize walking=_walking - In the implementation block
@property (assign,nonatomic) double automotive;                  //@synthesize automotive=_automotive - In the implementation block
@property (assign,nonatomic) double cycling;                     //@synthesize cycling=_cycling - In the implementation block
@property (assign,nonatomic) double running;                     //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) double other;                       //@synthesize other=_other - In the implementation block
@property (assign,nonatomic) double unknown;                     //@synthesize unknown=_unknown - In the implementation block
@property (assign,nonatomic) double workout;                     //@synthesize workout=_workout - In the implementation block
@property (assign,nonatomic) double heartRate;                   //@synthesize heartRate=_heartRate - In the implementation block
@property (assign,nonatomic) double activeCalories;              //@synthesize activeCalories=_activeCalories - In the implementation block
@property (assign,nonatomic) double briskMinutes;                //@synthesize briskMinutes=_briskMinutes - In the implementation block
-(id)description;
-(double)running;
-(void)setRunning:(double)arg1 ;
-(void)setBriskMinutes:(double)arg1 ;
-(double)briskMinutes;
-(void)setWalking:(double)arg1 ;
-(void)setAutomotive:(double)arg1 ;
-(void)setCycling:(double)arg1 ;
-(void)setOther:(double)arg1 ;
-(void)setWorkout:(double)arg1 ;
-(void)setHeartRate:(double)arg1 ;
-(void)setActiveCalories:(double)arg1 ;
-(void)setUnknown:(double)arg1 ;
-(double)walking;
-(double)automotive;
-(double)cycling;
-(double)other;
-(double)workout;
-(double)heartRate;
-(double)activeCalories;
-(double)unknown;
@end

