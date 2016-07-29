/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary;

@interface RCDebugAudioGenerator : NSObject {

	NSURL* _outputURL;
	double _duration;
	double _intervalBetweenPeaks;
	/*^block*/id _generateCompletionHandler;
	NSDictionary* _outputSettings;
	/*^block*/id _curveFunction;

}

@property (nonatomic,readonly) NSURL * outputURL;                          //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double intervalBetweenPeaks;                //@synthesize intervalBetweenPeaks=_intervalBetweenPeaks - In the implementation block
@property (nonatomic,readonly) id generateCompletionHandler;               //@synthesize generateCompletionHandler=_generateCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettings;              //@synthesize outputSettings=_outputSettings - In the implementation block
@property (nonatomic,readonly) id curveFunction;                           //@synthesize curveFunction=_curveFunction - In the implementation block
+(id)_defaultOutputSettings;
+(/*^block*/id)_defaultCurveFunction;
-(double)duration;
-(NSDictionary *)outputSettings;
-(BOOL)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onBackgroundQueueGenerateAudio;
-(void)_onMainQueueGenerateFailedWithError:(id)arg1 ;
-(double)intervalBetweenPeaks;
-(id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(/*^block*/id)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4 ;
-(void)_onMainQueueGenerateFinished;
-(id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3 ;
-(id)generateCompletionHandler;
-(id)curveFunction;
-(NSURL *)outputURL;
@end

