/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogFullOperators/PowerlogFullOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class NSMutableDictionary, NSMutableArray, PLEntryNotificationOperatorComposition;

@interface PLPMUAgent : PLAgent {

	IOHIDEventSystemClientRef hidEventSystem;
	NSMutableDictionary* matchingSensors;
	NSMutableArray* sensorNamesC;
	NSMutableArray* sensorNamesV;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;

}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)defaults;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)logEventPointSensors;
@end

