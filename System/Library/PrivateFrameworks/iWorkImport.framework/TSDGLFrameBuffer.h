/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface TSDGLFrameBuffer : NSObject {

	NSArray* _textureConfigs;
	NSDictionary* _namesToTextureDict;
	NSMutableArray* _currentTextureLookupInfoByAttachment;
	NSMutableArray* _desiredTextureLookupInfoByAttachment;
	NSArray* _textureConfigsByAttachment;
	NSArray* _textureLookupInfosByAttachment;
	long long _currentBindingOption;
	unsigned _currentDrawBuffers[1];
	int _currentDrawBufferCount;
	unsigned _currentReadBuffer;
	unsigned _framebuffer;
	BOOL _isUsingNonDefaultAttachments;
	BOOL _isBound;
	BOOL _shouldDeleteTexturesOnTeardown;
	NSString* _name;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned currentGLTexture; 
@property (nonatomic,readonly) NSString * currentGLTextureName; 
@property (nonatomic,readonly) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isBound;                                   //@synthesize isBound=_isBound - In the implementation block
@property (assign,nonatomic) BOOL shouldDeleteTexturesOnTeardown;              //@synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(void)setCurrentGLFramebuffer:(int)arg1 ;
+(int)currentGLFramebufferWithBindingOption:(long long)arg1 ;
+(void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2 ;
+(int)currentGLFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned)arg2 ;
-(void)bindFramebuffer;
-(unsigned)GLTextureNamed:(id)arg1 ;
-(void)setCurrentTextureNamed:(id)arg1 ;
-(void)bindFramebufferWithBindingOption:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2 ;
-(void)setupFramebufferIfNecessary;
-(id)initWithSize:(CGSize)arg1 textureCount:(unsigned long long)arg2 ;
-(BOOL)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned*)arg1 count:(long long)arg2 ;
-(void)p_setDrawBuffersAndReadBuffer;
-(void)p_setFramebufferTextureAtAttachmentIndex:(long long)arg1 bindingOption:(long long)arg2 ;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2 ;
-(void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned)arg2 ;
-(long long)currentTextureIndexAtAttachment:(unsigned)arg1 ;
-(void)setCurrentTextureToNextAtAttachment:(unsigned)arg1 ;
-(unsigned)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned)arg2 ;
-(BOOL)shouldDeleteTexturesOnTeardown;
-(id)p_currentTextureLookupInfoAtAttachment:(unsigned)arg1 ;
-(void)setCurrentTextureIndex:(unsigned long long)arg1 ;
-(void)setCurrentTexturesToNext;
-(unsigned)GLTextureAtIndex:(unsigned long long)arg1 ;
-(CGSize)sizeOfGLTextureNamed:(id)arg1 ;
-(unsigned)currentGLTextureAtAttachment:(unsigned)arg1 ;
-(unsigned)currentGLTexture;
-(NSString *)currentGLTextureName;
-(void)setShouldDeleteTexturesOnTeardown:(BOOL)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithSize:(CGSize)arg1 ;
-(BOOL)isBound;
-(void)teardown;
@end

