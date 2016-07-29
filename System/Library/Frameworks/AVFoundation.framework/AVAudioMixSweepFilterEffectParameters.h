/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {

	AVAudioMixSweepFilterEffectParametersInternal* _sweepFilterAudioEffect;

}

@property (nonatomic,readonly) int minimumCutOffFrequency; 
@property (nonatomic,readonly) int maximumCutOffFrequency; 
@property (nonatomic,readonly) float bypassThreshold; 
@property (nonatomic,readonly) float sweepValue; 
+(id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)minimumCutOffFrequency;
-(int)maximumCutOffFrequency;
-(float)bypassThreshold;
-(float)sweepValue;
-(id)initWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(id)sweepFilterEffectWithSweepValue:(float)arg1 ;
-(void)finalize;
@end

