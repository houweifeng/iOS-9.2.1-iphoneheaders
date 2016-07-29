/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMStillImageCaptureRequest.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPersistence.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestLocation.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPower.h>

@class NSString, NSURL, CLLocation;

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower>

@property (assign,nonatomic) long long captureOrientation; 
@property (assign,nonatomic) long long captureDevice; 
@property (assign,nonatomic) long long captureMode; 
@property (assign,nonatomic) long long physicalButtonType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long hdrMode; 
@property (assign,nonatomic) long long irisMode; 
@property (assign,nonatomic) BOOL usesStillImageStabilization; 
@property (assign,nonatomic) BOOL wantsAudioForCapture; 
@property (assign,nonatomic) BOOL wantsSquareCrop; 
@property (assign,nonatomic) BOOL wantsHighResolutionStills; 
@property (nonatomic,copy) NSString * irisIdentifier; 
@property (nonatomic,copy) NSURL * localVideoDestinationURL; 
@property (nonatomic,copy) NSString * videoPersistenceUUID; 
@property (nonatomic,copy) NSString * HDREV0IrisIdentifier; 
@property (nonatomic,copy) NSURL * HDREV0LocalVideoDestinationURL; 
@property (nonatomic,copy) NSString * HDREV0VideoPersistenceUUID; 
@property (assign,nonatomic) unsigned short sessionIdentifier; 
@property (assign,nonatomic,__weak) id<CAMStillImageCaptureRequestDelegate> delegate; 
@property (nonatomic,copy) NSString * burstIdentifier; 
@property (assign,nonatomic) unsigned long long maximumBurstLength; 
@property (assign,nonatomic) long long effectFilterType; 
@property (nonatomic,copy) NSString * HDREV0PersistenceUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,nonatomic) unsigned assertionIdentifier; 
-(void)setDelegate:(id<CAMStillImageCaptureRequestDelegate>)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setBurstIdentifier:(NSString *)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)setIrisMode:(long long)arg1 ;
-(void)setUsesStillImageStabilization:(BOOL)arg1 ;
-(void)setWantsAudioForCapture:(BOOL)arg1 ;
-(void)setPersistenceOptions:(long long)arg1 ;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1 ;
-(void)setLocalDestinationURL:(NSURL *)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1 ;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1 ;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1 ;
-(void)setAssertionIdentifier:(unsigned)arg1 ;
-(void)setCaptureOrientation:(long long)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(void)setHDREV0PersistenceUUID:(NSString *)arg1 ;
-(void)setCapturedFromPhotoBooth:(BOOL)arg1 ;
-(void)setMaximumBurstLength:(unsigned long long)arg1 ;
-(void)setEffectFilterType:(long long)arg1 ;
-(void)setParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setWantsSquareCrop:(BOOL)arg1 ;
-(void)setWantsHighResolutionStills:(BOOL)arg1 ;
-(void)setSessionIdentifier:(unsigned short)arg1 ;
-(void)setLocalVideoDestinationURL:(NSURL *)arg1 ;
-(void)setHDREV0LocalVideoDestinationURL:(NSURL *)arg1 ;
-(void)setVideoPersistenceUUID:(NSString *)arg1 ;
-(void)setIrisIdentifier:(NSString *)arg1 ;
-(void)setHDREV0IrisIdentifier:(NSString *)arg1 ;
-(void)setHDREV0VideoPersistenceUUID:(NSString *)arg1 ;
@end

