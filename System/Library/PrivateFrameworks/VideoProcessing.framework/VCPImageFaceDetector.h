/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageFaceDetector : VCPImageAnalyzer
+(CGAffineTransform)transformTopLeft;
+(id)faceDetector;
-(BOOL)isDuplicate:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(int)faceDetectionInTiles:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 faces:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)faceDetection:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 faces:(id)arg3 cancel:(/*^block*/id)arg4 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 withTransform:(CGAffineTransform)arg2 flags:(unsigned long long*)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
@end

