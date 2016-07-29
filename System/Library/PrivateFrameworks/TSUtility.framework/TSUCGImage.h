/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@interface TSUCGImage : TSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

