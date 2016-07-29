/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKImageResizingConstraints : NSObject {

	int _constraintType;
	double _fixedDimension;
	CGSize _size;
	double _minAspectRatio;
	double _maxAspectRatio;
	BOOL _respectAspectRatioRange;
	BOOL _outputMirrored;
	double _outputScale;
	double _outputBorderTrim;

}

@property (assign,nonatomic) double outputScale;                   //@synthesize outputScale=_outputScale - In the implementation block
@property (assign,nonatomic) double outputBorderTrim;              //@synthesize outputBorderTrim=_outputBorderTrim - In the implementation block
@property (assign,nonatomic) BOOL outputMirrored;                  //@synthesize outputMirrored=_outputMirrored - In the implementation block
+(id)constraintsWithFixedWidth:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedHeight:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedLargeDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithFixedSmallDimenstion:(double)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMaxSize:(CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMinSize:(CGSize)arg1 minAspectRatio:(double)arg2 maxAspectRatio:(double)arg3 ;
+(id)constraintsWithMaxSize:(CGSize)arg1 ;
+(id)constraintsWithMinSize:(CGSize)arg1 ;
+(id)constraintsWithFixedSize:(CGSize)arg1 ;
-(id)init;
-(BOOL)getPixelCropRect:(CGRect*)arg1 pixelOutputSize:(CGSize*)arg2 forImage:(id)arg3 ;
-(double)outputScale;
-(BOOL)outputMirrored;
-(id)resizedImage:(id)arg1 ;
-(BOOL)_getPixelCropRect:(CGRect*)arg1 pixelOutputSize:(CGSize*)arg2 forImageSize:(CGSize)arg3 scale:(double)arg4 ;
-(id)_flippedConstraints;
-(void)setOutputScale:(double)arg1 ;
-(BOOL)_reasonable;
-(double)outputBorderTrim;
-(void)setOutputBorderTrim:(double)arg1 ;
-(void)setOutputMirrored:(BOOL)arg1 ;
@end

