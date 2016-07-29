/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTexture, MRImageManager;

@interface MRTextureSource : NSObject {

	MRTexture* _texture;
	SCD_Struct_MR16 _textureOptions;
	unsigned _pixelFormat;
	float _color[4];
	CVBufferRef _cvPixelBuffer;
	CGContextRef _cgContext;
	CGColorSpaceRef _colorspace;
	CGImageRef _cgImage;
	void** _datas[3];
	unsigned long long _dataSize;
	unsigned _dataRowBytes;
	unsigned _dataWidth;
	unsigned _dataHeight;
	BOOL _ownsData;
	unsigned char _orientation;
	CVBufferRef _cvTexture;
	BOOL _isPremultiplied;
	BOOL _isOpaque;
	BOOL _wantsSharedTexture;
	MRImageManager* _imageManager;
	SCD_Struct_MR7 _size;

}

@property (readonly) MRImageManager * imageManager;                //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MR7 size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL wantsSharedTexture;              //@synthesize wantsSharedTexture=_wantsSharedTexture - In the implementation block
@property (readonly) SCD_Struct_MR16* textureOptions; 
@property (readonly) MRTexture * texture; 
-(SCD_Struct_MR16*)textureOptions;
-(void)generateMipmap;
-(id)initWithCGContext:(CGContextRef)arg1 imageManager:(id)arg2 ;
-(id)initWithSize:(SCD_Struct_MR7)arg1 andColor:(const float*)arg2 imageManager:(id)arg3 ;
-(id)initWithCGContext:(CGContextRef)arg1 size:(SCD_Struct_MR7)arg2 imageManager:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 textureSize:(SCD_Struct_MR7)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5 ;
-(void)setWantsSharedTexture:(BOOL)arg1 ;
-(id)initWithCVTexture:(CVBufferRef)arg1 size:(SCD_Struct_MR7)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 size:(SCD_Struct_MR7)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5 ;
-(BOOL)wantsSharedTexture;
-(void)addOverlayForROI:(id)arg1 ;
-(SCD_Struct_MR7)size;
-(void)dealloc;
-(void)cleanup;
-(MRTexture *)texture;
-(MRImageManager *)imageManager;
@end

