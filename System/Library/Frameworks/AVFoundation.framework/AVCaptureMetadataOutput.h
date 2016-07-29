/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureMetadataOutputInternal, NSArray;

@interface AVCaptureMetadataOutput : AVCaptureOutput {

	AVCaptureMetadataOutputInternal* _internal;

}

@property (nonatomic,readonly) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> metadataObjectsCallbackQueue; 
@property (nonatomic,readonly) NSArray * availableMetadataObjectTypes; 
@property (nonatomic,copy) NSArray * metadataObjectTypes; 
@property (assign,nonatomic) CGRect rectOfInterest; 
+(void)initialize;
+(id)_metadataConstantValueToName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)_updateRemoteQueue:(remoteQueueReceiverOpaqueRef)arg1 ;
-(void)_handleRemoteQueueOperation:(FigRemoteOperation*)arg1 ;
-(id)_metadataIdentifiers;
-(CGRect)rectOfInterest;
-(id<AVCaptureMetadataOutputObjectsDelegate>)metadataObjectsDelegate;
-(NSObject*<OS_dispatch_queue>)metadataObjectsCallbackQueue;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(NSArray *)availableMetadataObjectTypes;
-(NSArray *)metadataObjectTypes;
-(void)setMetadataObjectTypes:(NSArray *)arg1 ;
-(void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2 ;
@end

