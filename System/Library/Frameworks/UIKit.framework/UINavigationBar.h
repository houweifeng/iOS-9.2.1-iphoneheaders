/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/_UIShadowedView.h>
#import <UIKit/_UIBasicAnimationFactory.h>
#import <UIKit/UIStatusBarTinting.h>
#import <UIKit/_UIBarPositioningInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIBarPositioning.h>

@class NSMutableArray, UIView, NSArray, UIColor, UISwipeGestureRecognizer, UIImageView, _UIViewControllerTransitionContext, NSString, UIFocusContainerGuide, UINavigationItem, UIImage, NSDictionary;

@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, _UIShadowedView, _UIBasicAnimationFactory, UIStatusBarTinting, _UIBarPositioningInternal, NSCoding, UIBarPositioning> {

	NSMutableArray* _itemStack;
	double _rightMargin;
	unsigned _state;
	id _delegate;
	UIView* _backgroundView;
	UIView* _titleView;
	NSArray* _leftViews;
	NSArray* _rightViews;
	UIView* _prompt;
	UIView* _accessoryView;
	UIColor* _barTintColor;
	id _appearanceStorage;
	id _currentAlert;
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
		unsigned transitioningToTranslucent : 1;
		unsigned barStyle : 3;
		unsigned barTranslucence : 3;
		unsigned disableLayout : 1;
		unsigned backPressed : 1;
		unsigned animatePromptChange : 1;
		unsigned pendingHideBackButton : 1;
		unsigned titleAutosizesToFit : 1;
		unsigned usingNewAPI : 1;
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned shouldUpdatePromptAfterTransition : 1;
		unsigned crossfadeItems : 1;
		unsigned autoAdjustTitle : 1;
		unsigned isContainedInPopover : 1;
		unsigned needsDrawRect : 1;
		unsigned animationCleanupCancelled : 1;
		unsigned layoutInProgress : 1;
		unsigned dynamicDuration : 1;
		unsigned isInteractive : 1;
		unsigned cancelledTransition : 1;
		unsigned animationCount : 4;
		unsigned backgroundLayoutNeedsUpdate : 1;
	}  _navbarFlags;
	UISwipeGestureRecognizer* _popSwipeGestureRecognizer;
	UIImageView* _backIndicatorView;
	NSMutableArray* _slideTransitionClippingViews;
	_UIViewControllerTransitionContext* _navControllerAnimatingContext;
	BOOL _needsUpdateBackIndicatorImage;
	BOOL _wantsLetterpressContent;
	long long _barPosition;
	double _requestedMaxBackButtonWidth;
	UIColor* _accessibilityButtonBackgroundTintColor;
	NSString* _backdropViewLayerGroupName;
	NSMutableArray* __animationIds;
	UIFocusContainerGuide* _contentFocusContainerGuide;

}

@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic,__weak) id<UINavigationBarDelegate> delegate; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,readonly) UINavigationItem * topItem; 
@property (nonatomic,readonly) UINavigationItem * backItem; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (nonatomic,retain) UIImage * backIndicatorImage; 
@property (nonatomic,retain) UIImage * backIndicatorTransitionMaskImage; 
@property (setter=_setBackdropViewLayerGroupName:,nonatomic,retain) NSString * _backdropViewLayerGroupName;                                     //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
@property (assign,setter=_setRequestedMaxBackButtonWidth:,nonatomic) double _requestedMaxBackButtonWidth;                                       //@synthesize requestedMaxBackButtonWidth=_requestedMaxBackButtonWidth - In the implementation block
@property (setter=_setAccessibilityButtonBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityButtonBackgroundTintColor;              //@synthesize accessibilityButtonBackgroundTintColor=_accessibilityButtonBackgroundTintColor - In the implementation block
@property (nonatomic,readonly) double _heightIncludingBackground; 
@property (setter=_setBackIndicatorImage:,nonatomic,retain) UIImage * _backIndicatorImage; 
@property (assign,setter=_setBackIndicatorLeftMargin:,nonatomic) double _backIndicatorLeftMargin; 
@property (setter=_setAnimationIds:,nonatomic,retain) NSMutableArray * _animationIds;                                                           //@synthesize _animationIds=__animationIds - In the implementation block
@property (assign,setter=_setNeedsUpdateBackIndicatorImage:,nonatomic) BOOL _needsUpdateBackIndicatorImage;                                     //@synthesize needsUpdateBackIndicatorImage=_needsUpdateBackIndicatorImage - In the implementation block
@property (assign,setter=_setWantsLetterpressContent:,nonatomic) BOOL _wantsLetterpressContent;                                                 //@synthesize wantsLetterpressContent=_wantsLetterpressContent - In the implementation block
@property (nonatomic,readonly) long long _barTranslucence; 
@property (getter=_contentFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * contentFocusContainerGuide;                           //@synthesize contentFocusContainerGuide=_contentFocusContainerGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long barPosition;                                                                                           //@synthesize barPosition=_barPosition - In the implementation block
+(CGSize)defaultSize;
+(void)_initializeForIdiom:(long long)arg1 ;
+(id)_defaultVisualStyleForOrientation:(long long)arg1 ;
+(id)_bottomColorForBackgroundImage:(id)arg1 viewSize:(CGSize)arg2 ;
+(id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(CGSize)arg5 ;
+(id)_visualStyleForIdiom:(long long)arg1 metrics:(long long)arg2 isContainedInPopover:(BOOL)arg3 wantsLetterpressContent:(BOOL)arg4 ;
+(CGSize)defaultSizeWithPromptForOrientation:(long long)arg1 ;
+(CGSize)defaultSizeForOrientation:(long long)arg1 ;
+(BOOL)_useCustomBackButtonAction;
+(id)_defaultBackIndicatorImage;
+(id)_defaultBackIndicatorTransitionMaskImage;
+(id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 ;
+(CGSize)defaultSizeWithPrompt;
+(id)defaultPromptFont;
+(void)setDefaultAnimationDuration:(double)arg1 ;
+(void)_setUseCustomBackButtonAction:(BOOL)arg1 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)_gkApplyTheme:(id)arg1 navbarStyle:(long long)arg2 ;
-(void)_gkApplyTheme:(id)arg1 ;
-(void)_cnui_applyContactStyle;
-(double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UINavigationBarDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)setHidden:(BOOL)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UINavigationBarDelegate>)delegate;
-(id)_backgroundView;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(int)state;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_hasBackButton;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(id)_statusBarTintColor;
-(BOOL)isTranslucent;
-(BOOL)isLocked;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)preferredFocusedView;
-(BOOL)_canDrawContent;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)disableAnimation;
-(void)enableAnimation;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(BOOL)_subclassImplementsDrawRect;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)backIndicatorImage;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(UIImage *)backIndicatorTransitionMaskImage;
-(void)setBackIndicatorTransitionMaskImage:(UIImage *)arg1 ;
-(BOOL)_deferShadowToSearchBar;
-(id)_defaultVisualStyleForOrientation:(long long)arg1 ;
-(UINavigationItem *)topItem;
-(UINavigationItem *)backItem;
-(id)_appearanceStorage;
-(void)_updateTitleView;
-(void)updatePrompt;
-(void)_setLeftViews:(id)arg1 rightViews:(id)arg2 ;
-(void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isAlwaysHidden;
-(BOOL)isMinibar;
-(void)setTitleView:(id)arg1 ;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)_shadowView;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2 ;
-(void)_applySPIAppearanceToButtons;
-(void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned long long)arg3 ;
-(long long)_currentBarStyle;
-(void)_updateNavigationBarItemsForStyle:(long long)arg1 ;
-(void)_setNeedsUpdateBackIndicatorImage:(BOOL)arg1 ;
-(void)_updateBackIndicatorImage;
-(id)currentBackButton;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_updateBackgroundColor;
-(id)_effectiveBarTintColor;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1 ;
-(void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg1 ;
-(void)_tintViewAppearanceDidChange;
-(void)_updatePaletteBackgroundIfNecessary;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)_updateBackgroundImage;
-(long long)_activeBarMetrics;
-(BOOL)_wantsLetterpressContent;
-(long long)_defaultBarMetrics;
-(id)_visualStyleForMetrics:(long long)arg1 ;
-(id)_activeVisualStyle;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)drawBackgroundInRect:(CGRect)arg1 withStyle:(long long)arg2 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(void)setTitleVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackIndicatorLeftMargin:(double)arg1 ;
-(BOOL)_subclassImplementsDrawBackgroundInRect;
-(void)_handlePopSwipe:(id)arg1 ;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)_setUpContentFocusContainerGuide;
-(void)_updateOpacity;
-(void)_commonNavBarInit;
-(void)_setDecodedItems:(id)arg1 ;
-(void)_removeItemsFromSuperview:(id)arg1 ;
-(void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2 ;
-(NSDictionary *)titleTextAttributes;
-(void)_reenableUserInteraction;
-(id)_defaultTitleFontWithScaleAdjustment:(double)arg1 ;
-(id)_defaultTitleFontFittingHeight:(double)arg1 withScaleAdjustment:(double)arg2 ;
-(void)_fadeViewOut:(id)arg1 ;
-(void)_pushNavigationItem:(id)arg1 transition:(int)arg2 ;
-(void)_setAnimationIds:(id)arg1 ;
-(id)_effectiveDelegate;
-(void)_startInteractiveNavigationBarTransition;
-(void)pushNavigationItem:(id)arg1 ;
-(NSMutableArray *)_animationIds;
-(void)_updateInteractiveStatusBarTransitionPercent:(double)arg1 isFinished:(BOOL)arg2 didComplete:(BOOL)arg3 completionSpeed:(double)arg4 completionCurve:(long long)arg5 ;
-(long long)_barStyle:(BOOL)arg1 ;
-(BOOL)titleAutoresizesToFit;
-(void)setTitleAutoresizesToFit:(BOOL)arg1 ;
-(BOOL)_hasInvisibleCustomBackgroundImage;
-(BOOL)_barTranslucenceSuppressesAdaptiveBackdrop;
-(BOOL)_barStyleSuppressesAdaptiveBackdrop;
-(BOOL)_customBackgroundImageSuppressesAdaptiveBackdropForPalette;
-(BOOL)_backgroundViewSuppressesAdaptiveBackdrop;
-(BOOL)_customBackgroundImageSuppressesAdaptiveBackdrop;
-(BOOL)_wantsAdaptiveBackdropWhenNotHidden;
-(BOOL)isAnimationEnabled;
-(void)_prepareForPushAnimationWithItems:(id)arg1 ;
-(void)_setBarStyle:(long long)arg1 ;
-(void)_resetBackgroundImageAsNecessary;
-(void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(long long)arg2 ;
-(void)_startBarStyleAnimation:(long long)arg1 withTintColor:(id)arg2 ;
-(void)_crossFadeToBarBackgroundImageForItem:(id)arg1 ;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(void)popNavigationItem;
-(void)_prepareForPopAnimationWithNewTopItem:(id)arg1 ;
-(id)navigationItems;
-(void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(long long)arg2 toItems:(id)arg3 toBarStyle:(long long)arg4 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)items;
-(int)_transitionForOldItems:(id)arg1 newItems:(id)arg2 ;
-(void)_setItems:(id)arg1 transition:(int)arg2 ;
-(void)_setItems:(id)arg1 transition:(int)arg2 reset:(BOOL)arg3 resetOwningRelationship:(BOOL)arg4 ;
-(BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2 ;
-(void)_setItems:(id)arg1 transition:(int)arg2 reset:(BOOL)arg3 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)_addItem:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3 ;
-(BOOL)forceFullHeightInLandscape;
-(long long)effectiveInterfaceOrientation;
-(void)setItems:(NSArray *)arg1 ;
-(id)_nthNavigationItemFromTop:(long long)arg1 ;
-(unsigned long long)_subviewIndexAboveBackground;
-(void)_cancelInteractiveTransition;
-(void)_decrementAnimationCountIfNecessary;
-(id)navigationItemAtPoint:(CGPoint)arg1 ;
-(id)_commonHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(void)_setBackIndicatorPressed:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)_currentBackButtonForNthItemFromTop:(unsigned long long)arg1 ;
-(id)backButtonViewAtPoint:(CGPoint)arg1 ;
-(id)popNavigationItemAnimated:(BOOL)arg1 ;
-(BOOL)_shouldPopForTouchAtPoint:(CGPoint)arg1 ;
-(void)_popForTouchAtPoint:(CGPoint)arg1 ;
-(void)_handleMouseDownAtPoint:(CGPoint)arg1 ;
-(void)_handleMouseUpAtPoint:(CGPoint)arg1 ;
-(void)_setBarPosition:(long long)arg1 ;
-(void)_configurePaletteConstraintsIfNecessary;
-(BOOL)_needsUpdateBackIndicatorImage;
-(void)setBarStyle:(long long)arg1 ;
-(void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2 previousTintColor:(id)arg3 ;
-(void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2 ;
-(void)_customViewChangedForButtonItem:(id)arg1 ;
-(id)_currentLeftViews;
-(id)_currentRightViews;
-(void)_updateNavigationBarItemsForStyle:(long long)arg1 previousTintColor:(id)arg2 ;
-(BOOL)_wantsAdaptiveBackdrop;
-(long long)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(BOOL)_legacyIsTranslucent;
-(BOOL)_modernIsTranslucent;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1 ;
-(void)_fadeViewsIn:(id)arg1 ;
-(CGRect)promptBounds;
-(void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3 ;
-(void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4 ;
-(id)createButtonWithContents:(id)arg1 width:(double)arg2 barStyle:(long long)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5 ;
-(void)_setLeftView:(id)arg1 rightView:(id)arg2 ;
-(BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)arg1 ;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 ;
-(void)_incrementAnimationCountIfNecessary;
-(void)_fadeViewsOut:(id)arg1 ;
-(void)_showLeftRightButtonsAnimationDidFinish:(BOOL)arg1 context:(id)arg2 ;
-(void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(id)currentLeftView;
-(void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(UIColor *)_accessibilityButtonBackgroundTintColor;
-(BOOL)_suppressBackIndicator;
-(id)_effectiveBackIndicatorImage;
-(void)_updateBackIndicatorViewTintColor;
-(void)_layoutBackgroundViewConsideringAdaptiveBackdropAndChangedHeight:(BOOL)arg1 ;
-(void)_barSizeDidChangeAndSoDidHeight:(BOOL)arg1 ;
-(double)topItemAlpha;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned long long)arg4 ;
-(void)_setBackgroundView:(id)arg1 ;
-(void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(id)_effectiveBackIndicatorTransitionMaskImage;
-(double)_backIndicatorClippingMargin;
-(void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(BOOL)arg5 rightMaskImage:(id)arg6 ;
-(double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3 ;
-(void)_navigationAnimationDidFinish:(BOOL)arg1 context:(id)arg2 ;
-(id)_allViews;
-(double)defaultBackButtonAlignmentHeight;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned long long)arg4 returnedIdealWidthOfTextContent:(double*)arg5 availableLayoutWidthForTextContent:(double*)arg6 idealBackButtonWidth:(double*)arg7 ;
-(double)_effectiveBackIndicatorLeftMargin;
-(void)_setActiveBarMetrics:(long long)arg1 ;
-(long long)_barPosition;
-(long long)barPosition;
-(double)_shadowAlpha;
-(void)_setShadowAlpha:(double)arg1 ;
-(void)_setBackgroundImage:(id)arg1 mini:(id)arg2 ;
-(void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3 ;
-(void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 ;
-(void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 ;
-(void)_setButtonTextShadowOffset:(CGSize)arg1 ;
-(void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1 ;
-(id)_backgroundViewForPalette:(id)arg1 ;
-(void)_palette:(id)arg1 isAttaching:(BOOL)arg2 didComplete:(BOOL)arg3 ;
-(long long)_barTranslucence;
-(double)_heightIncludingBackground;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(void)_setWantsLetterpressContent:(BOOL)arg1 ;
-(void)_setBackIndicatorImage:(id)arg1 ;
-(UIImage *)_backIndicatorImage;
-(double)_backIndicatorLeftMargin;
-(long long)_itemStackCount;
-(void)_setAccessibilityButtonBackgroundTintColor:(id)arg1 ;
-(id)backgroundImageForBarMetrics:(long long)arg1 ;
-(double)titleVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(BOOL)_hidesShadow;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(void)_setDeferShadowToSearchBar:(BOOL)arg1 ;
-(void)_setDefaultBarMetrics:(long long)arg1 ;
-(id)_defaultTitleFont;
-(void)setAccessoryView:(id)arg1 animate:(BOOL)arg2 ;
-(void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateInteractiveTransition:(double)arg1 ;
-(void)_finishInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)_cancelInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)_wantsAdaptiveBackdropForPalette;
-(void)_popNestedNavigationItem;
-(void)_pushNestedNavigationItem:(id)arg1 ;
-(void)_setItemsUpToItem:(id)arg1 transition:(int)arg2 ;
-(void)_addItems:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3 ;
-(void)setNavigationItems:(id)arg1 ;
-(void)_cancelInProgressPushOrPop;
-(void)_reenableUserInteractionWhenReadyWithContext:(id)arg1 ;
-(void)_evaluateBackIndicatorForHilightedState:(BOOL)arg1 ofBarButtonItem:(id)arg2 inNavigationItem:(id)arg3 ;
-(long long)_statusBarStyle;
-(void)setForceFullHeightInLandscape:(BOOL)arg1 ;
-(id)buttonItemShadowColor;
-(id)buttonItemTextColor;
-(id)_titleTextColor;
-(UIColor *)barTintColor;
-(void)setRightMargin:(double)arg1 ;
-(id)currentRightView;
-(id)promptView;
-(unsigned)animationDisabledCount;
-(void)drawBackButtonBackgroundInRect:(CGRect)arg1 withStyle:(long long)arg2 pressed:(BOOL)arg3 ;
-(void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 ;
-(void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3 ;
-(void)setButton:(int)arg1 enabled:(BOOL)arg2 ;
-(void)hideButtons;
-(CGRect)availableTitleArea;
-(void)setTopItemAlpha:(double)arg1 ;
-(void)_removeAccessoryView;
-(CGRect)_boundsForPrompt:(id)arg1 inRect:(CGRect)arg2 withFont:(id)arg3 barStyle:(long long)arg4 ;
-(void)_animateOldBackButtonView:(id)arg1 toNewBackButtonView:(id)arg2 duration:(double)arg3 initialFrameForIncomingView:(/*^block*/id)arg4 destinationFrameForOutgoingView:(/*^block*/id)arg5 animationCleanup:(/*^block*/id)arg6 ;
-(void)_fadeAllViewsOut;
-(void)_fadeAllViewsIn;
-(id)_itemStack;
-(void)_navBarButtonPressed:(id)arg1 ;
-(void)_setAutoAdjustTitle:(BOOL)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)_backgroundBackdropStyle;
-(double)_requestedMaxBackButtonWidth;
-(void)_setRequestedMaxBackButtonWidth:(double)arg1 ;
-(NSString *)_backdropViewLayerGroupName;
-(id)_contentFocusContainerGuide;
@end

