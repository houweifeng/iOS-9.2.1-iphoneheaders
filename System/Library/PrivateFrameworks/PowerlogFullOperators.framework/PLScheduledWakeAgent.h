/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, PLSemaphore;

@interface PLScheduledWakeAgent : PLAgent {

	PLEntryNotificationOperatorComposition* _canSleepNotification;
	PLSemaphore* _canSleepSemaphore;

}

@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;              //@synthesize canSleepNotification=_canSleepNotification - In the implementation block
@property (retain) PLSemaphore * canSleepSemaphore;                                            //@synthesize canSleepSemaphore=_canSleepSemaphore - In the implementation block
+(void)load;
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
-(void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)canSleepNotification;
-(PLSemaphore *)canSleepSemaphore;
-(void)setCanSleepSemaphore:(PLSemaphore *)arg1 ;
-(void)logEventForwardScheduledEvent;
-(id)humanReadableScheduledWakeString:(id)arg1 ;
@end
