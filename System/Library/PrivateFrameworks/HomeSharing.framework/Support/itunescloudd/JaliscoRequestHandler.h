/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class JaliscoLibrary, NSObject, JaliscoMediaUpdateOperation, JaliscoArtworkImporter, NSOperationQueue, HSConnectionConfiguration, JaliscoUpdateGeniusDataOperation;

@interface JaliscoRequestHandler : NSObject {

	JaliscoLibrary* _library;
	NSObject*<OS_dispatch_queue> _updateLibraryQueue;
	NSObject*<OS_dispatch_group> _updateLibraryGroup;
	JaliscoMediaUpdateOperation* _updateLibraryOperation;
	JaliscoArtworkImporter* _artworkImporter;
	NSOperationQueue* _geniusUpdateOperationQueue;
	NSObject*<OS_dispatch_queue> _geniusUpdateQueue;
	NSObject*<OS_dispatch_group> _geniusUpdateGroup;
	HSConnectionConfiguration* _configuration;
	JaliscoUpdateGeniusDataOperation* _updateGeniusDataOperation;

}

@property (nonatomic,copy) HSConnectionConfiguration * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) JaliscoUpdateGeniusDataOperation * updateGeniusDataOperation;              //@synthesize updateGeniusDataOperation=_updateGeniusDataOperation - In the implementation block
+(id)handler;
-(void)updateLibraryWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addOperation:(id)arg1 priority:(int)arg2 ;
-(void)cancelPendingChanges;
-(void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(/*^block*/id)arg3 ;
-(BOOL)isUpdateInProgressWithIsInitialImport:(BOOL*)arg1 ;
-(void)removeLibraryWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelUpdateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_libraryWithReason:(long long)arg1 ;
-(BOOL)aggregatePlayDataProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 forceCheck:(BOOL)arg3 ;
-(void)_updateGeniusDataForInitialImport:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(JaliscoUpdateGeniusDataOperation *)updateGeniusDataOperation;
-(void)accountDidChange;
-(void)setUpdateGeniusDataOperation:(JaliscoUpdateGeniusDataOperation *)arg1 ;
-(id)init;
-(id)_init;
-(void)cancelAllOperations;
-(void)setConfiguration:(HSConnectionConfiguration *)arg1 ;
-(HSConnectionConfiguration *)configuration;
-(void)disableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 ;
-(void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)loadJaliscoGeniusCUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_library;
-(float)updateProgress;
-(void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableJaliscoGeniusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateJaliscoGeniusDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

