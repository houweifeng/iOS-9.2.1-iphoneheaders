/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSURL, NSDate, UIImage, NSDictionary;

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {

	NSString* _persistenceUUID;
	NSURL* _localPersistenceURL;
	NSDate* _captureDate;
	long long _reason;
	double _videoZoomFactor;
	UIImage* _imageWellImage;
	UIImage* _previewImage;
	NSString* _stillPersistenceUUID;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                                      //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localPersistenceURL;                                     //@synthesize localPersistenceURL=_localPersistenceURL - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                                                 //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long reason;                                                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) double videoZoomFactor;                                               //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) UIImage * imageWellImage;                                             //@synthesize imageWellImage=_imageWellImage - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                               //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                                 //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                                      //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA2 irisStillDisplayTime; 
-(NSString *)description;
-(SCD_Struct_CA2)duration;
-(UIImage *)placeholderImage;
-(NSString *)uuid;
-(long long)reason;
-(NSDate *)captureDate;
-(unsigned long long)mediaType;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(NSURL *)persistenceURL;
-(UIImage *)previewImage;
-(NSDictionary *)stillImageMetadata;
-(BOOL)isExpectingPairedVideo;
-(SCD_Struct_CA2)irisStillDisplayTime;
-(NSString *)persistenceUUID;
-(SCD_Struct_CA2)stillDisplayTime;
-(UIImage *)imageWellImage;
-(double)videoZoomFactor;
-(NSURL *)localPersistenceURL;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(SCD_Struct_CA2)arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(SCD_Struct_CA2)arg7 reason:(long long)arg8 videoZoomFactor:(double)arg9 imageWellImage:(id)arg10 previewImage:(id)arg11 ;
-(NSString *)stillPersistenceUUID;
@end

