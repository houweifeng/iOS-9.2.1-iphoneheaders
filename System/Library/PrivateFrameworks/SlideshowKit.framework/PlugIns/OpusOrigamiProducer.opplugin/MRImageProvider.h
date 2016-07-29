/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLoadable.h>
#import <OpusOrigamiProducer/MRRenderable.h>
#import <OpusOrigamiProducer/MRAssetPlayerDelegate.h>

@class NSString, NSDictionary, NSInvocationOperation, NSLock, MRImage, MRAssetPlayer, MRLayerEffect;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable, MRAssetPlayerDelegate> {

	NSString* mAssetPath;
	CGSize mDefaultSize;
	NSString* mImageSizeScript;
	NSDictionary* mEffectAttributes;
	NSInvocationOperation* mPreloadOperation;
	NSLock* mPreloadOperationLock;
	MRImage* mOriginalImage;
	CGSize mOriginalImageSize;
	BOOL mIsLoaded;
	CGSize mRequestedSize;
	double mShowTime;
	double mShowDuration;
	CGSize mImageSize;
	CGSize mLastImageSize;
	MRAssetPlayer* mSlidePlayer;
	unsigned mFlags;
	BOOL mIsCleanedUp;
	BOOL mJustHoldIt;
	MRLayerEffect* _effectLayer;

}

@property (assign,nonatomic) CGSize defaultSize; 
@property (nonatomic,copy) NSString * imageSizeScript; 
@property (nonatomic,retain) NSDictionary * effectAttributes; 
@property (nonatomic,copy) NSString * assetPath; 
@property (assign,nonatomic) CGSize originalImageSize; 
@property (assign,nonatomic) double showTime; 
@property (assign,nonatomic) double showDuration; 
@property (assign,nonatomic) BOOL wantsMonochromatic; 
@property (assign,nonatomic) BOOL wantsMipmap; 
@property (assign,nonatomic) BOOL wantsPowerOfTwo; 
@property (nonatomic,readonly) CGSize requestedSize; 
@property (nonatomic,readonly) double imageAspectRatio; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (assign,nonatomic) BOOL justHoldIt; 
@property (assign) MRLayerEffect * effectLayer;                            //@synthesize effectLayer=_effectLayer - In the implementation block
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWantsMipmap:(BOOL)arg1 ;
-(BOOL)wantsMipmap;
-(NSString *)assetPath;
-(void)setAssetPath:(NSString *)arg1 ;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(void)setEffectLayer:(MRLayerEffect *)arg1 ;
-(BOOL)endLiveUpdate;
-(double)showDuration;
-(double)showTime;
-(void)setShowTime:(double)arg1 ;
-(BOOL)beginLiveUpdate;
-(NSString *)imageSizeScript;
-(MRLayerEffect *)effectLayer;
-(void)setDefaultSize:(CGSize)arg1 ;
-(BOOL)wantsPowerOfTwo;
-(void)loadWithArguments:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(NSDictionary *)effectAttributes;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(void)_unloadIfNotUpdatingLive;
-(void)setWantsMonochromatic:(BOOL)arg1 ;
-(void)setWantsPowerOfTwo:(BOOL)arg1 ;
-(void)_computeImageSizeInContext:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)wantsMonochromatic;
-(void)imageIsAvailableFromAssetPlayer:(id)arg1 ;
-(CGSize)imageSizeForAspectRatio:(float)arg1 ;
-(void)setImageSizeScript:(NSString *)arg1 ;
-(BOOL)justHoldIt;
-(void)setJustHoldIt:(BOOL)arg1 ;
-(CGSize)originalImageSize;
-(void)setOriginalImageSize:(CGSize)arg1 ;
-(void)dealloc;
-(CGSize)defaultSize;
-(id)init;
-(BOOL)isOpaque;
-(void)setShowDuration:(double)arg1 ;
-(BOOL)isLoaded;
-(void)cleanup;
-(void)cancelLoading;
-(BOOL)isInfinite;
-(CGSize)requestedSize;
-(double)imageAspectRatio;
-(void)unload;
@end

