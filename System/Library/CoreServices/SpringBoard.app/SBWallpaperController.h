/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <SpringBoard/SBFWallpaperViewInternalObserver.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <UIKit/UIWindowDelegate.h>

@class UIWindow, UIView, SBFWallpaperView, NSHashTable, SBWallpaperEffectView, NSMutableSet, SBWallpaperPreviewSnapshotCache, SBWallpaperControllerCoordinator, SBWallpaperAggdLogger, NSString;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, UIWindowDelegate> {

	UIWindow* _wallpaperWindow;
	UIView* _wallpaperContainerView;
	long long _orientation;
	SBFWallpaperView* _lockscreenWallpaperView;
	SBFWallpaperView* _homescreenWallpaperView;
	SBFWallpaperView* _sharedWallpaperView;
	NSHashTable* _lockscreenObservers;
	NSHashTable* _homescreenObservers;
	SCD_Struct_SB33 _lockscreenPriorityInfo[3];
	SCD_Struct_SB33 _homescreenPriorityInfo[11];
	SCD_Struct_SB19 _lockscreenStyleTransitionState;
	SCD_Struct_SB19 _homescreenStyleTransitionState;
	SBWallpaperEffectView* _lockscreenEffectView;
	SBWallpaperEffectView* _homescreenEffectView;
	NSMutableSet* _suspendColorSamplingReasons;
	NSMutableSet* _suspendWallpaperAnimationReasons;
	NSMutableSet* _requireWallpaperReasons;
	NSMutableSet* _hideHomescreenWallpaperReasons;
	NSMutableSet* _hideLockscreenWallpaperReasons;
	long long _displayedVariant;
	double _lockscreenOnlyWallpaperAlpha;
	NSHashTable* _lockscreenBlurViews;
	NSHashTable* _homescreenBlurViews;
	long long _disallowRasterizationBlockCount;
	NSMutableSet* _disallowRasterizationReasonsHomeVariant;
	NSMutableSet* _disallowRasterizationReasonsLockVariant;
	CGColorRef _homescreenLightForegroundBlurColor;
	CGRect _homescreenLightForegroundBlurColorRect;
	BOOL _creatingHomescreenLightForegroundBlurColor;
	BOOL _isSuspendingMotionEffectsForBlur;
	SBWallpaperPreviewSnapshotCache* _previewCache;
	long long _activeOrientationSource;
	BOOL _coalescingGeometryChanges;
	long long _locationsWithCoalescedGeometryChanges;
	SBWallpaperControllerCoordinator* _coordinator;
	NSMutableSet* _homescreenStyleChangeDelayReasons;
	double _homescreenWallpaperScale;
	double _lockscreenWallpaperScale;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;

}

@property (assign,nonatomic) long long variant; 
@property (assign,nonatomic) double windowLevel; 
@property (assign,nonatomic) double homescreenWallpaperScale;                          //@synthesize homescreenWallpaperScale=_homescreenWallpaperScale - In the implementation block
@property (assign,nonatomic) double lockscreenWallpaperScale;                          //@synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale - In the implementation block
@property (nonatomic,readonly) long long activeOrientationSource;                      //@synthesize activeOrientationSource=_activeOrientationSource - In the implementation block
@property (nonatomic,retain) SBWallpaperAggdLogger * wallpaperAggdLogger;              //@synthesize wallpaperAggdLogger=_wallpaperAggdLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_homescreenLightForegroundBlurMappedImageCache;
+(id)sharedInstance;
-(id)legibilitySettingsForVariant:(long long)arg1 ;
-(void)_batterySaverModeChanged:(id)arg1 ;
-(void)removeObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)addObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)setHomescreenStyle:(long long)arg1 forPriority:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setLockscreenStyle:(long long)arg1 forPriority:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)removeHomescreenStyleForPriority:(long long)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)removeLockscreenStyleForPriority:(long long)arg1 withAnimationFactory:(id)arg2 ;
-(void)beginRequiringWithReason:(id)arg1 ;
-(void)endRequiringWithReason:(id)arg1 ;
-(double)homescreenWallpaperScale;
-(void)suspendWallpaperAnimationForReason:(id)arg1 ;
-(void)resumeWallpaperAnimationForReason:(id)arg1 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1 ;
-(BOOL)setHomescreenStyleTransitionState:(SCD_Struct_SB19)arg1 forPriority:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2 ;
-(id)averageColorForVariant:(long long)arg1 ;
-(double)contrastForVariant:(long long)arg1 ;
-(void)setActiveOrientationSource:(long long)arg1 andUpdateToOrientation:(long long)arg2 usingCrossfadeToBlack:(BOOL)arg3 ;
-(void)suspendColorSamplingForReason:(id)arg1 ;
-(void)resumeColorSamplingForReason:(id)arg1 ;
-(double)contrastInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(void)setDisallowsRasterization:(BOOL)arg1 forVariant:(long long)arg2 withReason:(id)arg3 ;
-(BOOL)setLockscreenStyleTransitionState:(SCD_Struct_SB19)arg1 forPriority:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setHomescreenStyle:(long long)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4 ;
-(id)initWithOrientation:(long long)arg1 variant:(long long)arg2 ;
-(void)_updateWallpaperForLocations:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateScreenBlanked;
-(void)_motionEffectsChanged;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(void)_endSuspendingMotionEffectsForBlurIfNeeded;
-(BOOL)_shouldSuspendMotionEffectsForState:(SCD_Struct_SB19)arg1 ;
-(void)_updateMotionEffectsForState:(SCD_Struct_SB19)arg1 ;
-(void)_updateWallpaperHidden;
-(void)_updateWallpaperParallax;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2 ;
-(BOOL)shouldDelayHomescreenStyleUpdates;
-(void)_suspendOrResumeColorSampling;
-(void)_suspendOrResumeWallpaperAnimation;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3 ;
-(id)_wallpaperViewForVariant:(long long)arg1 ;
-(void)_createHomescreenLightForegroundBlurColorIfNecessary;
-(BOOL)_setDisallowRasterization:(BOOL)arg1 withReason:(id)arg2 reasons:(id)arg3 ;
-(BOOL)_isWallpaperHiddenForVariant:(long long)arg1 ;
-(BOOL)variantsShareWallpaper;
-(void)_updateSharedWallpaper;
-(void)_updateSeparateWallpaper;
-(void)setHomescreenWallpaperScale:(double)arg1 ;
-(void)setLockscreenWallpaperScale:(double)arg1 ;
-(void)setLockscreenOnlyWallpaperAlpha:(double)arg1 ;
-(void)_updateBlurGeneration;
-(BOOL)_isWallpaperView:(id)arg1 displayingWallpaper:(id)arg2 forVariant:(long long)arg3 ;
-(void)_clearWallpaperView:(id*)arg1 ;
-(id)_newWallpaperViewForProcedural:(id)arg1 orImage:(id)arg2 withVideoURL:(id)arg3 forVariant:(long long)arg4 ;
-(void)_handleWallpaperChangedForVariant:(long long)arg1 ;
-(void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withVideoURL:(id)arg2 procedural:(id)arg3 ;
-(void)_setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3 ;
-(void)_beginSuspendingMotionEffectsForBlurIfNeeded;
-(id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(SCD_Struct_SB19)arg2 ;
-(void)_clearWallpaperEffectView:(id*)arg1 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 oldState:(SCD_Struct_SB19*)arg2 newState:(SCD_Struct_SB19*)arg3 oldEffectView:(id*)arg4 newEffectView:(id*)arg5 ;
-(void)_clearHomescreenLightForegroundBlurColor;
-(id)_observersForVariant:(long long)arg1 ;
-(void)_reconfigureBlurViewsForVariant:(long long)arg1 ;
-(void)_updateBlurImagesForVariant:(long long)arg1 ;
-(id)_blurViewsForVariant:(long long)arg1 ;
-(BOOL)_isRasterizationDisallowedForCurrentVariant;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(BOOL)_isAcceptingOrientationChangesFromSource:(long long)arg1 ;
-(id)_activeWallpaperView;
-(void)_handleWallpaperGeometryChangedForVariant:(long long)arg1 ;
-(void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2 ;
-(BOOL)updateIrisWallpaperForUnlockedState;
-(void)updateIrisWallpaperForLockedState;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1 ;
-(SCD_Struct_SB19)currentHomescreenStyleTransitionState;
-(BOOL)setStyleTransitionState:(SCD_Struct_SB19)arg1 forVariant:(long long)arg2 priority:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(void)setHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)arg1 ;
-(void)removeHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)arg1 ;
-(id)irisWallpaperView;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 forVariant:(long long)arg4 ;
-(CGColorRef)homescreenLightForegroundBlurColor;
-(CGSize)homescreenLightForegroundBlurColorPhaseForRect:(CGRect)arg1 ;
-(id)vendWallpaperViewForVariant:(long long)arg1 ;
-(void)_registerFakeBlurView:(id)arg1 ;
-(void)_unregisterFakeBlurView:(id)arg1 ;
-(id)_sourceForFakeBlurView:(id)arg1 ;
-(id)_newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 ;
-(id)_getImageInRect:(CGRect)arg1 withZoomFactor:(double)arg2 forVariant:(long long)arg3 style:(inout long long*)arg4 ;
-(BOOL)setHomescreenStyleTransitionState:(SCD_Struct_SB19)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4 ;
-(BOOL)removeHomescreenStyleForBundleIdentifier:(id)arg1 withPriority:(long long)arg2 animationFactory:(id)arg3 ;
-(double)lockscreenWallpaperScale;
-(long long)activeOrientationSource;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)setWindowLevel:(double)arg1 ;
-(id)_window;
-(double)windowLevel;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_updateRasterizationState;
-(void)_beginDisallowRasterizationBlock;
-(void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2 ;
-(void)_endDisallowRasterizationBlock;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg1 ;
-(void)wallpaperViewDidInvalidateGeometry:(id)arg1 ;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)previewCache;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(long long)variant;
-(void)setVariant:(long long)arg1 ;
@end

