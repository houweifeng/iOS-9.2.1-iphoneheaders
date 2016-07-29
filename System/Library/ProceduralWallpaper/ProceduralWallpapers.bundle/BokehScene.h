/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <ProceduralWallpapers/BokehParallaxScene.h>

@class NSMutableArray;

@interface BokehScene : BokehParallaxScene {

	long long _circleBlendMode;
	long long _finalBlendMode;
	BOOL _enableTwoPassBlending;
	int _numCircles;
	NSMutableArray* blurCircles;
	NSMutableArray* colors;
	NSMutableArray* colorsFrequency;
	unsigned long long totalColorsFrequency;
	BOOL _isOn;
	BOOL isBlurredVersion;
	BOOL _needsFrameCallback;
	/*^block*/id _frameCallback;

}

@property (assign) BOOL isBlurredVersion; 
@property (copy) id frameCallback;                                   //@synthesize frameCallback=_frameCallback - In the implementation block
@property (assign,nonatomic) long long circleBlendMode; 
-(id)initWithSize:(CGSize)arg1 ;
-(id)averageColorForRect:(CGRect)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(void)didEvaluateActions;
-(void)_setNeedsRender;
-(void)nudge;
-(void)presimulateWallpaperAnimation;
-(void)relocateBokehCircle:(id)arg1 ;
-(long long)circleBlendMode;
-(void)addBokehCircles;
-(BOOL)isBlurredVersion;
-(void)addRandomBokehCircle;
-(void)addBokehCircle:(CGPoint)arg1 parallax:(double)arg2 ;
-(id)fadingAction;
-(void)setFrameCallback:(id)arg1 ;
-(void)setCircleBlendMode:(long long)arg1 ;
-(void)reloadColors;
-(id)frameCallback;
-(id)flickerAction;
-(void)transitionInFromBlack;
-(void)transitionIn;
-(void)setIsBlurredVersion:(BOOL)arg1 ;
-(id)wobbleAction;
-(void)transitionOut;
@end

