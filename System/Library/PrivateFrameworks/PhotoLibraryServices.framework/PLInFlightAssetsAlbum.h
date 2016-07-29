/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAlbumProtocol.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>
#import <libobjc.A.dylib/PLDerivedAlbumOrigin.h>

@protocol PLIndexMappingCache;
@class NSFetchRequest, NSMutableOrderedSet, NSCache, PLManagedAlbum, NSObject, NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLInFlightAssetsAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache, PLDerivedAlbumOrigin> {

	NSFetchRequest* _fetchRequest;
	NSMutableOrderedSet* _albumOIDs;
	NSMutableOrderedSet* _inflightAssets;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	NSCache* __assetCache;
	PLManagedAlbum* _backingAlbum;
	BOOL _sessionLimited;
	id _weak_assets;
	NSObject*<PLIndexMappingCache> _derivedAlbums[5];
	BOOL __notificationsEnabled;

}

@property (nonatomic,retain,readonly) PLManagedAlbum * backingAlbum;                          //@synthesize backingAlbum=_backingAlbum - In the implementation block
@property (assign,nonatomic) BOOL sessionLimited; 
@property (assign,nonatomic) NSMutableOrderedSet * _assets; 
@property (assign,nonatomic) BOOL _notificationsEnabled;                                      //@synthesize _notificationsEnabled=__notificationsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
+(NSObject*)inFlightAssetsAlbumWithBackingAlbum:(NSObject*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(NSString *)description;
-(NSString *)title;
-(BOOL)isEmpty;
-(NSString *)localizedTitle;
-(NSNumber *)kind;
-(NSString *)uuid;
-(void)addInFlightAsset:(id)arg1 ;
-(void)removeInflightAssets:(id)arg1 ;
-(id)fetchRequest;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)enumerateDerivedAlbums:(/*^block*/id)arg1 ;
-(void)registerDerivedAlbum:(NSObject*)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(PLManagedAlbum *)backingAlbum;
-(void)set_assets:(NSMutableOrderedSet *)arg1 ;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)currentStateForChange;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(id)initWithBackingAlbum:(NSObject*)arg1 ;
-(id)_albumOIDs;
-(void)_resetAlbumOIDs;
-(id)managedObjectForOID:(id)arg1 ;
-(id)managedObjectsForOIDs:(id)arg1 ;
-(id)managedObjectsAtAlbumIndexes:(id)arg1 ;
-(id)managedObjectAtAlbumIndex:(unsigned long long)arg1 ;
-(void)setSessionLimited:(BOOL)arg1 ;
-(void)_fetchAndUpdateInflightAssetsWithUUIDs:(id)arg1 ;
-(void)clearAssetCaches;
-(unsigned long long)countOfMergedAssets;
-(unsigned long long)indexInMergedAssetsOfObject:(id)arg1 ;
-(id)objectInMergedAssetsAtIndex:(unsigned long long)arg1 ;
-(void)getMergedAssets:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inMergedAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMergedAssetsAtIndex:(unsigned long long)arg1 ;
-(void)startNewSession;
-(BOOL)_notificationsEnabled;
-(void)set_notificationsEnabled:(BOOL)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)approximateCount;
-(UIImage *)posterImage;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)setUINotificationsEnabled:(BOOL)arg1 ;
-(int)kindValue;
-(NSMutableOrderedSet *)mutableAssets;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSDictionary *)slideshowSettings;
-(void)setSlideshowSettings:(NSDictionary *)arg1 ;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1 ;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1 ;
-(unsigned long long)batchSize;
-(NSOrderedSet *)assets;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(BOOL)sessionLimited;
-(NSMutableOrderedSet *)_assets;
@end

