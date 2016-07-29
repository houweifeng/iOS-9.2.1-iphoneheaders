/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/AVOfflineVideoStabilizerDataProvider.h>
#import <libobjc.A.dylib/CMKTimelapseMovieWriterProtocol.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, AVOfflineVideoStabilizer, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSString;

@interface CMKTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CMKTimelapseMovieWriterProtocol> {

	NSArray* __frameFilePaths;
	NSArray* __visMetadataFilePaths;
	NSObject*<OS_dispatch_queue> __movieWritingQueue;
	AVOfflineVideoStabilizer* __stabilizer;
	AVAssetWriter* __writer;
	AVAssetWriterInput* __videoInput;
	AVAssetWriterInputPixelBufferAdaptor* __pixelBufferAdaptor;
	long long __framesPerSecond;
	long long __sourceFramesReadCount;
	long long __framesWrittenCount;
	CVBufferRef __firstSourceFrame;
	opaqueCMFormatDescriptionRef __videoFormatDescription;
	/*^block*/id __completion;

}

@property (nonatomic,readonly) NSArray * _frameFilePaths;                                               //@synthesize _frameFilePaths=__frameFilePaths - In the implementation block
@property (nonatomic,readonly) NSArray * _visMetadataFilePaths;                                         //@synthesize _visMetadataFilePaths=__visMetadataFilePaths - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _movieWritingQueue;                         //@synthesize _movieWritingQueue=__movieWritingQueue - In the implementation block
@property (nonatomic,readonly) AVOfflineVideoStabilizer * _stabilizer;                                  //@synthesize _stabilizer=__stabilizer - In the implementation block
@property (nonatomic,readonly) AVAssetWriter * _writer;                                                 //@synthesize _writer=__writer - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * _videoInput;                                        //@synthesize _videoInput=__videoInput - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor;              //@synthesize _pixelBufferAdaptor=__pixelBufferAdaptor - In the implementation block
@property (nonatomic,readonly) long long _framesPerSecond;                                              //@synthesize _framesPerSecond=__framesPerSecond - In the implementation block
@property (nonatomic,readonly) long long _sourceFramesReadCount;                                        //@synthesize _sourceFramesReadCount=__sourceFramesReadCount - In the implementation block
@property (nonatomic,readonly) long long _framesWrittenCount;                                           //@synthesize _framesWrittenCount=__framesWrittenCount - In the implementation block
@property (nonatomic,readonly) CVBufferRef _firstSourceFrame;                                           //@synthesize _firstSourceFrame=__firstSourceFrame - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef _videoFormatDescription;                    //@synthesize _videoFormatDescription=__videoFormatDescription - In the implementation block
@property (nonatomic,copy,readonly) id _completion;                                                     //@synthesize _completion=__completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_reset;
-(CVBufferRef)_copySourcePixelBufferForFrameNumber:(long long)arg1 ;
-(CGSize)_desiredOutputSizeForFrameSize:(CGSize)arg1 ;
-(BOOL)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(opaqueCMFormatDescriptionRef)arg4 transform:(CGAffineTransform)arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 visMetadataCount:(long long)arg8 videoMetadata:(id)arg9 ;
-(void)_writeMovieAsynchronously;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAssetWriter;
-(BOOL)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_finishMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1 ;
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CM12*)arg2 stabilizer:(id)arg3 ;
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CM12*)arg2 stabilizer:(id)arg3 ;
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(NSArray *)_frameFilePaths;
-(NSArray *)_visMetadataFilePaths;
-(NSObject*<OS_dispatch_queue>)_movieWritingQueue;
-(AVOfflineVideoStabilizer *)_stabilizer;
-(AVAssetWriter *)_writer;
-(AVAssetWriterInput *)_videoInput;
-(AVAssetWriterInputPixelBufferAdaptor *)_pixelBufferAdaptor;
-(long long)_framesPerSecond;
-(long long)_sourceFramesReadCount;
-(long long)_framesWrittenCount;
-(CVBufferRef)_firstSourceFrame;
-(opaqueCMFormatDescriptionRef)_videoFormatDescription;
-(id)_completion;
@end

