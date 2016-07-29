/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class CUTWeakReference, NSMutableArray;

@interface CUTPowerMonitor : NSObject {

	CUTWeakReference* _iokitDelegate;
	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	unsigned _pmConnection;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;
	NSMutableArray* _delegates;
	double _currentLevel;
	BOOL _isExternalPowerConnected;

}

@property (assign,nonatomic) BOOL isExternalPowerConnected;                 //@synthesize isExternalPowerConnected=_isExternalPowerConnected - In the implementation block
@property (nonatomic,readonly) double batteryPercentRemaining; 
@property (assign,nonatomic) double currentLevel;                           //@synthesize currentLevel=_currentLevel - In the implementation block
+(id)sharedInstance;
-(void)_handlePowerChangedNotificationWithMessageType:(unsigned)arg1 notificationID:(void*)arg2 ;
-(BOOL)isExternalPowerConnected;
-(void)dealloc;
-(id)init;
-(double)batteryPercentRemaining;
-(void)setCurrentLevel:(double)arg1 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)setExternalPowerConnected:(BOOL)arg1 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(double)currentLevel;
@end

