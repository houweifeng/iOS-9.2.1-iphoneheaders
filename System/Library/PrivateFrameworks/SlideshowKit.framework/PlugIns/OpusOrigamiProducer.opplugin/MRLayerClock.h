/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCPlugTiming.h>

@interface MRLayerClock : NSObject <MCPlugTiming> {

	double _internalTimeOffset;
	double _externalTimeForPauseInversion;
	unsigned long long _flags;
	double _externalTime;
	double _phaseInDuration;
	double _loopDuration;
	double _phaseOutDuration;
	double _numberOfLoops;
	double _containerTime;
	double _containerDuration;
	long long _currentLoopIndex;

}

@property (assign,nonatomic) double externalTime;                       //@synthesize externalTime=_externalTime - In the implementation block
@property (assign,nonatomic) double fullDuration; 
@property (assign,nonatomic) double containerTime;                      //@synthesize containerTime=_containerTime - In the implementation block
@property (nonatomic,readonly) double containerDuration;                //@synthesize containerDuration=_containerDuration - In the implementation block
@property (nonatomic,readonly) long long currentLoopIndex;              //@synthesize currentLoopIndex=_currentLoopIndex - In the implementation block
@property (readonly) BOOL _isPaused; 
@property (nonatomic,readonly) BOOL isPaused; 
@property (nonatomic,readonly) BOOL jumpedBackInTime; 
@property (nonatomic,readonly) BOOL isInPhaseIn; 
@property (nonatomic,readonly) BOOL isInPhaseOut; 
@property (assign,nonatomic) BOOL parentIsPaused; 
@property (readonly) BOOL selfIsPaused; 
@property (assign,nonatomic) double phaseInDuration;                    //@synthesize phaseInDuration=_phaseInDuration - In the implementation block
@property (assign,nonatomic) double loopDuration;                       //@synthesize loopDuration=_loopDuration - In the implementation block
@property (assign,nonatomic) double phaseOutDuration;                   //@synthesize phaseOutDuration=_phaseOutDuration - In the implementation block
@property (assign,nonatomic) double numberOfLoops;                      //@synthesize numberOfLoops=_numberOfLoops - In the implementation block
-(double)containerDuration;
-(BOOL)isInPhaseIn;
-(BOOL)parentIsPaused;
-(void)pauseAfter:(double)arg1 ;
-(void)resumeAfter:(double)arg1 ;
-(BOOL)isInPhaseOut;
-(double)containerTime;
-(double)loopDuration;
-(BOOL)_isPaused;
-(void)syncToPlug:(id)arg1 ;
-(id)initWithPlug:(id)arg1 ;
-(double)phaseInDuration;
-(BOOL)selfIsPaused;
-(double)externalTime;
-(double)fullDuration;
-(void)setFullDuration:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)reactivateWithPlug:(id)arg1 ;
-(long long)currentLoopIndex;
-(void)updateForExternalTime:(double)arg1 ;
-(void)setParentIsPaused:(BOOL)arg1 ;
-(BOOL)jumpedBackInTime;
-(void)pauseOnNextUpdate;
-(void)resumeOnNextUpdate;
-(void)setContainerTime:(double)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(void)setExternalTime:(double)arg1 ;
-(void)deactivate;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(BOOL)isPaused;
@end

