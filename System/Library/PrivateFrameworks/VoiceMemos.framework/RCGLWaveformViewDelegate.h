/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCGLWaveformViewDelegate <NSObject>
@required
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3;
-(void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(SCD_Struct_RC1)arg2;

@end

