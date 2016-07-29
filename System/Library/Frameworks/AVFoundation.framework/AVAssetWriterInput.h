/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVWeakObservable.h>
#import <AVFoundation/AVKeyPathDependencyHost.h>

@class AVAssetWriterInputInternal, NSString, NSDictionary, NSArray, AVOutputSettings, AVWeakReference, AVAssetWriterInputHelper;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) BOOL readyForMoreMediaData; 
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (getter=_status,nonatomic,readonly) long long status; 
@property (getter=_isAttachedToMetadataAdaptor,nonatomic,readonly) BOOL attachedToMetadataAdaptor; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (getter=_trackID,nonatomic,readonly) int trackID; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (assign,setter=_setAttachedToPixelBufferAdaptor:,getter=_isAttachedToPixelBufferAdaptor,nonatomic) BOOL attachedToPixelBufferAdaptor; 
@property (readonly) long long numberOfAppendFailures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(long long)layer;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLayer:(long long)arg1 ;
-(CGAffineTransform)transform;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)languageCode;
-(CGSize)naturalSize;
-(NSDictionary *)outputSettings;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(float)preferredVolume;
-(BOOL)_isAttachedToMetadataAdaptor;
-(void)_attachToMetadataAdaptor:(id)arg1 ;
-(id)_trackReferences;
-(id)availableTrackAssociationTypes;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)_helper;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(id)_outputSettingsObject;
-(const opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)_trackID;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(BOOL)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(BOOL)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(SCD_Struct_CM5)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM5)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(id)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(long long)numberOfAppendFailures;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)_setHelper:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(long long)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(void)markCurrentPassAsFinished;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(BOOL)_isAttachedToPixelBufferAdaptor;
-(void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)extendedLanguageTag;
-(NSString *)mediaType;
-(long long)_status;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)markAsFinished;
-(void)finalize;
-(NSArray *)metadata;
@end

