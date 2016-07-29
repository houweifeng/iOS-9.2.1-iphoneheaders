/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@class NSNumber, HKStatisticsCollection, HDStatisticsBuilder, NSMutableArray, NSDate, NSString;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDDataObserver> {

	NSNumber* _startAnchor;
	HKStatisticsCollection* _statisticsCollection;
	HDStatisticsBuilder* _statisticsBuilder;
	NSMutableArray* _addedSamples;
	NSNumber* _addedSamplesAnchor;
	BOOL _deliveredInitialResults;
	BOOL _deliversUpdates;
	unsigned long long _mergeStrategy;
	NSDate* _anchorDate;
	unsigned long long _statisticsOptions;

}

@property (nonatomic,readonly) NSDate * anchorDate;                               //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,readonly) unsigned long long statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
-(unsigned long long)statisticsOptions;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_shouldListenForUpdates;
-(NSDate *)anchorDate;
-(void)_queue_fetchAndDeliverAllStatisticsInitial:(BOOL)arg1 ;
-(void)_scheduleUpdateStatistics;
-(void)_scheduleFetchAndDeliver;
-(void)_queue_updateStatistics;
-(void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2 ;
-(BOOL)_queue_objectIsRelevant:(id)arg1 ;
@end

