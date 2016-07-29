/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CALayer, TSDTextureSet, NSMutableDictionary, NSMutableArray, TSDBitmapRenderingQualityInfo, TSUColor, NSString;

@interface TSDTexturedRectangle : NSObject <NSCopying> {

	CGPoint mOffset;
	CGPoint mOriginalPosition;
	CGSize mSize;
	CGRect mContentRect;
	CGRect mOriginalFrame;
	CALayer* mLayer;
	/*^block*/id mRenderBlock;
	CGImageRef mSourceImage;
	CGImageRef mBakedImage;
	TSDTextureSet* mParent;
	long long mTextureType;
	double mTextureOpacity;
	unsigned mSingleTextureName;
	BOOL mSingleTextureContainsMipmaps;
	BOOL mIsFlattened;
	BOOL mDidInitFromGLTexture;
	NSMutableDictionary* mAttributes;
	NSMutableArray* mTags;
	CGColorSpaceRef mColorSpace;
	TSDBitmapRenderingQualityInfo* mBitmapRenderingQualityInfo;
	BOOL _isVerticalText;
	double _textBaseline;
	double _textXHeight;
	TSUColor* _textColor;
	NSString* _text;
	CGSize _singleTextureSize;
	NSRange _textRange;

}

@property (nonatomic,readonly) unsigned singleTextureName; 
@property (nonatomic,readonly) CGSize singleTextureSize;                                              //@synthesize singleTextureSize=_singleTextureSize - In the implementation block
@property (nonatomic,readonly) unsigned singleTextureTarget; 
@property (assign,nonatomic) CGPoint originalPosition; 
@property (assign,nonatomic) CGPoint offset; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect frameOnCanvas; 
@property (assign,nonatomic) CGRect contentRect; 
@property (assign,nonatomic) TSDTextureSet * parent; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,retain) NSMutableArray * tags; 
@property (assign,nonatomic) long long textureType; 
@property (assign,nonatomic) double textureOpacity; 
@property (nonatomic,readonly) double singleTextureOpacity; 
@property (assign,nonatomic) BOOL isFlattened; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,readonly) BOOL isRenderable; 
@property (nonatomic,readonly) BOOL isImageSource; 
@property (nonatomic,readonly) BOOL isBackgroundTexture; 
@property (nonatomic,readonly) CALayer * parentLayer; 
@property (assign,nonatomic) BOOL isVerticalText;                                                     //@synthesize isVerticalText=_isVerticalText - In the implementation block
@property (assign,nonatomic) double textBaseline;                                                     //@synthesize textBaseline=_textBaseline - In the implementation block
@property (assign,nonatomic) double textXHeight;                                                      //@synthesize textXHeight=_textXHeight - In the implementation block
@property (nonatomic,retain) TSUColor * textColor;                                                    //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSRange textRange;                                                       //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,retain) TSDBitmapRenderingQualityInfo * bitmapRenderingQualityInfo; 
+(CGRect)boundingRectForTextures:(id)arg1 ;
+(CGRect)boundingRectOnCanvasForTextures:(id)arg1 ;
-(TSDBitmapRenderingQualityInfo *)bitmapRenderingQualityInfo;
-(id)initWithSize:(CGSize)arg1 offset:(CGPoint)arg2 renderBlock:(/*^block*/id)arg3 ;
-(void)setTextureOpacity:(double)arg1 ;
-(CGRect)frameOnCanvas;
-(void)releaseSingleTexture;
-(void)p_updateFrame;
-(CGColorSpaceRef)p_colorSpace;
-(CGImageRef)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(CGPoint)arg3 ;
-(void)resetToSourceImage;
-(unsigned)singleTextureTarget;
-(void)setupSingleTextureAndGenerateMipMaps:(BOOL)arg1 ;
-(void)setupSingleTexture;
-(void)renderIntoContext:(CGContextRef)arg1 shouldApplyAlpha:(BOOL)arg2 ;
-(id)initWithTextureInfo:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)isImageSource;
-(void)adjustAnchorRelativeToCenterOfRotation:(CGPoint)arg1 ;
-(void)resetAnchorPoint;
-(BOOL)isRenderable;
-(void)renderLayerContentsIfNeeded;
-(unsigned)singleTextureName;
-(CGSize)singleTextureSize;
-(double)singleTextureOpacity;
-(void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2 ;
-(void)renderIntoContext:(CGContextRef)arg1 ;
-(BOOL)isBackgroundTexture;
-(CGRect)convertToCanvasCoordinates:(CGRect)arg1 ;
-(void)setBitmapRenderingQualityInfo:(TSDBitmapRenderingQualityInfo *)arg1 ;
-(CGPoint)originalPosition;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(double)textureOpacity;
-(double)textXHeight;
-(void)setTextXHeight:(double)arg1 ;
-(CGSize)size;
-(CALayer *)layer;
-(void)dealloc;
-(CGRect)frame;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(TSUColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
-(void)setSize:(CGSize)arg1 ;
-(NSMutableArray *)tags;
-(TSUColor *)textColor;
-(CGRect)contentRect;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setContentRect:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(void)setIsFlattened:(BOOL)arg1 ;
-(BOOL)isFlattened;
-(double)textBaseline;
-(void)setTextBaseline:(double)arg1 ;
-(void)setTextureType:(long long)arg1 ;
-(long long)textureType;
-(void)setTags:(NSMutableArray *)arg1 ;
-(CALayer *)parentLayer;
-(TSDTextureSet *)parent;
-(void)setParent:(TSDTextureSet *)arg1 ;
-(void)teardown;
-(void)setIsVerticalText:(BOOL)arg1 ;
-(BOOL)isVerticalText;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
@end

