/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class CMAttitude, NSOperationQueue, CMMotionManager, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	CMAttitude* _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	CMAttitude* _lastAttitude;
	CMAttitude* _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	OpaqueFigSimpleMutexRef _motionSamplesLock;
	NSOperationQueue* _motionQueue;
	CMMotionManager* _motionManager;
	NSMutableArray* _motionSamples;
	SCD_Struct_BW2 _maxHoldDuration;
	double _bufferHistorySeconds;
	double _motionSampleRate;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)setVideoFrameRate:(double)arg1 ;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setMaxHoldDuration:(SCD_Struct_BW2)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW2)arg1 minimumPTS:(SCD_Struct_BW2)arg2 ;
-(void)_processMotionSample:(id)arg1 gravity:(SCD_Struct_Fi50)arg2 timestamp:(double)arg3 ;
-(double)_timeoutThreshold;
-(BOOL)_isUnstable:(id)arg1 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(double)directionalWeightForSample:(id)arg1 ;
-(double)_getHostTime;
-(BOOL)trimmingActive;
-(SCD_Struct_BW2)maxHoldDuration;
-(double)bufferHistorySeconds;
-(double)videoFrameRate;
@end

