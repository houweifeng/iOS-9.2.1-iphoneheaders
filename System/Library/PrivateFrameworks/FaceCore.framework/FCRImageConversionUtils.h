/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@interface FCRImageConversionUtils : NSObject
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 ;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3 cacheContext:(BOOL)arg4 ;
+(char*)convertCGImageToBufferUsingGrayDevice:(CGImageRef)arg1 ;
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 usingGCD:(BOOL)arg2 cacheContext:(BOOL)arg3 ;
@end

