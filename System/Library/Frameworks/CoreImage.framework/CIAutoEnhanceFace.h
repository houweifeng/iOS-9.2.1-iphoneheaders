/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIAutoEnhanceFace : NSObject {

	int size;
	int centerX;
	int centerY;
	double I;
	double Q;

}

@property (readonly) int size; 
@property (readonly) int centerX; 
@property (readonly) int centerY; 
@property (readonly) double I; 
@property (readonly) double Q; 
-(CGRect)faceRect;
-(id)initWithBounds:(CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3 ;
-(int)centerX;
-(int)centerY;
-(double)I;
-(double)Q;
-(int)size;
-(id)description;
@end

