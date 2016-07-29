/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIBumpDistortionLinear : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputAngle;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(NSNumber *)inputAngle;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

