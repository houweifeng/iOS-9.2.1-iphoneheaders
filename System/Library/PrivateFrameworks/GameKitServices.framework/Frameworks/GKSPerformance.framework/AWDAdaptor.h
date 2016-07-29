/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AWDStats, TimingCollection, NSMutableArray;

@interface AWDAdaptor : NSObject {

	AWDStats* _awdstat;
	TimingCollection* _videoQualityTimers;
	BOOL _callStarted;
	BOOL _RTStatsReceived;
	NSMutableArray* _rtpPacketLossRateArray;
	NSMutableArray* _jitterBufferUnderflowRateArray;
	NSMutableArray* _frameErasureRateArray;
	NSMutableArray* _jitterBufferResidencyTimeArray;

}

@property (retain) AWDStats * awdstat;                                 //@synthesize awdstat=_awdstat - In the implementation block
@property (assign) BOOL callStarted;                                   //@synthesize callStarted=_callStarted - In the implementation block
@property (assign) BOOL RTStatsReceived;                               //@synthesize RTStatsReceived=_RTStatsReceived - In the implementation block
@property (retain) TimingCollection * videoQualityTimers;              //@synthesize videoQualityTimers=_videoQualityTimers - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)callStarted;
-(void)setCallStarted:(BOOL)arg1 ;
-(void)setRTStatsReceived:(BOOL)arg1 ;
-(AWDStats *)awdstat;
-(TimingCollection *)videoQualityTimers;
-(void)parseAudioTierChange:(id)arg1 ;
-(void)parseRTStats:(id)arg1 ;
-(void)parseVideoStats:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseConnectivityTimings:(id)arg1 ;
-(void)parseVideoDegraded:(id)arg1 direction:(unsigned short)arg2 ;
-(void)parseAWDEvent:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseCellTechChange:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseVideoProperty:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseConnectionEstablishment:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseDuplication:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseWindowMode:(unsigned short)arg1 dict:(id)arg2 ;
-(void)parseDisconnectReport:(unsigned short)arg1 dict:(id)arg2 ;
-(void)wifiCallingAddSamples:(id)arg1 ;
-(BOOL)wifiCallingAddSamplesGenerateAndSendCallEndReport:(id)arg1 ;
-(void)parseDTXReport:(unsigned short)arg1 dict:(id)arg2 ;
-(unsigned*)generateHistogramForValues:(id)arg1 withBinBoundaries:(id)arg2 ;
-(double)computeMean:(id)arg1 ;
-(double)computeMedian:(id)arg1 ;
-(double)compute95thPercentile:(id)arg1 ;
-(void)sendMessageWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3 ;
-(void)setAwdstat:(AWDStats *)arg1 ;
-(BOOL)RTStatsReceived;
-(void)setVideoQualityTimers:(TimingCollection *)arg1 ;
@end

