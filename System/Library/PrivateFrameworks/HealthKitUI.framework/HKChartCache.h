/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKChartCacheDataSource;
@class NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager, NSArray, HKOutstandingFetchOperationManager;

@interface HKChartCache : NSObject {

	NSHashTable* _observers;
	NSMutableDictionary* _cachedResultsByIdentifier;
	_HKChartCachePendingFetchOperationManager* _pendingFetchOperationsManager;
	NSMutableDictionary* _resultsLoadedByIdentifier;
	NSArray* _pendingIdentifiers;
	BOOL _shouldBufferFetchOperations;
	id<HKChartCacheDataSource> _dataSource;
	HKOutstandingFetchOperationManager* _operationManager;
	long long _maxRetryCount;

}

@property (nonatomic,retain) id<HKChartCacheDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id dataSourceRespectingType; 
@property (nonatomic,retain) HKOutstandingFetchOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (assign,nonatomic) BOOL shouldBufferFetchOperations;                                   //@synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                                            //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
-(void)setDataSource:(id<HKChartCacheDataSource>)arg1 ;
-(id)init;
-(id<HKChartCacheDataSource>)dataSource;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setMaxRetryCount:(long long)arg1 ;
-(long long)maxRetryCount;
-(void)invalidateCache;
-(id)cachedResultsForIdentifier:(id)arg1 ;
-(id)dataSourceRespectingType;
-(void)fetchResultsForIdentifiers:(id)arg1 ;
-(void)_removeFetchOperationsForIdentifiers:(id)arg1 ;
-(void)_addFetchOperationsForIdentifiers:(id)arg1 ;
-(BOOL)cacheIsDirtyForIdentifier:(id)arg1 ;
-(id)_operationForIdentifier:(id)arg1 ;
-(void)_alertObserversDidUpdateResults;
-(void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4 ;
-(void)setShouldBufferFetchOperations:(BOOL)arg1 ;
-(void)invalidateResultsForIdentifiers:(id)arg1 ;
-(BOOL)shouldBufferFetchOperations;
-(void)setOperationManager:(HKOutstandingFetchOperationManager *)arg1 ;
-(HKOutstandingFetchOperationManager *)operationManager;
@end

