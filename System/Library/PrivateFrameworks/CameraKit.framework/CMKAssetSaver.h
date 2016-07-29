/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraKit/CameraKit-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface CMKAssetSaver : NSObject {

	NSMutableDictionary* __inflightAssets;
	NSMutableArray* __pendingImageJobs;
	NSMutableDictionary* __inProgressAvalancheFileDescriptors;
	NSMutableDictionary* __inProgressNebulaFileDescriptors;
	NSMutableArray* __transientStillImageResponses;

}

@property (nonatomic,readonly) NSMutableDictionary * _inflightAssets;                                //@synthesize _inflightAssets=__inflightAssets - In the implementation block
@property (nonatomic,retain) NSMutableArray * _pendingImageJobs;                                     //@synthesize _pendingImageJobs=__pendingImageJobs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _inProgressAvalancheFileDescriptors;              //@synthesize _inProgressAvalancheFileDescriptors=__inProgressAvalancheFileDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _inProgressNebulaFileDescriptors;                 //@synthesize _inProgressNebulaFileDescriptors=__inProgressNebulaFileDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _transientStillImageResponses;                       //@synthesize _transientStillImageResponses=__transientStillImageResponses - In the implementation block
+(id)sharedAssetSaver;
+(id)takingNebulaIndicatorFilePath;
+(void)setNebulaCaptureIsBusy:(BOOL)arg1 ;
+(void)resetNebulaCaptureIsBusy;
+(id)takingVideoIndicatorFilePath;
+(id)takingPhotoIndicatorFilePath;
+(void)setVideoCaptureIsBusy:(BOOL)arg1 ;
+(void)setTakingPhotoIsBusy:(BOOL)arg1 ;
-(id)init;
-(void)saveAllTransientResponses;
-(void)batchSavePendingAssetJobsWithCompletion:(/*^block*/id)arg1 ;
-(void)saveAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 bestAssetUUIDs:(id)arg3 stackAssetUUID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)dropAllTransientResponses;
-(void)resetAllNebulaProgress;
-(void)setNebulaInProgress:(BOOL)arg1 uuid:(id)arg2 ;
-(id)saveVideoCaptureResponse:(id)arg1 assetUUID:(id)arg2 jobTypeOverride:(id)arg3 requestEnqueuedBlock:(/*^block*/id)arg4 ;
-(id)_addInflightAssetWithPath:(id)arg1 withUUID:(id)arg2 avalancheUUID:(id)arg3 ;
-(id)_imageJobForStillImageCaptureResponse:(id)arg1 ;
-(NSMutableDictionary *)_inflightAssets;
-(void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 imageSurface:(IOSurfaceRef)arg5 previewImageSurface:(IOSurfaceRef)arg6 transient:(BOOL)arg7 ;
-(id)_addInflightAssetWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(NSMutableArray *)_pendingImageJobs;
-(id)saveStillImageCaptureResponse:(id)arg1 requestEnqueuedBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)requestAssetSavingAccess;
-(void)saveTimelapseCaptureResponse:(id)arg1 requestEnqueuedBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 isSlalom:(BOOL)arg5 videoHandler:(/*^block*/id)arg6 requestEnqueuedBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)enqueueTransientResponse:(id)arg1 requestEnqueuedBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)set_pendingImageJobs:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)_inProgressAvalancheFileDescriptors;
-(void)set_inProgressAvalancheFileDescriptors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_inProgressNebulaFileDescriptors;
-(void)set_inProgressNebulaFileDescriptors:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)_transientStillImageResponses;
-(void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2 ;
-(id)_saveIsolationQueue;
-(void)_setIsTakingPhoto:(BOOL)arg1 ;
-(id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(/*^block*/id)arg6 ;
-(void)queueJobDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)batchSavePendingAssetJobs;
-(void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(/*^block*/id)arg4 ;
@end

