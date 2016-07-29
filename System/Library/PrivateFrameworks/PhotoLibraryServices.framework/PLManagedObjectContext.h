/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObjectContext.h>

@protocol PLManagedObjectContextPTPNotificationDelegate, OS_xpc_object;
@class PLMergePolicy, PLDelayedFiledSystemDeletions, NSMutableSet, NSMutableArray, NSMutableDictionary, PLPhotoLibrary, PLDelayedSaveActions, NSObject;

@interface PLManagedObjectContext : NSManagedObjectContext {

	BOOL _hasMetadataChanges;
	BOOL _isConnectedToChangeHub;
	BOOL _mergingChanges;
	BOOL _savingDuringMerge;
	BOOL _isInitializingSingletons;
	BOOL _isLoadingPhotoLibrary;
	BOOL _isBackingALAssetsLibrary;
	BOOL _isObservingChangesForPTPNotificationDelegate;
	PLMergePolicy* _mergePolicy;
	PLDelayedFiledSystemDeletions* _delayedDeletions;
	NSMutableSet* _avalancheUUIDsForUpdate;
	NSMutableArray* _uuidForCloudDeletion;
	NSMutableArray* _albumUuidForCloudDeletion;
	NSMutableDictionary* _updatedObjectsAttributes;
	NSMutableDictionary* _updatedObjectsRelationships;
	PLPhotoLibrary* _photoLibrary;
	id<PLManagedObjectContextPTPNotificationDelegate> _ptpNotificationDelegate;
	PLDelayedSaveActions* _delayedSaveActions;
	BOOL _regenerateVideoThumbnails;
	int _changeSource;
	NSObject*<OS_xpc_object> changeHubConnection;

}

@property (assign,nonatomic) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isUserInterfaceContext; 
@property (assign,nonatomic) BOOL regenerateVideoThumbnails;                                                         //@synthesize regenerateVideoThumbnails=_regenerateVideoThumbnails - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataChanges;                                                                //@synthesize hasMetadataChanges=_hasMetadataChanges - In the implementation block
@property (assign,nonatomic) int changeSource;                                                                       //@synthesize changeSource=_changeSource - In the implementation block
@property (nonatomic,readonly) BOOL mergingChanges;                                                                  //@synthesize mergingChanges=_mergingChanges - In the implementation block
@property (nonatomic,readonly) BOOL savingDuringMerge;                                                               //@synthesize savingDuringMerge=_savingDuringMerge - In the implementation block
@property (assign,nonatomic) BOOL isInitializingSingletons;                                                          //@synthesize isInitializingSingletons=_isInitializingSingletons - In the implementation block
@property (assign,nonatomic) BOOL isLoadingPhotoLibrary;                                                             //@synthesize isLoadingPhotoLibrary=_isLoadingPhotoLibrary - In the implementation block
@property (assign,nonatomic) NSObject*<OS_xpc_object> changeHubConnection; 
@property (nonatomic,retain) PLDelayedFiledSystemDeletions * delayedDeletions;                                       //@synthesize delayedDeletions=_delayedDeletions - In the implementation block
@property (assign,nonatomic) id<PLManagedObjectContextPTPNotificationDelegate> ptpNotificationDelegate;              //@synthesize ptpNotificationDelegate=_ptpNotificationDelegate - In the implementation block
@property (assign,nonatomic) BOOL isBackingALAssetsLibrary;                                                          //@synthesize isBackingALAssetsLibrary=_isBackingALAssetsLibrary - In the implementation block
@property (nonatomic,retain,readonly) PLDelayedSaveActions * delayedSaveActions; 
+(id)managedObjectModel;
+(BOOL)storeIsOldEnough;
+(BOOL)databaseIsMissing;
+(id)contextForPhotoLibrary:(id)arg1 name:(const char*)arg2 ;
+(id)sharedPersistentStoreCoordinator;
+(void)configurePersistentStoreCoordinator:(id)arg1 ;
+(void)_getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3 enableNotifications:(BOOL)arg4 ;
+(BOOL)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(void)recordVersion:(int)arg1 forStore:(id)arg2 extraMetadata:(id)arg3 ;
+(BOOL)useModelMigratorToCreateDatabase;
+(void)_getStoreURL:(id*)arg1 options:(id*)arg2 enableNotifications:(BOOL)arg3 ;
+(BOOL)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forceSourceModelVersion:(id)arg4 ;
+(BOOL)_rebuildAndRetryPersistentStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 forced:(BOOL)arg4 ;
+(id)managedObjectModelURL;
+(BOOL)canMergeRemoteChanges;
+(void)__prepareEntityPropertyLookups;
+(id)_indexesByAttributeNamesByEntityNames;
+(unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3 ;
+(id)_attributeNamesByIndexByEntityNames;
+(id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3 ;
+(id)_indexesByRelationshipNamesByEntityNames;
+(id)_relationshipNamesByIndexByEntityNames;
+(unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2 ;
+(unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2 ;
+(void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)allContextsNotIdenticalTo:(void*)arg1 ;
+(BOOL)_isAssetLibraryFetchingAlbum:(id)arg1 ;
+(BOOL)assetsLibraryLoggingEnabled;
+(id)contextForDatabaseCreation:(const char*)arg1 ;
+(void)moveOldStoreAside;
+(BOOL)hasAtLeastOneAsset;
+(BOOL)hasConfiguredPhotoLibrary;
+(void)getStoreURL:(id*)arg1 ;
+(id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 ;
+(id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 ;
+(void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)handleUnknownMergeEvent;
+(id)databasePath;
-(void)dealloc;
-(BOOL)save:(id*)arg1 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMetadataChanges;
-(void)setHasMetadataChanges:(BOOL)arg1 ;
-(BOOL)isUserInterfaceContext;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIsLoadingPhotoLibrary:(BOOL)arg1 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(BOOL)isReadOnly;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setChangeSource:(int)arg1 ;
-(BOOL)mergingChanges;
-(void)recordAlbumForCloudDeletion:(id)arg1 ;
-(PLDelayedSaveActions *)delayedSaveActions;
-(void)recordAvalancheUUIDForUpdate:(id)arg1 ;
-(void)recordAssetForCloudDeletion:(id)arg1 ;
-(void)registerFilesystemDeletionInfo:(id)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 useSharedPersistentStoreCoordinator:(BOOL)arg2 ;
-(void)connectToChangeHub;
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;
-(void)setPtpNotificationDelegate:(id<PLManagedObjectContextPTPNotificationDelegate>)arg1 ;
-(void)setDelayedDeletions:(PLDelayedFiledSystemDeletions *)arg1 ;
-(void)disconnectFromChangeHub;
-(void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1 ;
-(void)_createDelayedSaveActionsWithTransaction:(id)arg1 ;
-(void)_destroyDelayedSaveActions;
-(PLDelayedFiledSystemDeletions *)delayedDeletions;
-(BOOL)isBackingALAssetsLibrary;
-(BOOL)_tooManyAssetChangesToHandle:(unsigned long long)arg1 ;
-(id)pl_fetchObjectsWithIDs:(id)arg1 ;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(id<PLManagedObjectContextPTPNotificationDelegate>)ptpNotificationDelegate;
-(void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 ofEntityKind:(id)arg4 fromRemoteContextDidSaveNotification:(id)arg5 ;
-(void)_contextObjectsDidChange:(id)arg1 ;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(void)recordManagedObjectWillSave:(id)arg1 ;
-(void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2 ;
-(BOOL)hasPreviouslyMergedDeleteForObject:(id)arg1 ;
-(id)getAndClearRecordedAvalancheUUIDsForUpdate;
-(id)getAndClearRecordedAssetForCloudDeletion;
-(id)getAndClearRecordedAlbumForCloudDeletion;
-(id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2 ;
-(NSObject*<OS_xpc_object>)changeHubConnection;
-(void)setChangeHubConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)savingDuringMerge;
-(int)changeSource;
-(BOOL)regenerateVideoThumbnails;
-(void)setRegenerateVideoThumbnails:(BOOL)arg1 ;
-(BOOL)isInitializingSingletons;
-(void)setIsInitializingSingletons:(BOOL)arg1 ;
-(BOOL)isLoadingPhotoLibrary;
-(void)setIsBackingALAssetsLibrary:(BOOL)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(PLPhotoLibrary *)photoLibrary;
@end

