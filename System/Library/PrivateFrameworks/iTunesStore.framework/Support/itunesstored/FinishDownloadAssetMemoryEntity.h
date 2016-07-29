/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMemoryEntity.h>

@class NSString, NSDictionary, NSData, NSArray;

@interface FinishDownloadAssetMemoryEntity : SSMemoryEntity

@property (nonatomic,readonly) NSString * destinationFileName; 
@property (nonatomic,readonly) NSDictionary * fileAttributes; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) NSString * destinationURLString; 
@property (nonatomic,readonly) NSData * DPInfoData; 
@property (getter=isDRMFree,nonatomic,readonly) BOOL DRMFree; 
@property (getter=isExternalAsset,nonatomic,readonly) BOOL externalAsset; 
@property (nonatomic,readonly) NSString * fileProtectionType; 
@property (nonatomic,readonly) NSString * localPath; 
@property (nonatomic,readonly) long long mediaLibraryProtectionType; 
@property (nonatomic,readonly) NSString * pathExtension; 
@property (nonatomic,readonly) unsigned long long processingTypes; 
@property (nonatomic,readonly) NSData * SINFData; 
@property (nonatomic,readonly) NSString * sourceURLString; 
@property (nonatomic,readonly) NSString * variantIdentifier; 
@property (nonatomic,readonly) NSArray * SINFs; 
+(Class)databaseEntityClass;
+(id)defaultProperties;
-(NSString *)destinationFileName;
-(NSString *)sourceURLString;
-(BOOL)isExternalAsset;
-(NSString *)fileProtectionType;
-(NSData *)SINFData;
-(NSData *)DPInfoData;
-(long long)mediaLibraryProtectionType;
-(unsigned long long)processingTypes;
-(NSArray *)SINFs;
-(NSString *)assetType;
-(BOOL)isDRMFree;
-(NSString *)pathExtension;
-(NSString *)destinationURLString;
-(NSString *)variantIdentifier;
-(NSString *)localPath;
-(NSDictionary *)fileAttributes;
@end

