/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@class SKTexture;

@interface BokehParallaxNode : SKSpriteNode {

	double _parallaxMultiplier;
	SKTexture* _blurTex;
	SKTexture* _regTex;
	double _regScaleX;
	double _regScaleY;
	double _regAlpha;
	CGPoint _layoutPosition;
	CGPoint _driftSpeed;

}

@property (assign) CGPoint layoutPosition;                 //@synthesize layoutPosition=_layoutPosition - In the implementation block
@property (assign) double parallaxMultiplier; 
@property (assign) CGPoint driftSpeed;                     //@synthesize driftSpeed=_driftSpeed - In the implementation block
@property (retain) SKTexture * blurTex;                    //@synthesize blurTex=_blurTex - In the implementation block
@property (retain) SKTexture * regTex;                     //@synthesize regTex=_regTex - In the implementation block
@property (assign) double regScaleX;                       //@synthesize regScaleX=_regScaleX - In the implementation block
@property (assign) double regScaleY;                       //@synthesize regScaleY=_regScaleY - In the implementation block
@property (assign) double regAlpha;                        //@synthesize regAlpha=_regAlpha - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(void)setRegScaleX:(double)arg1 ;
-(void)setParallaxMultiplier:(double)arg1 ;
-(CGPoint)driftSpeed;
-(void)setRegScaleY:(double)arg1 ;
-(void)setBlurTex:(SKTexture *)arg1 ;
-(double)regScaleX;
-(void)setDriftSpeed:(CGPoint)arg1 ;
-(void)setLayoutPosition:(CGPoint)arg1 ;
-(double)regScaleY;
-(void)setRegAlpha:(double)arg1 ;
-(double)parallaxMultiplier;
-(void)setRegTex:(SKTexture *)arg1 ;
-(SKTexture *)blurTex;
-(CGPoint)layoutPosition;
-(SKTexture *)regTex;
-(double)regAlpha;
@end

