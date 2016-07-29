/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/XBApplicationSnapshotManifest.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationIdentity, BKSApplicationDataStore, NSMutableDictionary, NSFileManager, BSTimer, NSString;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSCoding, BSDescriptionProviding> {

	XBApplicationIdentity* _appIdentity;
	BKSApplicationDataStore* _dataStore;
	NSMutableDictionary* _snapshotGroupsByID;
	NSFileManager* _imageAccessFileManger;
	BSTimer* _reapingTimer;
	BOOL _invalidated;
	BOOL _needsArchiving;
	unsigned long long _clientCount;
	unsigned long long _pendingOperations;

}

@property (assign) BOOL needsArchiving;                             //@synthesize needsArchiving=_needsArchiving - In the implementation block
@property (assign) BOOL invalidated;                                //@synthesize invalidated=_invalidated - In the implementation block
@property (copy) XBApplicationIdentity * appIdentity;               //@synthesize appIdentity=_appIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acquireManifestForBundleID:(id)arg1 ;
+(id)acquireManifestForApplicationInfo:(id)arg1 ;
+(id)acquireManifestForApplicationCompatibilityInfo:(id)arg1 ;
+(void)relinquishManifest:(id)arg1 ;
+(id)_acquireManifestForApplicationIdentity:(id)arg1 createIfNeeded:(BOOL)arg2 ;
+(void)_queue_noteManifestInvalidated:(id)arg1 ;
+(id)acquireExistingManifestForBundleID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)bundleIdentifier;
-(id)_commonInit;
-(id)containerPath;
-(void)archive;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)_queue_invalidate;
-(id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)createSnapshotWithGroupID:(id)arg1 ;
-(void)deleteSnapshots:(id)arg1 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 didGenerateImage:(/*^block*/id)arg4 didSaveImage:(/*^block*/id)arg5 ;
-(void)deleteSnapshotsMatchingPredicate:(id)arg1 ;
-(XBApplicationIdentity *)appIdentity;
-(void)setAppIdentity:(XBApplicationIdentity *)arg1 ;
-(BOOL)_validateWithAppIdentity:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2 ;
-(id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2 ;
-(void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 ;
-(void)deleteAllSnapshots;
-(void)deleteSnapshot:(id)arg1 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(/*^block*/id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(/*^block*/id)arg2 ;
-(void)beginSnapshotAccessTransaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithApplicationIdentity:(id)arg1 ;
-(void)_queue_incrementClientCount;
-(void)_queue_decrementClientCount;
-(id)_queue_snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2 ;
-(id)_createSnapshotWithGroupID:(id)arg1 newSnapshotCreator:(/*^block*/id)arg2 ;
-(void)setNeedsArchiving:(BOOL)arg1 ;
-(BOOL)_imageAccessQueue_saveData:(id)arg1 withContentType:(long long)arg2 toPath:(id)arg3 ;
-(void)_queue_accessSnapshotsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_deleteSnapshots:(id)arg1 ;
-(id)_queue_snapshotsMatchingPredicate:(id)arg1 ;
-(id)_queue_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(void)_queue_deletePaths:(id)arg1 ;
-(id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2 ;
-(void)_queue_reapExpiredAndInvalidSnapshots;
-(void)_archiveSoon;
-(void)_queue_archiveIfNeeded;
-(void)_queue_checkClientCount;
-(void)_queue_gatherPaths:(id)arg1 forSnapshot:(id)arg2 ;
-(void)_queue_reallyCheckClientCount;
-(id)allSnapshots;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)needsArchiving;
@end

