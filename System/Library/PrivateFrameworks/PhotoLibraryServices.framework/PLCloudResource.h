/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLAdditionalAssetAttributes, PLCloudMaster, NSDate;

@interface PLCloudResource : PLManagedObject

@property (nonatomic,retain) NSString * assetUuid; 
@property (nonatomic,retain) NSString * filePath; 
@property (assign,nonatomic) long long fileSize; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (assign,nonatomic) BOOL isFlattened; 
@property (assign,nonatomic) BOOL isLocallyAvailable; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (assign,nonatomic) int width; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
@property (nonatomic,retain) NSDate * prunedAt; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSString * itemIdentifier; 
@property (assign,nonatomic) BOOL isAlternativeRepresentationAvailable; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)resourceWithFingerprint:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(BOOL)arg4 withCreationDate:(id)arg5 ;
+(id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)allCloudResourcesInManagedObjectContext:(id)arg1 ;
+(long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1 ;
+(void)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned long long*)arg2 photoCount:(unsigned long long*)arg3 videoCount:(unsigned long long*)arg4 ;
-(id)description;
-(void)applyPropertiesFromCloudResource:(id)arg1 ;
-(void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3 ;
-(id)cplResourceWithItemIdentifier:(id)arg1 includeFile:(BOOL)arg2 ;
-(id)cplResource;
@end

