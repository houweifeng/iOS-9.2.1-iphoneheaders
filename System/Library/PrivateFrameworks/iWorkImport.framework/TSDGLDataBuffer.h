/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLDataBufferAccessor.h>

@class NSMutableArray, NSMutableDictionary, TSDGLShader, NSArray, NSString;

@interface TSDGLDataBuffer : NSObject <TSDGLDataBufferAccessor> {

	unsigned long long mCurrentBufferIndex;
	NSMutableArray* mArrayBuffers;
	NSMutableDictionary* mAttributeToArrayBuffersDictionary;
	unsigned long long mElementArrayCount;
	unsigned short* mGLElementData;
	BOOL mGLElementDataBufferWasSetup;
	unsigned mGLElementDataBuffer;
	CGSize mGLElementMeshSize;
	unsigned long long mGLElementQuadParticleCount;
	unsigned mGLVertexArrayObjects[2];
	BOOL _isUpdatingRawDataBuffer;
	BOOL _didTeardown;
	BOOL _isEnabled;
	TSDGLShader* _enabledShader;
	BOOL _isDoubleBuffered;
	unsigned _drawMode;
	unsigned long long _vertexCount;
	NSArray* _vertexAttributes;

}

@property (readonly) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (readonly) NSArray * vertexAttributes;                    //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (assign,nonatomic) unsigned drawMode;                     //@synthesize drawMode=_drawMode - In the implementation block
@property (readonly) BOOL isDoubleBuffered;                         //@synthesize isDoubleBuffered=_isDoubleBuffered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS513)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint2D:(SCD_Struct_TS513)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS514)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint3D:(SCD_Struct_TS514)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(tquat<float>)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint4D:(tquat<float>)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2 ;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(BOOL)arg4 ;
-(id)initWithVertexAttributes:(id)arg1 meshSize:(CGSize)arg2 ;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 ;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 ;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 ;
-(void)p_setupGLElementArrayBufferIfNecessary;
-(void)enableElementArrayBuffer;
-(void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(BOOL)arg2 ;
-(void)drawWithShader:(id)arg1 range:(NSRange)arg2 deactivateShaderWhenDone:(BOOL)arg3 ;
-(void)enableDataBufferWithShader:(id)arg1 ;
-(void)disableDataBufferWithShader:(id)arg1 ;
-(BOOL)p_setAttributeUpdateData:(SCD_Struct_TS515*)arg1 fromAttribute:(id)arg2 ;
-(id)initWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 ;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 ;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 textureFlipped:(BOOL)arg3 ;
-(unsigned short)GLushortForIndexElement:(unsigned long long)arg1 ;
-(void)disableElementArrayBuffer;
-(void)drawWithShader:(id)arg1 ;
-(void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5 ;
-(id)vertexAttributeNamed:(id)arg1 ;
-(void)updateDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)isDoubleBuffered;
-(NSArray *)vertexAttributes;
-(void)dealloc;
-(NSString *)description;
-(unsigned)drawMode;
-(void)setDrawMode:(unsigned)arg1 ;
-(unsigned long long)vertexCount;
-(void)teardown;
@end

