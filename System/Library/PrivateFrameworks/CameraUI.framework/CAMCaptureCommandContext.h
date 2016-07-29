/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceFormat, NSString, AVCaptureDeviceInput, AVCaptureStillImageOutput, AVCaptureIrisStillImageOutput, AVCaptureMovieFileOutput, CAMPanoramaOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, CAMCaptureEngine, CAMPanoramaConfiguration;

@interface CAMCaptureCommandContext : NSObject {

	AVCaptureSession* _currentCaptureSession;
	AVCaptureDevice* _currentVideoDevice;
	AVCaptureDeviceFormat* _currentVideoDeviceFormat;
	NSString* _currentVideoDevicePreset;
	AVCaptureDeviceInput* _currentVideoDeviceInput;
	AVCaptureDevice* _currentAudioDevice;
	AVCaptureDeviceInput* _currentAudioDeviceInput;
	AVCaptureStillImageOutput* _currentLegacyStillImageOutput;
	AVCaptureIrisStillImageOutput* _currentStillImageOutput;
	AVCaptureMovieFileOutput* _currentMovieFileOutput;
	CAMPanoramaOutput* _currentPanoramaOutput;
	AVCaptureMetadataOutput* _currentMetadataOutput;
	AVCaptureVideoDataOutput* _currentEffectsPreviewOutput;
	AVCaptureVideoPreviewLayer* _currentVideoPreviewLayer;
	CAMCaptureEngine* __captureEngine;

}

@property (nonatomic,retain) AVCaptureSession * currentCaptureSession;                                                   //@synthesize currentCaptureSession=_currentCaptureSession - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentVideoDevice;                                                       //@synthesize currentVideoDevice=_currentVideoDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * currentVideoDeviceFormat;                                           //@synthesize currentVideoDeviceFormat=_currentVideoDeviceFormat - In the implementation block
@property (nonatomic,retain) NSString * currentVideoDevicePreset;                                                        //@synthesize currentVideoDevicePreset=_currentVideoDevicePreset - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * currentVideoDeviceInput;                                             //@synthesize currentVideoDeviceInput=_currentVideoDeviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentAudioDevice;                                                       //@synthesize currentAudioDevice=_currentAudioDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * currentAudioDeviceInput;                                             //@synthesize currentAudioDeviceInput=_currentAudioDeviceInput - In the implementation block
@property (nonatomic,retain) AVCaptureStillImageOutput * currentLegacyStillImageOutput;                                  //@synthesize currentLegacyStillImageOutput=_currentLegacyStillImageOutput - In the implementation block
@property (nonatomic,retain) AVCaptureIrisStillImageOutput * currentStillImageOutput;                                    //@synthesize currentStillImageOutput=_currentStillImageOutput - In the implementation block
@property (nonatomic,retain) AVCaptureMovieFileOutput * currentMovieFileOutput;                                          //@synthesize currentMovieFileOutput=_currentMovieFileOutput - In the implementation block
@property (nonatomic,retain) CAMPanoramaOutput * currentPanoramaOutput;                                                  //@synthesize currentPanoramaOutput=_currentPanoramaOutput - In the implementation block
@property (nonatomic,retain) AVCaptureMetadataOutput * currentMetadataOutput;                                            //@synthesize currentMetadataOutput=_currentMetadataOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoDataOutput * currentEffectsPreviewOutput;                                     //@synthesize currentEffectsPreviewOutput=_currentEffectsPreviewOutput - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * currentVideoPreviewLayer;                                      //@synthesize currentVideoPreviewLayer=_currentVideoPreviewLayer - In the implementation block
@property (nonatomic,__weak,readonly) id<AVCaptureFileOutputRecordingDelegate> currentRecordingDelegate; 
@property (nonatomic,readonly) CAMPanoramaConfiguration * currentPanoramaConfiguration; 
@property (nonatomic,__weak,readonly) id<AVCaptureIrisStillImageCaptureDelegate> currentStillImageDelegate; 
@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                                 //@synthesize _captureEngine=__captureEngine - In the implementation block
-(void)clear;
-(AVCaptureDevice *)currentVideoDevice;
-(AVCaptureDeviceFormat *)currentVideoDeviceFormat;
-(AVCaptureMovieFileOutput *)currentMovieFileOutput;
-(AVCaptureIrisStillImageOutput *)currentStillImageOutput;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(id<AVCaptureIrisStillImageCaptureDelegate>)currentStillImageDelegate;
-(AVCaptureStillImageOutput *)currentLegacyStillImageOutput;
-(void)registerLegacyStillImageCaptureRequest:(id)arg1 ;
-(void)legacyStillImageRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(CAMPanoramaOutput *)currentPanoramaOutput;
-(CAMPanoramaConfiguration *)currentPanoramaConfiguration;
-(id)videoDeviceForDevice:(long long)arg1 ;
-(AVCaptureSession *)currentCaptureSession;
-(id)videoDeviceFormatForModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(long long)arg2 ;
-(id)videoDevicePresetForModeWithOptions:(CAMCaptureModeWithOptions)arg1 device:(long long)arg2 ;
-(id)videoDeviceInputForDevice:(long long)arg1 ;
-(id)audioDeviceInput;
-(AVCaptureDeviceInput *)currentVideoDeviceInput;
-(AVCaptureDeviceInput *)currentAudioDeviceInput;
-(id)outputsForMode:(long long)arg1 ;
-(id)metadataOutputForMode:(long long)arg1 ;
-(AVCaptureMetadataOutput *)currentMetadataOutput;
-(AVCaptureVideoDataOutput *)currentEffectsPreviewOutput;
-(AVCaptureDevice *)currentAudioDevice;
-(NSString *)currentVideoDevicePreset;
-(id)primaryOutputForMode:(long long)arg1 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCapture;
-(void)setCurrentCaptureSession:(AVCaptureSession *)arg1 ;
-(void)setCurrentVideoDevice:(AVCaptureDevice *)arg1 ;
-(void)setCurrentVideoDeviceFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)setCurrentVideoDevicePreset:(NSString *)arg1 ;
-(void)setCurrentVideoDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCurrentAudioDevice:(AVCaptureDevice *)arg1 ;
-(void)setCurrentAudioDeviceInput:(AVCaptureDeviceInput *)arg1 ;
-(void)setCurrentLegacyStillImageOutput:(AVCaptureStillImageOutput *)arg1 ;
-(void)setCurrentMovieFileOutput:(AVCaptureMovieFileOutput *)arg1 ;
-(void)setCurrentPanoramaOutput:(CAMPanoramaOutput *)arg1 ;
-(void)setCurrentMetadataOutput:(AVCaptureMetadataOutput *)arg1 ;
-(void)setCurrentEffectsPreviewOutput:(AVCaptureVideoDataOutput *)arg1 ;
-(void)setCurrentVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(id)initWithCaptureEngine:(id)arg1 ;
-(id<AVCaptureFileOutputRecordingDelegate>)currentRecordingDelegate;
-(void)setCurrentStillImageOutput:(AVCaptureIrisStillImageOutput *)arg1 ;
-(AVCaptureVideoPreviewLayer *)currentVideoPreviewLayer;
@end

