/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/PidComponent.h>
#import <ThermalMonitor/tGraphDataSource.h>
#import <ThermalMonitor/powerlogDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ComponentControl : PidComponent <tGraphDataSource, powerlogDataSource> {

	BOOL allowLIOverride;
	BOOL thermRelease;
	NSObject*<OS_dispatch_queue> myCustomQueue;
	unsigned currentLoadingIndex;
	unsigned maxLoadingIndex;
	unsigned previousValue;
	unsigned releaseMaxLI;
	unsigned releaseRate;
	CFStringRef _powerlogKeyMaxLI;

}

@property (assign,nonatomic) BOOL allowLIOverride; 
@property (assign,nonatomic) unsigned currentLoadingIndex; 
@property (assign,nonatomic) unsigned maxLoadingIndex; 
@property (assign,nonatomic) unsigned releaseMaxLI; 
@property (assign,nonatomic) unsigned releaseRate; 
@property (assign,nonatomic) BOOL thermRelease; 
-(void)setAllowLIOverride:(BOOL)arg1 ;
-(unsigned)currentLoadingIndex;
-(void)setMaxLoadingIndex:(unsigned)arg1 ;
-(void)setCurrentLoadingIndex:(unsigned)arg1 ;
-(void)refreshCurrentLoadingIndex;
-(void)setThermRelease:(BOOL)arg1 ;
-(void)testLoadingIndexLevel;
-(void)filteredMaxLoadingIndex;
-(void)setReleaseMaxLI:(unsigned)arg1 ;
-(BOOL)allowLIOverride;
-(void)setReleaseRate:(unsigned)arg1 ;
-(unsigned)maxLoadingIndex;
-(unsigned)releaseRate;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)getPowerlogFieldCurrentValue;
-(BOOL)isEqualMType:(int)arg1 ;
-(id)initWithCC:(int)arg1 :(CFDictionaryRef)arg2 ;
-(unsigned)releaseMaxLI;
-(int)numberOfFields;
-(CFStringRef)getPowerlogKey;
-(BOOL)thermRelease;
-(void)defaultAction;
@end

