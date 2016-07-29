/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DFramebufferGaussianBlurPipeline.h>

@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {

	float mBlendFactor;
	TSCH3DGLFramebuffer* mBlendTexture;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * blendTexture; 
@property (assign,nonatomic) float blendFactor; 
+(id)effectsArray;
-(void)setBlendTexture:(TSCH3DGLFramebuffer *)arg1 ;
-(void)setBlendFactor:(float)arg1 ;
-(void)updateShaderEffectsStates;
-(TSCH3DGLFramebuffer *)blendTexture;
-(void)dealloc;
-(float)blendFactor;
@end

