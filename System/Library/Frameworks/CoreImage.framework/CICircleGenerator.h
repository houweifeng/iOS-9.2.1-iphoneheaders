/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface CICircleGenerator : CIFilter {

	CIColor* inputColor;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputEdgeBlur;

}
+(id)customAttributes;
-(id)_CICircle;
-(id)outputImage;
@end

