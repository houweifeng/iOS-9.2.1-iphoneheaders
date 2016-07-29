/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationRenderer.h>

@class NSDictionary, CALayer, NSMutableArray, TSDTextureSet, KNAnimationInfo, KNAnimatedBuild, KNBuildChunk, TSDDrawableInfo, TSDFPSCounter, TSDTextureContext, TSDRep, NSArray;

@interface KNBuildRenderer : KNAnimationRenderer {

	long long mNumberOfAnimationsStarted;
	NSDictionary* mAnimatedLayers;
	CALayer* mParentLayer;
	id mBuildEndCallbackTarget;
	SEL mBuildEndCallbackSelector;
	NSMutableArray* mAnimatedBuildsToStartAtEnd;
	TSDTextureSet* mTextureSet;
	TSDTextureSet* mFinalAttributesTextureSet;
	KNAnimationInfo* mAnimationInfo;
	KNAnimatedBuild* mAnimatedBuild;
	KNBuildChunk* mBuildStage;
	TSDDrawableInfo* mInfo;
	BOOL mIsPreview;
	BOOL mInterrupted;
	BOOL mIsAnimationForPlayback;
	BOOL mAreAnimationsPrepared;
	BOOL mUsingFinalTexture;
	BOOL mIsTextureCachedAtEndOfBuild;
	BOOL mShouldUseMagicMoveTextures;
	BOOL mIsNonCachedTextureValid;
	TSDFPSCounter* mFPSCounter;
	TSDTextureContext* mTextureContext;

}

@property (nonatomic,readonly) KNBuildChunk * buildStage; 
@property (nonatomic,readonly) unsigned long long textureDeliveryStyle; 
@property (nonatomic,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) TSDRep * rep; 
@property (nonatomic,readonly) TSDTextureSet * textureSet; 
@property (nonatomic,readonly) TSDTextureSet * nonCachedTextureSet; 
@property (nonatomic,retain) TSDTextureContext * textureContext; 
@property (nonatomic,retain) CALayer * parentLayer; 
@property (nonatomic,readonly) NSArray * animatedBuildsToStartAtEnd; 
@property (nonatomic,readonly) BOOL isTextDrawable; 
@property (nonatomic,readonly) KNAnimatedBuild * animatedBuild; 
-(void)setTextureContext:(TSDTextureContext *)arg1 ;
-(unsigned long long)textureDeliveryStyle;
-(TSDTextureContext *)textureContext;
-(TSDRep *)rep;
-(unsigned long long)stageIndex;
-(void)setupPluginContext;
-(id)loadPluginIfNeeded;
-(id)textureSetForStage:(long long)arg1 context:(id)arg2 ;
-(id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 shouldRender:(BOOL)arg5 ;
-(id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 ;
-(BOOL)p_isMovieInfo;
-(BOOL)p_isDriftAnimation;
-(id)p_filterForTextDelivery:(long long)arg1 ;
-(BOOL)isTextDrawable;
-(BOOL)addAnimationsAtLayerTime:(double)arg1 ;
-(id)initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 context:(id)arg3 isRenderingToContext:(BOOL)arg4 ;
-(void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(BOOL)arg2 ;
-(BOOL)p_isPDFOutput;
-(id)setupFinalTextureGivenCurrentTextureSet:(id)arg1 ;
-(id)initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 isRenderingToContext:(BOOL)arg3 ;
-(void)prepareAnimations;
-(void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1 ;
-(id)p_keyForAnimation;
-(void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2 ;
-(void)p_removeAnimations;
-(void)p_resetAnimations;
-(void)removeAnimationsAndFinish:(BOOL)arg1 ;
-(void)setVisibilityAndGeometryOn:(id)arg1 withFinalTextureSet:(id)arg2 ;
-(void)resetPreviousStageUnhighlightOnTextureSet:(id)arg1 ;
-(id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5 ;
-(TSDTextureSet *)textureSet;
-(id)textureSetWithoutRenderedContents;
-(TSDTextureSet *)nonCachedTextureSet;
-(id)textureSetForStage:(long long)arg1 context:(id)arg2 shouldForceRebuild:(BOOL)arg3 ;
-(void)animateAfterDelay:(double)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(void)addBuildToStartAtEnd:(id)arg1 ;
-(void)resetTexture;
-(KNAnimatedBuild *)animatedBuild;
-(NSArray *)animatedBuildsToStartAtEnd;
-(KNBuildChunk *)buildStage;
-(void)dealloc;
-(id)description;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(TSDDrawableInfo *)info;
-(void)stopAnimations;
-(CALayer *)parentLayer;
-(void)setParentLayer:(CALayer *)arg1 ;
@end

