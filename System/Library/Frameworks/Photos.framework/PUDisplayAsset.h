/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol PUDisplayAsset <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) unsigned long long fullsizeDataFormat; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_PH1 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PH1 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@required
-(double)duration;
-(NSDate *)modificationDate;
-(NSString *)uuid;
-(unsigned long long)mediaType;
-(BOOL)canPlayPhotoIris;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)isFavorite;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(SCD_Struct_PH1)photoIrisStillDisplayTime;
-(double)aspectRatio;
-(unsigned long long)isContentEqualTo:(id)arg1;
-(NSDate *)creationDate;
-(NSString *)localizedGeoDescription;
-(unsigned long long)fullsizeDataFormat;
-(SCD_Struct_PH1)photoIrisVideoDuration;
-(BOOL)hasPhotoColorAdjustments;

@end

