/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWFigVideoDeviceStillImageCaptureDelegate.h>
#import <libobjc.A.dylib/BWBracketSettingsProvider.h>

@protocol BWBracketSettingsProvider, BWStillImageCaptureStatusDelegate, OS_dispatch_queue, OS_dispatch_group;
@class BWFigVideoCaptureDevice, BWNodeOutput, NSObject, FigCaptureStillImageSettings, BWBracketSettings, BWNodeInput, NSString;

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoDeviceStillImageCaptureDelegate, BWBracketSettingsProvider> {

	BOOL _stillImageInputActive;
	BWFigVideoCaptureDevice* _captureDevice;
	BWNodeOutput* _defaultOutput;
	BWNodeOutput* _hdrOutput;
	id<BWBracketSettingsProvider> _hdrBracketSettingsProvider;
	BWNodeOutput* _sisOutput;
	id<BWBracketSettingsProvider> _sisBracketSettingsProvider;
	id<BWBracketSettingsProvider> _clientBracketSettingsProvider;
	id<BWBracketSettingsProvider> _oisBracketSettingsProvider;
	id<BWStillImageCaptureStatusDelegate> _stillImageCaptureStatusDelegate;
	opaqueCMSimpleQueueRef _stillImageRequestQueue;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	NSObject*<OS_dispatch_group> _stillImageDispatchGroup;
	opaqueCMSimpleQueueRef _prepareBracketQueue;
	int _expectedImagesOrErrorsForRequest;
	int _receivedImagesOrErrorsForRequest;
	int _clientExpectedImagesOrErrorsForRequest;
	int _clientReceivedImagesOrErrorsForRequest;
	FigCaptureStillImageSettings* _currentRequestSettings;
	int _captureType;
	BWBracketSettings* _bracketSettings;
	BOOL _haveInvokedWillCaptureCallbackForCurrentRequest;
	BOOL _receivedQuadraHighResError;
	BWNodeInput* _stillImageInput;

}

@property (nonatomic,readonly) BWNodeInput * stillImageInput;                                                    //@synthesize stillImageInput=_stillImageInput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * defaultOutput;                                                     //@synthesize defaultOutput=_defaultOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * hdrOutput;                                                         //@synthesize hdrOutput=_hdrOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sisOutput;                                                         //@synthesize sisOutput=_sisOutput - In the implementation block
@property (nonatomic,readonly) int worstCaseInitialMaxBracketedCaptureBufferCount; 
@property (assign,nonatomic) id<BWStillImageCaptureStatusDelegate> stillImageCaptureStatusDelegate;              //@synthesize stillImageCaptureStatusDelegate=_stillImageCaptureStatusDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1 ;
-(int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW15*)arg2 stillImageSettings:(id)arg3 ;
-(id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW15*)arg2 stillImageSettings:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setStillImageCaptureStatusDelegate:(id<BWStillImageCaptureStatusDelegate>)arg1 ;
-(void)captureFinished:(id)arg1 withStatus:(int)arg2 ;
-(void)willStopGraph:(BOOL)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 hdrBracketSettingsProvider:(id)arg2 sisBracketSettingsProvider:(id)arg3 oisBracketSettingsProvider:(id)arg4 ;
-(int)worstCaseInitialMaxBracketedCaptureBufferCount;
-(BWNodeOutput *)defaultOutput;
-(BWNodeOutput *)hdrOutput;
-(BWNodeOutput *)sisOutput;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(int)prepareStillImageBracketNowWithSettings:(id)arg1 ;
-(void)_flushStillImageRequestWithError:(int)arg1 ;
-(int)_validateStillImageRequestForSettings:(id)arg1 ;
-(void)_serviceNextStillImageRequest;
-(void)_servicePrepareBracketQueue;
-(id)_outputForCaptureType:(int)arg1 ;
-(void)_completeCaptureWithStatus:(int)arg1 ;
-(void)_willCaptureStillImage;
-(void)_didCaptureStillImageWithPTS:(SCD_Struct_BW2)arg1 ;
-(void)_configureCurrentRequestForStillImageSettings;
-(void)_beginCapture;
-(void)_willBeginCapture;
-(int)_captureTypeForSettings:(id)arg1 frameStatistics:(SCD_Struct_BW15*)arg2 ;
-(id)_bracketSettingsForCaptureType:(int)arg1 frameStatistics:(SCD_Struct_BW15*)arg2 stillImageSettings:(id)arg3 ;
-(int)_expectedImagesForCaptureType:(int)arg1 frameStatistics:(SCD_Struct_BW15*)arg2 stillImageSettings:(id)arg3 bracketSettings:(id)arg4 ;
-(int)_clientExpectedImagesForCaptureType:(int)arg1 stillImageSettings:(id)arg2 ;
-(void)captureDeviceWillBeginStillImageCapture:(id)arg1 ;
-(void)captureDevice:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2 ;
-(void)captureDevice:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2 ;
-(void)captureDevice:(id)arg1 stillImageCaptureError:(int)arg2 ;
-(id<BWStillImageCaptureStatusDelegate>)stillImageCaptureStatusDelegate;
-(BWNodeInput *)stillImageInput;
@end

