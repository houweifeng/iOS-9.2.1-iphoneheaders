/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol CRCameraReaderDelegate, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSArray, UIColor, NSString, CRCaptureSessionManager, CRBoxLayer, DiagnosticHUDLayer, NSDate, NSPointerArray, NSTimer, NSObject, NSMutableDictionary, CRAlignmentLayer, UIActivityIndicatorView, UITapGestureRecognizer, NSMutableArray;

@interface CRCameraReader : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {

	BOOL _hidePlacementText;
	BOOL _continousMode;
	BOOL _captureMode;
	BOOL _showDiagnosticHUD;
	BOOL _configPresentCentered;
	BOOL _codeInverted;
	BOOL _didSendEndOrCancel;
	BOOL _didSendFindBox;
	BOOL _configUseJPEGForColor;
	BOOL _configExperimentalMode;
	BOOL _configUseFastScanning;
	BOOL _previousIdleState;
	BOOL _foundNumberFreeform;
	BOOL _foundNumberTextDetector;
	BOOL _foundNumberEmbossed;
	BOOL _foundNumberPortrait;
	BOOL _foundNumberFlatISO;
	BOOL _foundNumberFixedLandscape;
	BOOL _foundNumberFixedPortrait;
	id<CRCameraReaderDelegate> _callbackDelegate;
	NSArray* _outputObjectTypes;
	UIColor* _maskColor;
	UIColor* _maskOutlineColor;
	UIColor* _placementTextColor;
	UIColor* _capturedTextColor;
	unsigned long long _captureCount;
	double _sessionTimeout;
	long long _whiteBalanceMode;
	long long _focusMode;
	long long _exposureMode;
	long long _torchMode;
	NSString* _cameraMode;
	long long _cameraPosition;
	double _configDemoSpeed;
	CRCaptureSessionManager* _sessionManager;
	CRBoxLayer* _boxLayer;
	DiagnosticHUDLayer* _diagnosticHUDLayer;
	NSArray* _foundPoints;
	NSString* _foundCode;
	NSDate* _sessionStarted;
	NSDate* _pointsFound;
	NSDate* _codePresented;
	NSDate* _lastSendFindBox;
	unsigned long long _imagesToCapture;
	NSPointerArray* _captureBuffer;
	NSTimer* _boxLayerHideTimer;
	opaqueCMSampleBufferRef _lastBuffer;
	NSObject*<OS_dispatch_semaphore> _processingImage;
	NSMutableDictionary* _cardNumberCounts;
	NSMutableDictionary* _cardholderCounts;
	NSMutableDictionary* _expirationDateCounts;
	NSMutableDictionary* _pinnedFoundInfo;
	NSDate* _lastFieldFoundDate;
	CRAlignmentLayer* _alignmentLayer;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	UIActivityIndicatorView* _activityIndicator;
	UITapGestureRecognizer* _tapGestureRecognizer;
	OpaqueVTPixelTransferSessionRef _previewScaleSession;
	NSMutableArray* _dateCutRects;
	NSMutableArray* _nameCutRects;
	NSDate* _lastFoundNumberDate;

}

@property (__weak) id<CRCameraReaderDelegate> callbackDelegate;                      //@synthesize callbackDelegate=_callbackDelegate - In the implementation block
@property (copy) NSArray * outputObjectTypes;                                        //@synthesize outputObjectTypes=_outputObjectTypes - In the implementation block
@property (assign) BOOL hidePlacementText;                                           //@synthesize hidePlacementText=_hidePlacementText - In the implementation block
@property (readonly) long long currentCameraIdentifier; 
@property (nonatomic,copy) UIColor * maskColor;                                      //@synthesize maskColor=_maskColor - In the implementation block
@property (nonatomic,copy) UIColor * maskOutlineColor;                               //@synthesize maskOutlineColor=_maskOutlineColor - In the implementation block
@property (nonatomic,copy) UIColor * placementTextColor;                             //@synthesize placementTextColor=_placementTextColor - In the implementation block
@property (nonatomic,copy) UIColor * capturedTextColor;                              //@synthesize capturedTextColor=_capturedTextColor - In the implementation block
@property (assign) BOOL continousMode;                                               //@synthesize continousMode=_continousMode - In the implementation block
@property (getter=isCaptureMode) BOOL captureMode;                                   //@synthesize captureMode=_captureMode - In the implementation block
@property (assign) unsigned long long captureCount;                                  //@synthesize captureCount=_captureCount - In the implementation block
@property (assign) double sessionTimeout;                                            //@synthesize sessionTimeout=_sessionTimeout - In the implementation block
@property (assign) long long whiteBalanceMode;                                       //@synthesize whiteBalanceMode=_whiteBalanceMode - In the implementation block
@property (assign) long long focusMode;                                              //@synthesize focusMode=_focusMode - In the implementation block
@property (assign) long long exposureMode;                                           //@synthesize exposureMode=_exposureMode - In the implementation block
@property (assign) long long torchMode;                                              //@synthesize torchMode=_torchMode - In the implementation block
@property (copy) NSString * cameraMode;                                              //@synthesize cameraMode=_cameraMode - In the implementation block
@property (assign) long long cameraPosition;                                         //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (assign) BOOL showDiagnosticHUD;                                           //@synthesize showDiagnosticHUD=_showDiagnosticHUD - In the implementation block
@property (assign) BOOL configPresentCentered;                                       //@synthesize configPresentCentered=_configPresentCentered - In the implementation block
@property (assign) double configDemoSpeed;                                           //@synthesize configDemoSpeed=_configDemoSpeed - In the implementation block
@property (retain) CRCaptureSessionManager * sessionManager;                         //@synthesize sessionManager=_sessionManager - In the implementation block
@property (retain) CRBoxLayer * boxLayer;                                            //@synthesize boxLayer=_boxLayer - In the implementation block
@property (retain) DiagnosticHUDLayer * diagnosticHUDLayer;                          //@synthesize diagnosticHUDLayer=_diagnosticHUDLayer - In the implementation block
@property (retain) NSArray * foundPoints;                                            //@synthesize foundPoints=_foundPoints - In the implementation block
@property (retain) NSString * foundCode;                                             //@synthesize foundCode=_foundCode - In the implementation block
@property (retain) NSDate * sessionStarted;                                          //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (retain) NSDate * pointsFound;                                             //@synthesize pointsFound=_pointsFound - In the implementation block
@property (retain) NSDate * codePresented;                                           //@synthesize codePresented=_codePresented - In the implementation block
@property (assign) BOOL codeInverted;                                                //@synthesize codeInverted=_codeInverted - In the implementation block
@property (assign) BOOL didSendEndOrCancel;                                          //@synthesize didSendEndOrCancel=_didSendEndOrCancel - In the implementation block
@property (assign) BOOL didSendFindBox;                                              //@synthesize didSendFindBox=_didSendFindBox - In the implementation block
@property (retain) NSDate * lastSendFindBox;                                         //@synthesize lastSendFindBox=_lastSendFindBox - In the implementation block
@property (assign) unsigned long long imagesToCapture;                               //@synthesize imagesToCapture=_imagesToCapture - In the implementation block
@property (assign) BOOL configUseJPEGForColor;                                       //@synthesize configUseJPEGForColor=_configUseJPEGForColor - In the implementation block
@property (retain) NSPointerArray * captureBuffer;                                   //@synthesize captureBuffer=_captureBuffer - In the implementation block
@property (retain) NSTimer * boxLayerHideTimer;                                      //@synthesize boxLayerHideTimer=_boxLayerHideTimer - In the implementation block
@property (assign) BOOL configExperimentalMode;                                      //@synthesize configExperimentalMode=_configExperimentalMode - In the implementation block
@property (assign) BOOL configUseFastScanning;                                       //@synthesize configUseFastScanning=_configUseFastScanning - In the implementation block
@property (assign) opaqueCMSampleBufferRef lastBuffer;                               //@synthesize lastBuffer=_lastBuffer - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> processingImage;                 //@synthesize processingImage=_processingImage - In the implementation block
@property (retain) NSMutableDictionary * cardNumberCounts;                           //@synthesize cardNumberCounts=_cardNumberCounts - In the implementation block
@property (retain) NSMutableDictionary * cardholderCounts;                           //@synthesize cardholderCounts=_cardholderCounts - In the implementation block
@property (retain) NSMutableDictionary * expirationDateCounts;                       //@synthesize expirationDateCounts=_expirationDateCounts - In the implementation block
@property (retain) NSMutableDictionary * pinnedFoundInfo;                            //@synthesize pinnedFoundInfo=_pinnedFoundInfo - In the implementation block
@property (retain) NSDate * lastFieldFoundDate;                                      //@synthesize lastFieldFoundDate=_lastFieldFoundDate - In the implementation block
@property (retain) CRAlignmentLayer * alignmentLayer;                                //@synthesize alignmentLayer=_alignmentLayer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                     //@synthesize processingQueue=_processingQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;                       //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) UIActivityIndicatorView * activityIndicator;                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (retain) UITapGestureRecognizer * tapGestureRecognizer;                    //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign) OpaqueVTPixelTransferSessionRef previewScaleSession;              //@synthesize previewScaleSession=_previewScaleSession - In the implementation block
@property (assign) BOOL previousIdleState;                                           //@synthesize previousIdleState=_previousIdleState - In the implementation block
@property (retain) NSMutableArray * dateCutRects;                                    //@synthesize dateCutRects=_dateCutRects - In the implementation block
@property (retain) NSMutableArray * nameCutRects;                                    //@synthesize nameCutRects=_nameCutRects - In the implementation block
@property (assign) BOOL foundNumberFreeform;                                         //@synthesize foundNumberFreeform=_foundNumberFreeform - In the implementation block
@property (assign) BOOL foundNumberTextDetector;                                     //@synthesize foundNumberTextDetector=_foundNumberTextDetector - In the implementation block
@property (assign) BOOL foundNumberEmbossed;                                         //@synthesize foundNumberEmbossed=_foundNumberEmbossed - In the implementation block
@property (assign) BOOL foundNumberPortrait;                                         //@synthesize foundNumberPortrait=_foundNumberPortrait - In the implementation block
@property (assign) BOOL foundNumberFlatISO;                                          //@synthesize foundNumberFlatISO=_foundNumberFlatISO - In the implementation block
@property (assign) BOOL foundNumberFixedLandscape;                                   //@synthesize foundNumberFixedLandscape=_foundNumberFixedLandscape - In the implementation block
@property (assign) BOOL foundNumberFixedPortrait;                                    //@synthesize foundNumberFixedPortrait=_foundNumberFixedPortrait - In the implementation block
@property (retain) NSDate * lastFoundNumberDate;                                     //@synthesize lastFoundNumberDate=_lastFoundNumberDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadFonts;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 outputObjectTypes:(id)arg3 ;
+(id)extractCardImage:(vImage_Buffer*)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 withPoints:(id)arg4 pixelFocalLength:(id)arg5 ;
+(id)extractCardImage:(vImage_Buffer*)arg1 fromPixelBuffer:(CVBufferRef)arg2 withCardBuffer:(CVBufferRef)arg3 pixelFocalLength:(id)arg4 ;
+(id)findObjects:(id)arg1 inCorrectedImage:(vImage_Buffer*)arg2 ;
+(id)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 withFixedCut:(CGRect)arg3 ;
+(id)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 withFixedCut:(CGRect)arg3 nameRects:(id)arg4 dateRects:(id)arg5 useFlatEngine:(BOOL)arg6 ;
+(long long)targetRectsForImage:(CVBufferRef)arg1 cardNumberRects:(id*)arg2 cardholderRects:(id*)arg3 expirationRects:(id*)arg4 ;
+(id)findCCObjects:(id)arg1 inImage:(vImage_Buffer*)arg2 numberRects:(id)arg3 nameRects:(id)arg4 dateRects:(id)arg5 isDetectedRect:(BOOL)arg6 useFlatEngine:(BOOL)arg7 ;
+(id)findObjects:(id)arg1 inCorrectedImage:(vImage_Buffer*)arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(BOOL)arg5 ;
+(id)findCCObjects:(id)arg1 InImage:(vImage_Buffer*)arg2 nameRects:(id)arg3 dateRects:(id)arg4 useFlatEngine:(BOOL)arg5 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 roi:(CGRect)arg3 outputObjectTypes:(id)arg4 ;
+(id)findCCNameInImage:(vImage_Buffer*)arg1 usingTextFeatures:(id)arg2 invert:(BOOL)arg3 ;
+(id)findCCExpDateInImage:(vImage_Buffer*)arg1 usingTextFeatures:(id)arg2 invert:(BOOL)arg3 ;
+(id)findCCNameInImage:(vImage_Buffer*)arg1 useCombinedEngine:(BOOL)arg2 ;
+(id)findCCExpDateInImage:(vImage_Buffer*)arg1 useCombinedEngine:(BOOL)arg2 ;
+(id)findCCNumberInImage:(vImage_Buffer*)arg1 usingTextFeatures:(id)arg2 invert:(BOOL)arg3 ;
+(id)findCCNumberInImage:(vImage_Buffer*)arg1 useCombinedEngine:(BOOL)arg2 ;
+(id)findCCObject:(id)arg1 inImage:(vImage_Buffer*)arg2 forRect:(id)arg3 rotateRectImage:(BOOL)arg4 useFlatEngine:(BOOL)arg5 numberRecognizedInverted:(BOOL)arg6 ;
+(id)findCCNumberInImage:(vImage_Buffer*)arg1 useCombinedEngine:(BOOL)arg2 usingTextFeatures:(id)arg3 invert:(BOOL)arg4 ;
+(id)findCCNameInImage:(vImage_Buffer*)arg1 useCombinedEngine:(BOOL)arg2 usingTextFeatures:(id)arg3 invert:(BOOL)arg4 ;
+(id)findCCExpDateInImage:(vImage_Buffer*)arg1 useCombinedEngine:(BOOL)arg2 usingTextFeatures:(id)arg3 invert:(BOOL)arg4 ;
+(id)findObjects:(id)arg1 inImage:(id)arg2 properties:(id)arg3 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 ;
+(id)findCodeInImage:(vImage_Buffer*)arg1 maxStage:(unsigned long long)arg2 roi:(CGRect)arg3 ;
+(unsigned long long)supportedCameraCount;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)start;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(long long)whiteBalanceMode;
-(void)setCameraMode:(NSString *)arg1 ;
-(NSString *)cameraMode;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setConfigPresentCentered:(BOOL)arg1 ;
-(void)setConfigDemoSpeed:(double)arg1 ;
-(void)setConfigExperimentalMode:(BOOL)arg1 ;
-(void)setConfigUseFastScanning:(BOOL)arg1 ;
-(void)setConfigUseJPEGForColor:(BOOL)arg1 ;
-(void)setShowDiagnosticHUD:(BOOL)arg1 ;
-(void)setCaptureCount:(unsigned long long)arg1 ;
-(void)setCaptureBuffer:(NSPointerArray *)arg1 ;
-(void)setPreviewScaleSession:(OpaqueVTPixelTransferSessionRef)arg1 ;
-(void)setProcessingImage:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setLastBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CRAlignmentLayer *)alignmentLayer;
-(void)setSessionManager:(CRCaptureSessionManager *)arg1 ;
-(NSArray *)outputObjectTypes;
-(void)setAlignmentLayer:(CRAlignmentLayer *)arg1 ;
-(BOOL)showDiagnosticHUD;
-(void)setDiagnosticHUDLayer:(DiagnosticHUDLayer *)arg1 ;
-(DiagnosticHUDLayer *)diagnosticHUDLayer;
-(void)orientationDidChange:(id)arg1 ;
-(void)hideBoxLayer;
-(void)setBoxLayerHideTimer:(NSTimer *)arg1 ;
-(BOOL)isCaptureMode;
-(void)handleTapFrom:(id)arg1 ;
-(NSTimer *)boxLayerHideTimer;
-(opaqueCMSampleBufferRef)lastBuffer;
-(void)removeLayerTree;
-(void)switchToCameraWithDeviceID:(id)arg1 ;
-(id)currentDeviceID;
-(void)switchToCamera:(long long)arg1 ;
-(void)captureImage;
-(unsigned long long)captureCount;
-(unsigned long long)imagesToCapture;
-(void)setImagesToCapture:(unsigned long long)arg1 ;
-(void)sendDidCancel;
-(void)setFoundCode:(NSString *)arg1 ;
-(void)setSessionStarted:(NSDate *)arg1 ;
-(void)setPointsFound:(NSDate *)arg1 ;
-(void)setCodePresented:(NSDate *)arg1 ;
-(void)setCodeInverted:(BOOL)arg1 ;
-(void)setDidSendEndOrCancel:(BOOL)arg1 ;
-(void)setDidSendFindBox:(BOOL)arg1 ;
-(void)setLastSendFindBox:(NSDate *)arg1 ;
-(CRBoxLayer *)boxLayer;
-(void)setCardNumberCounts:(NSMutableDictionary *)arg1 ;
-(void)setCardholderCounts:(NSMutableDictionary *)arg1 ;
-(void)setExpirationDateCounts:(NSMutableDictionary *)arg1 ;
-(void)setPinnedFoundInfo:(NSMutableDictionary *)arg1 ;
-(void)setLastFieldFoundDate:(NSDate *)arg1 ;
-(void)setNameCutRects:(NSMutableArray *)arg1 ;
-(void)setDateCutRects:(NSMutableArray *)arg1 ;
-(void)setFoundNumberFreeform:(BOOL)arg1 ;
-(void)setFoundNumberEmbossed:(BOOL)arg1 ;
-(void)setFoundNumberTextDetector:(BOOL)arg1 ;
-(void)setFoundNumberPortrait:(BOOL)arg1 ;
-(void)setFoundNumberFlatISO:(BOOL)arg1 ;
-(void)setFoundNumberFixedLandscape:(BOOL)arg1 ;
-(void)setFoundNumberFixedPortrait:(BOOL)arg1 ;
-(void)setLastFoundNumberDate:(NSDate *)arg1 ;
-(BOOL)hidePlacementText;
-(void)setBoxLayer:(CRBoxLayer *)arg1 ;
-(void)setPreviousIdleState:(BOOL)arg1 ;
-(BOOL)previousIdleState;
-(void)captureImageFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDate *)sessionStarted;
-(void)sendDidEndWithErrorDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)processingImage;
-(void)findCodeInSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)findObjects:(id)arg1 inPixelBuffer:(CVBufferRef)arg2 attachments:(id)arg3 ;
-(NSPointerArray *)captureBuffer;
-(id)generateStringFromDate:(id)arg1 ;
-(BOOL)configUseJPEGForColor;
-(void)flashScreenAndPlayCaptureSound;
-(NSString *)foundCode;
-(NSArray *)foundPoints;
-(void)setFoundPoints:(NSArray *)arg1 ;
-(NSDate *)pointsFound;
-(void)primeBoxLayerHideTimer;
-(BOOL)configPresentCentered;
-(BOOL)codeInverted;
-(void)sendDidEndWithInfo:(id)arg1 ;
-(void)pauseBoxLayerHideTimer;
-(void)animatePresentCode;
-(NSMutableDictionary *)pinnedFoundInfo;
-(void)updatePinnedInfoFrameIndex;
-(NSMutableArray *)nameCutRects;
-(NSMutableArray *)dateCutRects;
-(NSMutableDictionary *)cardNumberCounts;
-(BOOL)foundNumberFreeform;
-(NSDate *)lastFoundNumberDate;
-(BOOL)foundNumberEmbossed;
-(BOOL)foundNumberTextDetector;
-(BOOL)foundNumberFlatISO;
-(BOOL)foundNumberFixedLandscape;
-(BOOL)foundNumberFixedPortrait;
-(BOOL)foundNumberPortrait;
-(void)sendDidFindTarget:(id)arg1 ;
-(NSMutableDictionary *)cardholderCounts;
-(void)setFirstTimeFrameIndexForPinnedField:(id)arg1 ;
-(NSMutableDictionary *)expirationDateCounts;
-(NSDate *)lastFieldFoundDate;
-(void)sendDidRecognizeNewObjects:(id)arg1 ;
-(unsigned long long)getFirstTimeFrameIndexForPinnedField:(id)arg1 ;
-(void)sendDidEndAnimation;
-(double)configDemoSpeed;
-(CGRect)boxLayerPresentationFrame;
-(NSDate *)codePresented;
-(void)sendDidDisplayMessageStyle:(long long)arg1 ;
-(BOOL)didSendEndOrCancel;
-(BOOL)didSendFindBox;
-(NSDate *)lastSendFindBox;
-(void)sendDidEndWithError:(id)arg1 ;
-(void)aetPlacementTextColor:(id)arg1 ;
-(long long)currentCameraIdentifier;
-(void)reportAcceptedString:(id)arg1 forOutput:(id)arg2 withClientID:(id)arg3 ;
-(UIColor *)maskColor;
-(UIColor *)maskOutlineColor;
-(UIColor *)placementTextColor;
-(UIColor *)capturedTextColor;
-(BOOL)continousMode;
-(void)setContinousMode:(BOOL)arg1 ;
-(BOOL)configExperimentalMode;
-(BOOL)configUseFastScanning;
-(OpaqueVTPixelTransferSessionRef)previewScaleSession;
-(void)toggleCamera;
-(void)startSession;
-(void)showMessage:(id)arg1 color:(id)arg2 style:(long long)arg3 duration:(double)arg4 ;
-(CRCaptureSessionManager *)sessionManager;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)stopSession;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
-(void)setFocusMode:(long long)arg1 ;
-(void)setSessionTimeout:(double)arg1 ;
-(double)sessionTimeout;
-(long long)cameraPosition;
-(void)setCameraPosition:(long long)arg1 ;
-(void)setMaskColor:(UIColor *)arg1 ;
-(void)setMaskOutlineColor:(UIColor *)arg1 ;
-(void)setPlacementTextColor:(UIColor *)arg1 ;
-(void)setCapturedTextColor:(UIColor *)arg1 ;
-(void)setOutputObjectTypes:(NSArray *)arg1 ;
-(void)setHidePlacementText:(BOOL)arg1 ;
-(void)setCaptureMode:(BOOL)arg1 ;
-(long long)exposureMode;
-(long long)torchMode;
-(long long)focusMode;
-(void)setExposureMode:(long long)arg1 ;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackDelegate:(id<CRCameraReaderDelegate>)arg1 ;
-(id<CRCameraReaderDelegate>)callbackDelegate;
@end

