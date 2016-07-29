/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MitigationController : NSObject <tGraphDataSource> {

	NSObject*<OS_dispatch_queue> cpuMitigationQueue;
	NSObject*<OS_dispatch_queue> gpuMitigationQueue;
	CFDictionaryRef properties;
	unsigned sgxDevice;
	int listPosition;
	int ceilingListDVB1[6];
	int ceilingListDVD0[6];
	int ceilingListDVD1[6];
	int ceilingListSGX[6];
	int floorListCPU[6];
	int floorListGPU[6];
	int sgxDutyCycleCrossoverThreshold;
	BOOL connectsToDieTempCtlDriver;
	BOOL _powerSaveActive;
	int _powerSaveMaxDVD1;
	int _powerSaveMaxDVD0;
	int _powerSaveMaxSGX;
	BOOL graphicsUpdateInFlight;
	int DVB1Level;
	int DVD1Level;
	int DVD0Level;
	int SGXLevel;
	int _powerSaveToken;

}

@property (assign,nonatomic) int DVB1Level; 
@property (assign,nonatomic) int DVD1Level; 
@property (assign,nonatomic) int DVD0Level; 
@property (assign,nonatomic) int SGXLevel; 
@property (assign,nonatomic) BOOL graphicsUpdateInFlight; 
@property (assign,nonatomic) int powerSaveToken;                       //@synthesize powerSaveToken=_powerSaveToken - In the implementation block
-(void)setMaxAAPCPerfState:(CFStringRef)arg1 level:(int)arg2 ;
-(void)setMaxGraphicsDriverPerfState:(int)arg1 ;
-(void)setPowerSaveToken:(int)arg1 ;
-(void)setDVB1Level:(int)arg1 ;
-(void)setDVD0Level:(int)arg1 ;
-(void)setDVD1Level:(int)arg1 ;
-(BOOL)graphicsUpdateInFlight;
-(void)setGraphicsUpdateInFlight:(BOOL)arg1 ;
-(void)setSGXLevel:(int)arg1 ;
-(BOOL)getGPUUtilization:(int*)arg1 ;
-(int)powerSaveToken;
-(void)updateGPU;
-(int)SGXLevel;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(int)DVB1Level;
-(int)DVD1Level;
-(int)DVD0Level;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(void)updateCPU;
-(int)requestListID;
-(int)numberOfFields;
-(id)initForFastLoop:(BOOL)arg1 sgxDutyCrossThreshold:(int)arg2 powerSaveParams:(id)arg3 ;
-(void)setCPUPowerCeiling:(int)arg1 fromDecisionSource:(int)arg2 ;
-(void)setGPUPowerCeiling:(int)arg1 fromDecisionSource:(int)arg2 ;
-(void)setCPUPowerFloor:(int)arg1 fromDecisionSource:(int)arg2 ;
-(void)setGPUPowerFloor:(int)arg1 fromDecisionSource:(int)arg2 ;
-(void)setMaxDieTempCtlPerfState:(CFStringRef)arg1 level:(int)arg2 scaleToFixedPoint:(BOOL)arg3 ;
-(int)setServiceProperty:(unsigned)arg1 key:(CFStringRef)arg2 value:(int)arg3 scaleToFixedPoint:(BOOL)arg4 ;
-(void)handlePowerSaveStateNotification:(unsigned long long)arg1 ;
@end

