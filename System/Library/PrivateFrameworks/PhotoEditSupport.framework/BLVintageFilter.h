/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIFilter;

@interface BLVintageFilter : CIFilter {

	BOOL _needsReprocess;
	int _lastAmount;
	float _lastStrength;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	NSNumber* _inputStrength;
	CIFilter* _colorCubeFilter;
	CIFilter* _maskFilter;

}

@property (nonatomic,retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                    //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) NSNumber * inputStrength;                  //@synthesize inputStrength=_inputStrength - In the implementation block
@property (nonatomic,retain) CIFilter * colorCubeFilter;              //@synthesize colorCubeFilter=_colorCubeFilter - In the implementation block
@property (nonatomic,retain) CIFilter * maskFilter;                   //@synthesize maskFilter=_maskFilter - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)init;
-(id)outputImage;
-(CIFilter *)colorCubeFilter;
-(void)setColorCubeFilter:(CIFilter *)arg1 ;
-(void)setMaskFilter:(CIFilter *)arg1 ;
-(CIFilter *)maskFilter;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputImage:(CIImage *)arg1 ;
@end

