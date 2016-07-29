/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTextureSource, MRImageManager, MRTexture, NSString, NSDictionary, NSMutableDictionary, EAGLContext;

@interface MRImage : NSObject {

	MRTextureSource* _textureSource;
	MRImage* _referenceImage;
	unsigned _flags;
	int _clampMode;
	int _retainByUserCount;
	MRImageManager* _imageManager;
	MRTexture* _texture;
	double _centerX;
	double _centerY;
	double _scale;
	double _rotationAngle;
	NSString* _filterID;
	NSDictionary* _shader;
	double _sourceTimestamp;
	double _renderTime;
	NSString* _label;
	NSMutableDictionary* _userData;
	CGSize _size;

}

@property (readonly) MRImageManager * imageManager;                               //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (readonly) double width; 
@property (readonly) double height; 
@property (nonatomic,readonly) EAGLContext * updateGLContext; 
@property (assign,nonatomic) double centerX;                                      //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) double centerY;                                      //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) double scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,copy) NSString * filterID;                                   //@synthesize filterID=_filterID - In the implementation block
@property (retain) NSDictionary * shader;                                         //@synthesize shader=_shader - In the implementation block
@property (assign,nonatomic) int clampMode;                                       //@synthesize clampMode=_clampMode - In the implementation block
@property (nonatomic,readonly) BOOL hasKBOrShader; 
@property (assign,nonatomic) double sourceTimestamp;                              //@synthesize sourceTimestamp=_sourceTimestamp - In the implementation block
@property (assign,nonatomic) double renderTime;                                   //@synthesize renderTime=_renderTime - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundColorAsBorderColor; 
@property (assign,nonatomic) BOOL filtersNearest; 
@property (assign,nonatomic) BOOL preservesAspectRatio; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,copy) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (readonly) NSMutableDictionary * userData;                              //@synthesize userData=_userData - In the implementation block
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic) BOOL hasKenBurns; 
@property (assign,nonatomic) BOOL scaleWasFixedForTargetAspectRatio; 
@property (readonly) BOOL usesMipmap; 
@property (assign,nonatomic) BOOL mipmapFiltersNearest; 
@property (readonly) MRTexture * texture;                                         //@synthesize texture=_texture - In the implementation block
@property (readonly) int retainByUserCount;                                       //@synthesize retainByUserCount=_retainByUserCount - In the implementation block
-(void)setMipmapFiltersNearest:(BOOL)arg1 ;
-(void)setHasKenBurns:(BOOL)arg1 ;
-(BOOL)scaleWasFixedForTargetAspectRatio;
-(int)retainByUserCount;
-(void)setPreservesAspectRatio:(BOOL)arg1 ;
-(id)retainedByUserImageWithShader:(id)arg1 ;
-(void)uploadCGImage:(CGImageRef)arg1 toTextureRect:(CGRect)arg2 ;
-(void)setUsesMipmap:(BOOL)arg1 ;
-(BOOL)hasKBOrShader;
-(double)renderTime;
-(double)sourceTimestamp;
-(void)setClampMode:(int)arg1 ;
-(BOOL)hasKenBurns;
-(EAGLContext *)updateGLContext;
-(void)setRenderTime:(double)arg1 ;
-(BOOL)usesMipmap;
-(BOOL)filtersNearest;
-(int)clampMode;
-(void)releaseByUser;
-(id)insertingInCollection;
-(void)setSourceTimestamp:(double)arg1 ;
-(void)getMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(void)kenburnsMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(void)setFiltersNearest:(BOOL)arg1 ;
-(void)setUsesBackgroundColorAsBorderColor:(BOOL)arg1 ;
-(id)initWithTextureSource:(id)arg1 andSize:(CGSize)arg2 ;
-(void)setOnContext:(id)arg1 onTextureUnit:(unsigned long long)arg2 withReferenceAspectRatio:(float)arg3 state:(SCD_Struct_MR11*)arg4 ;
-(void)unsetOnContext:(id)arg1 onTextureUnit:(unsigned long long)arg2 state:(const SCD_Struct_MR11*)arg3 ;
-(CGSize)relativeSizeInContextPixelSize:(CGSize)arg1 ;
-(id)retainedByUserImage;
-(void)removingFromCollection;
-(void)setScaleWasFixedForTargetAspectRatio:(BOOL)arg1 ;
-(BOOL)preservesAspectRatio;
-(BOOL)usesBackgroundColorAsBorderColor;
-(BOOL)mipmapFiltersNearest;
-(id)retainByUser;
-(double)centerX;
-(double)centerY;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(BOOL)isEmpty;
-(BOOL)isOpaque;
-(double)width;
-(double)height;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSMutableDictionary *)userData;
-(void)cleanup;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(MRTexture *)texture;
-(double)aspectRatio;
-(void)setShader:(NSDictionary *)arg1 ;
-(NSDictionary *)shader;
-(MRImageManager *)imageManager;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
@end
