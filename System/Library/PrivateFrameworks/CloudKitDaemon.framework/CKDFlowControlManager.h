/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKDFlowControlManager : NSObject {

	unsigned long long _defaultBudget;
	double _defaultRegeneration;
	double _maximumThrottleTime;
	NSMutableDictionary* _operationFlowControls;

}

@property (assign) double maximumThrottleTime;                                         //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * operationFlowControls;              //@synthesize operationFlowControls=_operationFlowControls - In the implementation block
@property (assign,nonatomic) unsigned long long defaultBudget; 
@property (assign,nonatomic) double defaultRegeneration; 
-(id)description;
-(id)statusReport;
-(id)CKPropertiesDescription;
-(id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3 ;
-(void)setDefaultBudget:(unsigned long long)arg1 ;
-(void)setDefaultRegeneration:(double)arg1 ;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(unsigned long long)defaultBudget;
-(double)defaultRegeneration;
-(double)maximumThrottleTime;
-(BOOL)checkFlowControlIsLimited:(id)arg1 ;
-(double)secondsUntilFlowControlNotLimited:(id)arg1 ;
-(void)updateFlowControlWithLocalErrorForOperation:(id)arg1 ;
-(void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned long long)arg2 ;
-(double)currentBudget:(id)arg1 ;
-(unsigned long long)currentBudgetCap:(id)arg1 ;
-(double)currentRegeneration:(id)arg1 ;
-(void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2 ;
-(void)setOperationFlowControls:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)operationFlowControls;
-(id)_flowControlForOperation:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_flowControlForOperation:(id)arg1 ;
@end

