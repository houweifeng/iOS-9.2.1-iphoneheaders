/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_queue, PKCaptureDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, NSObject, AVCaptureVideoPreviewLayer, NSString;

@interface PKCaptureSession : NSObject <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	AVCaptureVideoPreviewLayer* _previewLayer;
	id<PKCaptureDelegate> _delegate;

}

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;              //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) BOOL isRunning; 
@property (assign,nonatomic) id<PKCaptureDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKCaptureDelegate>)arg1 ;
-(void)dealloc;
-(id<PKCaptureDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(void)startRunning;
-(void)stopRunning;
-(void)_changeCameraConfiguration;
-(void)setupCameraSession;
-(void)autoFocusAtPoint:(CGPoint)arg1 ;
-(void)autoExposeAtPoint:(CGPoint)arg1 ;
-(AVCaptureVideoPreviewLayer *)previewLayer;
@end

