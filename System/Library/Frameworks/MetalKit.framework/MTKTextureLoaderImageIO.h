/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData {

	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;

}
-(void)dealloc;
-(BOOL)loadCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)loadData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)uploadDataWithOptions:(id)arg1 ;
-(void)releaseData;
-(BOOL)decodeCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(BOOL)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 options:(id)arg3 ;
-(BOOL)decodeCGImageDataProvider:(CGImageRef)arg1 options:(id)arg2 ;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 alphaInfo:(unsigned)arg2 andPixelSizeBytes:(unsigned long long)arg3 andColorModel:(int)arg4 isOptimized:(BOOL)arg5 options:(id)arg6 ;
@end
