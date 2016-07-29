/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMemoryEntity.h>

@class FinishDownloadAssetMemoryEntity, NSArray, StoreDownload, NSString, NSNumber;

@interface FinishDownloadMemoryEntity : SSMemoryEntity {

	FinishDownloadAssetMemoryEntity* _mediaAsset;
	NSArray* _secondaryAssets;
	StoreDownload* _storeMetadata;

}

@property (nonatomic,readonly) NSString * ITunesMetadataDestinationPath; 
@property (nonatomic,retain) StoreDownload * storeMetadata;                                //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,readonly) FinishDownloadAssetMemoryEntity * mediaAsset;               //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryAssets;                                  //@synthesize secondaryAssets=_secondaryAssets - In the implementation block
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSString * artworkTemplateName; 
@property (nonatomic,readonly) long long automaticType; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) NSString * collectionName; 
@property (getter=isDeviceBasedVPP,nonatomic,readonly) BOOL deviceBasedVPP; 
@property (nonatomic,readonly) NSString * documentTargetIdentifier; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) NSNumber * durationInMilliseconds; 
@property (nonatomic,readonly) NSString * genreName; 
@property (nonatomic,readonly) NSNumber * handlerIdentifier; 
@property (nonatomic,readonly) BOOL hasRestoreData; 
@property (nonatomic,readonly) id libraryItemIdentifier; 
@property (getter=isRentalDownload,nonatomic,readonly) BOOL rentalDownload; 
@property (getter=isRestoreDownload,nonatomic,readonly) BOOL restoreDownload; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isSampleDownload,nonatomic,readonly) BOOL sampleDownload; 
@property (nonatomic,readonly) NSNumber * storeAccountIdentifier; 
@property (nonatomic,readonly) NSString * storeAccountName; 
@property (nonatomic,readonly) NSNumber * storeCollectionIdentifier; 
@property (getter=isStoreDownload,nonatomic,readonly) BOOL storeDownload; 
@property (nonatomic,readonly) NSString * storeFrontIdentifier; 
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,readonly) NSNumber * storeSagaIdentifier; 
@property (nonatomic,readonly) NSString * storeTransactionIdentifier; 
@property (nonatomic,readonly) NSString * storeXID; 
@property (getter=isTvTemplate,nonatomic,readonly) BOOL tvTemplate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long priority; 
+(Class)databaseEntityClass;
+(id)defaultProperties;
-(long long)automaticType;
-(FinishDownloadAssetMemoryEntity *)mediaAsset;
-(NSString *)artworkTemplateName;
-(id)destinationDirectoryPathForAsset:(id)arg1 ;
-(BOOL)hasRestoreData;
-(BOOL)isRentalDownload;
-(BOOL)isSampleDownload;
-(BOOL)isStoreDownload;
-(NSString *)ITunesMetadataDestinationPath;
-(void)loadAssetsUsingSession:(id)arg1 ;
-(id)newITunesMetadataDictionary;
-(id)secondaryAssetForType:(id)arg1 ;
-(NSString *)storeAccountName;
-(NSNumber *)storeCollectionIdentifier;
-(NSNumber *)storeSagaIdentifier;
-(NSString *)storeTransactionIdentifier;
-(NSArray *)secondaryAssets;
-(void)setStoreMetadata:(StoreDownload *)arg1 ;
-(StoreDownload *)storeMetadata;
-(NSString *)documentTargetIdentifier;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isTvTemplate;
-(NSString *)downloadKind;
-(BOOL)isRestoreDownload;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(long long)priority;
-(NSString *)bundleVersion;
-(NSString *)storeXID;
-(NSNumber *)handlerIdentifier;
-(id)libraryItemIdentifier;
-(long long)restoreState;
-(NSString *)genreName;
-(NSNumber *)durationInMilliseconds;
-(NSString *)clientIdentifier;
-(NSNumber *)storeItemIdentifier;
-(NSString *)artistName;
-(NSString *)collectionName;
-(NSString *)storeFrontIdentifier;
-(NSNumber *)storeAccountIdentifier;
@end
