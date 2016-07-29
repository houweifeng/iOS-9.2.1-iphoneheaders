/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, HMThreadSafeMutableArrayCollection, NSArray;

@interface HMEventTrigger : HMTrigger <NSSecureCoding> {

	NSPredicate* _predicate;
	HMThreadSafeMutableArrayCollection* _currentEvents;

}

@property (nonatomic,copy,readonly) NSArray * events; 
@property (nonatomic,copy) NSPredicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentEvents;              //@synthesize currentEvents=_currentEvents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)_validatePredicate:(id)arg1 ;
+(id)_rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(BOOL*)arg2 ;
+(id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3 ;
+(id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3 ;
+(id)_rewritePredicateForClient:(id)arg1 home:(id)arg2 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2 ;
+(id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2 ;
+(id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1 ;
+(id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)events;
-(void)_updateRegion:(id)arg1 forLocationEvent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_retrieveLocationEvent:(id)arg1 ;
-(id)_serializeForAdd;
-(void)_updateTriggerValue:(id)arg1 forCharacteristicEvent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_registerNotificationHandlers;
-(void)_configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5 ;
-(HMThreadSafeMutableArrayCollection *)currentEvents;
-(void)_addEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serializeEvent:(id)arg1 ;
-(void)_removeEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updatePredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_rewritePredicateForMerge:(id)arg1 existingHome:(id)arg2 characteristicIsInvalid:(BOOL*)arg3 ;
-(id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3 ;
-(void)_handleEventTriggerConditionNotification:(id)arg1 ;
-(void)handleEventAddedNotification:(id)arg1 ;
-(void)handleEventsRemovedNotification:(id)arg1 ;
-(void)handleEventUpdatedNotification:(id)arg1 ;
-(id)_rewritePredicateForClient:(id)arg1 ;
-(BOOL)_updateCharacterisiticReferenceInNewEvent:(id)arg1 ;
-(void)addEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updatePredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isPredicateValid;
-(void)setCurrentEvents:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

