/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class UsageFeed, PLEntryNotificationOperatorComposition, PLMonotonicTimer, NSDictionary, NSDate, NSMutableSet;

@interface PLProcessNetworkAgent : PLAgent {

	NStatManagerRef _statManagerRef;
	UsageFeed* _usageFeed;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLMonotonicTimer* _logUsageTimer;
	NSDictionary* _lastProcessNameToNetworkUsageEntry;
	NSDate* _lastEntryDate;
	NSMutableSet* _processes;

}

@property (assign) NStatManagerRef statManagerRef;                                            //@synthesize statManagerRef=_statManagerRef - In the implementation block
@property (retain) UsageFeed * usageFeed;                                                     //@synthesize usageFeed=_usageFeed - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) PLMonotonicTimer * logUsageTimer;                                          //@synthesize logUsageTimer=_logUsageTimer - In the implementation block
@property (retain) NSDictionary * lastProcessNameToNetworkUsageEntry;                         //@synthesize lastProcessNameToNetworkUsageEntry=_lastProcessNameToNetworkUsageEntry - In the implementation block
@property (retain) NSDate * lastEntryDate;                                                    //@synthesize lastEntryDate=_lastEntryDate - In the implementation block
@property (retain) NSMutableSet * processes;                                                  //@synthesize processes=_processes - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionConnection;
+(id)entryEventBackwardDefinitionUsage;
+(id)entryEventIntervalDefinitionUsage;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)processesOfInterest:(id)arg1 ;
-(void)didAddNewSource:(NStatSourceRef)arg1 ;
-(void)setStatManagerRef:(NStatManagerRef)arg1 ;
-(NStatManagerRef)statManagerRef;
-(void)setUsageFeed:(UsageFeed *)arg1 ;
-(void)setLogUsageTimer:(PLMonotonicTimer *)arg1 ;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)didSetCountsBlock:(id)arg1 withCounts:(id)arg2 ;
-(void)didSetDescriptionBlock:(id)arg1 withDescription:(id)arg2 ;
-(void)didRemoveSource:(id)arg1 ;
-(void)transferSource:(id)arg1 fromPID:(id)arg2 toPID:(id)arg3 ;
-(void)logEventPointConnectionEvent:(id)arg1 forSource:(id)arg2 ;
-(void)addSource:(id)arg1 toPID:(id)arg2 ;
-(void)logEventBackwardUsage;
-(UsageFeed *)usageFeed;
-(void)logEventBackwardUsageWithOutcome:(id)arg1 ;
-(NSDate *)lastEntryDate;
-(NSDictionary *)lastProcessNameToNetworkUsageEntry;
-(void)accountWithNetworkUsageDiffEntries:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(void)setLastEntryDate:(NSDate *)arg1 ;
-(void)setLastProcessNameToNetworkUsageEntry:(NSDictionary *)arg1 ;
-(BOOL)outcomeHasDataUsage:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(PLMonotonicTimer *)logUsageTimer;
-(void)setProcesses:(NSMutableSet *)arg1 ;
-(NSMutableSet *)processes;
@end

