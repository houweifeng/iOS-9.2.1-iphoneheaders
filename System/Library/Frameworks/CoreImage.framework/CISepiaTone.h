/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputImage:(CIImage *)arg1 ;
@end

