/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSynchronizerNode : BWNode {

	OpaqueCMClockRef _sourceClock;
	OpaqueCMClockRef _masterClock;
	SCD_Struct_BW40 _ptsSyncHistory[16];
	int _oldestPTSSyncHistoryElement;
	int _newestPTSSyncHistoryElement;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)setSourceClock:(OpaqueCMClockRef)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_updatePTSSyncHistoryWithSourceTime:(SCD_Struct_BW2)arg1 syncedTime:(SCD_Struct_BW2)arg2 ;
-(void)_synchronizeDetectedFaces:(id)arg1 metadata:(id)arg2 timescale:(int)arg3 ;
-(SCD_Struct_BW2)_getSyncedTimeForSourceTime:(SCD_Struct_BW2)arg1 ;
-(OpaqueCMClockRef)sourceClock;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
@end

