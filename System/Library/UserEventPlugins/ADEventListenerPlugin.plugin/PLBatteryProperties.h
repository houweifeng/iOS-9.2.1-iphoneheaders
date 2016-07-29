/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ADEventListenerPlugin/ADEventListenerPlugin-Structs.h>
@class NSDictionary, NSNumber;

@interface PLBatteryProperties : NSObject {

	unsigned batteryEntry;
	NSDictionary* batteryProperties;

}

@property (nonatomic,readonly) BOOL gasGaugeEnabled; 
@property (nonatomic,readonly) double maxCapacity; 
@property (nonatomic,readonly) double currentCapacity; 
@property (nonatomic,readonly) double rawCurrentCapacity; 
@property (nonatomic,readonly) double capacity; 
@property (nonatomic,readonly) double rawCapacity; 
@property (nonatomic,readonly) long long voltage; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) BOOL isPluggedIn; 
@property (nonatomic,readonly) BOOL isCritical; 
@property (nonatomic,readonly) long long chargingCurrent; 
@property (nonatomic,readonly) long long batteryTemp; 
@property (nonatomic,readonly) long long cycleCount; 
@property (nonatomic,readonly) long long designCapacity; 
@property (nonatomic,readonly) long long current; 
@property (nonatomic,readonly) BOOL fullyCharged; 
@property (nonatomic,readonly) BOOL draining; 
@property (nonatomic,readonly) long long updateTime; 
@property (nonatomic,readonly) NSNumber * adapterInfo; 
@property (nonatomic,readonly) NSNumber * connectedStatus; 
@property (nonatomic,readonly) double currentAbsoluteCapacity; 
+(id)properties;
-(id)humanReadableChargingState;
-(id)initWithBatteryEntry:(unsigned)arg1 ;
-(long long)designCapacity;
-(double)rawCapacity;
-(BOOL)draining;
-(long long)voltage;
-(NSNumber *)adapterInfo;
-(double)rawCurrentCapacity;
-(id)batteryProperties;
-(BOOL)fullyCharged;
-(double)currentAbsoluteCapacity;
-(long long)cycleCount;
-(double)rawMaxCapacity;
-(NSNumber *)connectedStatus;
-(long long)chargingCurrent;
-(double)currentCapacity;
-(long long)batteryTemp;
-(id)propertyForKey:(CFStringRef)arg1 ;
-(void)dealloc;
-(id)init;
-(double)capacity;
-(double)maxCapacity;
-(long long)updateTime;
-(long long)current;
-(BOOL)isPluggedIn;
-(void)invalidateCache;
-(BOOL)isCharging;
-(BOOL)isCritical;
-(BOOL)gasGaugeEnabled;
@end

