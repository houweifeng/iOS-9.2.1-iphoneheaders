/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/NMMapsAppXPCInterface.h>
#import <MapsDataClassMigrator/MapsSyncedClient.h>

@protocol OS_dispatch_queue, HistoryDelegate;
@class NSString, NSArray, MapsSyncManager, NSObject, NSUserActivity, NSXPCConnection, NSMutableArray;

@interface History : NSObject <NMMapsAppXPCInterface, MapsSyncedClient> {

	MapsSyncManager* _syncManager;
	NSObject*<OS_dispatch_queue> _saveQ;
	id<HistoryDelegate> _delegate;
	NSUserActivity* _recentUserActivity;
	NSXPCConnection* _connection;
	NSMutableArray* _history;
	NSMutableArray* _syncedHistory;
	NSMutableArray* _failedSearches;
	NSMutableArray* _failedDirectionsRequests;
	BOOL _addressBookCallbackWasRegistered;
	BOOL _shouldSendHistoryDidChangeNotifications;

}

@property (nonatomic,readonly) NSArray * orderedHistory; 
@property (nonatomic,readonly) unsigned long long orderedHistoryCount; 
@property (nonatomic,readonly) NSArray * allHistory; 
@property (assign,nonatomic,__weak) id<HistoryDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSendHistoryDidChangeNotifications;              //@synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
+(void)beginPrecachingHistoryIfNeeded;
+(id)beginHoldingUIInterferingTasks;
+(id)sharedHistoryCreatingIfMissing:(BOOL)arg1 ;
+(id)sharedHistory;
-(void)updateDroppedPin:(id)arg1 ;
-(unsigned long long)orderedHistoryCount;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(BOOL)syncShouldUseCustomStore;
-(void)updateHistoryItem:(id)arg1 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)_saveHistory;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(void)updateAddressForSearchResult:(id)arg1 ;
-(NSArray *)allHistory;
-(NSArray *)syncedItems;
-(BOOL)syncSupportsKVO;
-(void)addHistoryItem:(id)arg1 ;
-(void)_madeChanges;
-(BOOL)syncShouldUseItemPositions;
-(void)_createCompanionConnection;
-(void)_startSyncIfPossible;
-(void)_registerAddressBookIfPossible;
-(void)_startSyncIfNotYetStarted;
-(void)addStateToHistory;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_saveFailedSearches;
-(void)updateHistoryItemTimestamp:(id)arg1 ;
-(void)addSearchRequestHistoryItem:(id)arg1 isFailure:(BOOL)arg2 ;
-(void)_updateHistory;
-(void)setShouldSendHistoryDidChangeNotifications:(BOOL)arg1 ;
-(void)_saveFailuresWithTaskName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_holdingUIInterferingTasksIsUseful;
-(void)_registerAddressBookIfUnregistered;
-(void)_addHistoryItem:(id)arg1 isDirectionsFailure:(BOOL)arg2 isSearchFailure:(BOOL)arg3 ;
-(BOOL)shouldSendHistoryDidChangeNotifications;
-(BOOL)_containsFailedDirectionsHistoryItem:(id)arg1 ;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(NSString *)syncIdentifier;
-(NSArray *)orderedHistory;
-(void)updatePlaceDisplayHistoryItem:(id)arg1 byReplacingWithItem:(id)arg2 ;
-(void)updateDirectionsStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addDirectionsHistoryItem:(id)arg1 isFailure:(BOOL)arg2 ;
-(void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2 ;
-(void)stopDirections;
-(void)_saveFailedDirectionsRequests;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(void)holdingStateDidChange;
-(BOOL)syncInvertedOrdering;
-(void)_dedupeAndSortHistory;
-(BOOL)_isValidHistoryItem:(id)arg1 ;
-(void)_removeInvalidItems;
-(void)startDirectionsToPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<HistoryDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HistoryDelegate>)delegate;
-(void)removeAllItems;
@end
