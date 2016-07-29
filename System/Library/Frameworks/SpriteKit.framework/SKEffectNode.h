/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class CIFilter, SKShader;

@interface SKEffectNode : SKNode {

	SKCEffectNode* _skcEffectNode;

}

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) BOOL shouldCenterFilter; 
@property (assign,nonatomic) BOOL shouldEnableEffects; 
@property (assign,nonatomic) BOOL shouldRasterize; 
@property (assign,nonatomic) long long blendMode; 
@property (nonatomic,retain) SKShader * shader; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setFilter:(CIFilter *)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(CIFilter *)filter;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setShouldEnableEffects:(BOOL)arg1 ;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(BOOL)shouldEnableEffects;
-(BOOL)shouldCenterFilter;
-(void)setShouldCenterFilter:(BOOL)arg1 ;
@end

