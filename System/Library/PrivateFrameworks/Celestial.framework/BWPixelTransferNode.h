/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_semaphore;
@class BWPixelBufferPool, NSObject;

@interface BWPixelTransferNode : BWNode {

	int _cropMode;
	int _liveCropMode;
	CGRect _inputCropRect;
	CGRect _liveInputCropRect;
	BOOL _haveLiveInputCropRect;
	BOOL _passesBuffersThroughWhenPossible;
	BOOL _livePassesBuffersThroughWhenPossible;
	int _rotationDegrees;
	int _liveRotationDegrees;
	BOOL _flipHorizontal;
	BOOL _liveFlipHorizontal;
	BOOL _flipVertical;
	BOOL _liveFlipVertical;
	BOOL _liveZeroFillBuffers;
	BOOL _lowSpeed;
	BOOL _liveLowSpeed;
	unsigned long long _outputWidth;
	unsigned long long _outputHeight;
	unsigned _outputPixelFormat;
	OpaqueVTImageRotationSessionRef _rotationSession;
	int _rotationSessionRotationDegrees;
	BOOL _rotationSessionFlipHorizontal;
	BOOL _rotationSessionFlipVertical;
	BOOL _rotationSessionZeroFillBuffers;
	BOOL _rotationSessionLowSpeed;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _intermediateBufferPool;
	SCD_Struct_BW12 _intermediatePoolDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	BOOL _makeCurrentConfigurationLiveOnNextRenderCallback;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(int)rotationDegrees;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setFlipHorizontal:(BOOL)arg1 ;
-(void)setFlipVertical:(BOOL)arg1 ;
-(void)setInputCropRect:(CGRect)arg1 ;
-(void)setCropMode:(int)arg1 ;
-(void)setLowSpeed:(BOOL)arg1 ;
-(unsigned)outputPixelFormat;
-(void)setPassesBuffersThroughWhenPossible:(BOOL)arg1 ;
-(BOOL)passesBuffersThroughWhenPossible;
-(void)setEmitSampleBufferSemaphore:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)_updateOutputRequirements;
-(BOOL)_zeroFillBuffers;
-(void)_makeCurrentConfigurationLive;
-(BOOL)_emitIfMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW12)_intermediateBufferDimensionsForInputDimensions:(SCD_Struct_BW12)arg1 outputDimensions:(SCD_Struct_BW12)arg2 ;
-(int)_ensureIntermediatePoolWithDimensions:(SCD_Struct_BW12)arg1 ;
-(void)_ensureTransferSession;
-(void)_ensureRotationSession;
-(id)_preferredPixelFormats;
-(id)_preferredPixelFormatsWithInputPixelFormatFirst;
-(int)cropMode;
-(CGRect)inputCropRect;
-(BOOL)flipHorizontal;
-(BOOL)flipVertical;
-(BOOL)lowSpeed;
-(id)emitSampleBufferSemaphore;
-(void)setOutputWidth:(unsigned long long)arg1 ;
-(void)setOutputHeight:(unsigned long long)arg1 ;
-(unsigned long long)outputWidth;
-(unsigned long long)outputHeight;
@end

