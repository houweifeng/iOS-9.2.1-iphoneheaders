/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@interface MSBatteryPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	BOOL _isExteralPowerConnected;
	double _currentLevel;

}

@property (assign,nonatomic) BOOL isExternalPowerConnected;              //@synthesize isExteralPowerConnected=_isExteralPowerConnected - In the implementation block
@property (assign,nonatomic) double currentLevel;                        //@synthesize currentLevel=_currentLevel - In the implementation block
+(id)defaultMonitor;
-(BOOL)isExternalPowerConnected;
-(void)dealloc;
-(id)init;
-(double)batteryPercentRemaining;
-(void)setCurrentLevel:(double)arg1 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)setExternalPowerConnected:(BOOL)arg1 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(double)currentLevel;
@end

