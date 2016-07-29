/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputRectangle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRectangle; 
+(id)customAttributes;
-(void)setInputRectangle:(CIVector *)arg1 ;
-(CIVector *)inputRectangle;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

