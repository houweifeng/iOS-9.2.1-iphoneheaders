/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreActivity.framework/CoreActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMMotionManager, ActivityCounts, StepHandler, NSOperationQueue;

@interface CoreActivity : NSObject {

	BOOL _pedometerIsOn;
	int _accelRate;
	CMMotionManager* _motionManager;
	ActivityCounts* _aCounts;
	StepHandler* _stepHandler;
	NSOperationQueue* _opQueue;

}

@property (assign,nonatomic) int accelRate;                                //@synthesize accelRate=_accelRate - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) ActivityCounts * aCounts;                     //@synthesize aCounts=_aCounts - In the implementation block
@property (nonatomic,retain) StepHandler * stepHandler;                    //@synthesize stepHandler=_stepHandler - In the implementation block
@property (assign,nonatomic) BOOL pedometerIsOn;                           //@synthesize pedometerIsOn=_pedometerIsOn - In the implementation block
@property (nonatomic,retain) NSOperationQueue * opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
+(int)activityCountThresholdForActivityLevel:(int)arg1 epochDuration:(int)arg2 ;
-(void)setStepHandler:(StepHandler *)arg1 ;
-(StepHandler *)stepHandler;
-(NSOperationQueue *)opQueue;
-(void)setOpQueue:(NSOperationQueue *)arg1 ;
-(void)setAccelRate:(int)arg1 ;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
-(int)accelRate;
-(void)setACounts:(ActivityCounts *)arg1 ;
-(ActivityCounts *)aCounts;
-(BOOL)pedometerIsOn;
-(void)setPedometerIsOn:(BOOL)arg1 ;
-(id)initActivityTracking:(id)arg1 ;
-(void)startPedometerUpdates:(id)arg1 ;
-(int)activityCountThresholdForActivityLevel:(int)arg1 ;
-(void)stopPedometerUpdates;
-(void)startActivityUpdates;
-(void)stopActivityUpdates;
@end

