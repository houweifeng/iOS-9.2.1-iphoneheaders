/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface SBClientSideAnimation : NSObject {

	double _duration;
	CAMediaTimingFunction* _timingFunction;
	/*^block*/id _applier;
	/*^block*/id _completion;
	long long _frameInterval;
	double _startTime;
	double _lastFireTime;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,copy) id applier;                                            //@synthesize applier=_applier - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long frameInterval;                             //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,nonatomic) double startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastFireTime;                                 //@synthesize lastFireTime=_lastFireTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
+(void)animateWithDuration:(double)arg1 timingFunction:(id)arg2 applier:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
+(void)animateWithDuration:(double)arg1 curve:(long long)arg2 applier:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(double)lastFireTime;
-(void)setTimingFunctionFromAnimationCurve:(long long)arg1 ;
-(void)_invokeApplierWithProgress:(double)arg1 ;
-(void)_invokeCompletionWithFinished:(BOOL)arg1 ;
-(void)_getEffectiveElapsedTime:(double*)arg1 finished:(BOOL*)arg2 ;
-(void)setLastFireTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)stop;
-(void)setFrameInterval:(long long)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(double)_solveForInput:(double)arg1 ;
-(long long)frameInterval;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)_reset;
-(BOOL)isRunning;
-(double)startTime;
-(double)elapsedTime;
-(void)setApplier:(id)arg1 ;
-(id)applier;
@end

