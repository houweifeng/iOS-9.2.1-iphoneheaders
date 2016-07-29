/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTUIAudioSession
@required
-(void)setDelegate:(id)arg1;
-(void)stopRecording;
-(float)averagePower;
-(BOOL)isRecording;
-(void)setEndpointerDelegate:(id)arg1;
-(BOOL)startRecording;
-(void)updateMeters;
-(void)releaseAudioSession;
-(BOOL)prepareRecord;
-(void)resetEndPointer;

@end

