/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent {

	PLCFNotificationOperatorComposition* _intervalChangedNotification;
	PLCFNotificationOperatorComposition* _preferencesChangedNotification;

}

@property (readonly) PLCFNotificationOperatorComposition * intervalChangedNotification;                 //@synthesize intervalChangedNotification=_intervalChangedNotification - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * preferencesChangedNotification;              //@synthesize preferencesChangedNotification=_preferencesChangedNotification - In the implementation block
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
-(long long)pollingInterval;
-(void)initOperatorDependancies;
-(void)logEventForwardConfig;
-(void)logEventPointCache;
-(BOOL)pushEnabled;
-(PLCFNotificationOperatorComposition *)intervalChangedNotification;
-(PLCFNotificationOperatorComposition *)preferencesChangedNotification;
@end

