/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UIFloatingContentViewDelegate;
@class UIView, _UIFloatingContentSpecialAnimatingView, NSMutableArray, _UIFocusAnimationConfiguration, UIImage;

@interface _UIFloatingContentView : UIView {

	id<_UIFloatingContentViewDelegate> _floatingContentViewDelegate;
	UIView* _shadowView;
	_UIFloatingContentSpecialAnimatingView* _containerView;
	_UIFloatingContentSpecialAnimatingView* _visualEffectContainerView;
	_UIFloatingContentSpecialAnimatingView* _highlightView;
	UIView* _contentView;
	CFDictionaryRef _backgroundColorsByState;
	NSMutableArray* _contentMotionEffects;
	CGPoint _focusDirection;
	CGPoint _contentRotation;
	CGPoint _contentTranslation;
	BOOL _customScale;
	BOOL _symmetricScale;
	BOOL _stretchableShadowImage;
	BOOL _useShadowImage;
	BOOL _shadowEnabled;
	BOOL _contentOpaque;
	BOOL _scalesBackwards;
	BOOL _roundContentWhenDeselected;
	BOOL __disableOutsetShadowPath;
	double _cornerRadius;
	_UIFocusAnimationConfiguration* _focusAnimationConfiguration;
	double _shadowRadius;
	double _shadowOpacity;
	double _shadowVerticalOffset;
	double _unfocusedShadowRadius;
	double _unfocusedShadowOpacity;
	double _unfocusedShadowVerticalOffset;
	UIImage* _shadowImage;
	unsigned long long _controlState;
	long long _highlightStyle;
	/*^block*/id _focusAnimationConfigurationHandler;
	CGPoint _focusScaleAnchorPoint;
	CGSize _shadowSize;
	CGSize _unfocusedShadowExpansion;
	CGSize _shadowExpansion;
	CGSize _asymmetricScaleFactor;
	CGSize _asymmetricFocusedSizeIncrease;
	CGRect _shadowContentsCenter;

}

@property (assign,nonatomic,__weak) id<_UIFloatingContentViewDelegate> floatingContentDelegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIView * visualEffectContainerView; 
@property (assign,nonatomic) double cornerRadius;                                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) double focusedSizeIncrease; 
@property (assign,nonatomic) CGPoint focusScaleAnchorPoint;                                                  //@synthesize focusScaleAnchorPoint=_focusScaleAnchorPoint - In the implementation block
@property (nonatomic,copy) _UIFocusAnimationConfiguration * focusAnimationConfiguration;                     //@synthesize focusAnimationConfiguration=_focusAnimationConfiguration - In the implementation block
@property (assign,nonatomic) BOOL useShadowImage;                                                            //@synthesize useShadowImage=_useShadowImage - In the implementation block
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;                                      //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                                              //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                                            //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                                           //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowVerticalOffset;                                                    //@synthesize shadowVerticalOffset=_shadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double unfocusedShadowRadius;                                                   //@synthesize unfocusedShadowRadius=_unfocusedShadowRadius - In the implementation block
@property (assign,nonatomic) double unfocusedShadowOpacity;                                                  //@synthesize unfocusedShadowOpacity=_unfocusedShadowOpacity - In the implementation block
@property (assign,nonatomic) double unfocusedShadowVerticalOffset;                                           //@synthesize unfocusedShadowVerticalOffset=_unfocusedShadowVerticalOffset - In the implementation block
@property (assign,nonatomic) CGSize unfocusedShadowExpansion;                                                //@synthesize unfocusedShadowExpansion=_unfocusedShadowExpansion - In the implementation block
@property (assign,nonatomic) CGSize shadowExpansion;                                                         //@synthesize shadowExpansion=_shadowExpansion - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) CGRect shadowContentsCenter;                                                    //@synthesize shadowContentsCenter=_shadowContentsCenter - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                                                //@synthesize controlState=_controlState - In the implementation block
@property (assign,nonatomic) BOOL clipsContentToBounds; 
@property (assign,nonatomic) long long highlightStyle;                                                       //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,getter=isContentOpaque,nonatomic) BOOL contentOpaque;                                      //@synthesize contentOpaque=_contentOpaque - In the implementation block
@property (assign,nonatomic) BOOL scalesBackwards;                                                           //@synthesize scalesBackwards=_scalesBackwards - In the implementation block
@property (assign,nonatomic) BOOL roundContentWhenDeselected;                                                //@synthesize roundContentWhenDeselected=_roundContentWhenDeselected - In the implementation block
@property (assign,nonatomic) CGSize asymmetricScaleFactor;                                                   //@synthesize asymmetricScaleFactor=_asymmetricScaleFactor - In the implementation block
@property (assign,nonatomic) CGSize asymmetricFocusedSizeIncrease;                                           //@synthesize asymmetricFocusedSizeIncrease=_asymmetricFocusedSizeIncrease - In the implementation block
@property (assign,nonatomic) BOOL _disableOutsetShadowPath;                                                  //@synthesize _disableOutsetShadowPath=__disableOutsetShadowPath - In the implementation block
@property (nonatomic,copy) id focusAnimationConfigurationHandler;                                            //@synthesize focusAnimationConfigurationHandler=_focusAnimationConfigurationHandler - In the implementation block
+(Class)layerClass;
+(id)_defaultFocusAnimationConfiguration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(double)cornerRadius;
-(BOOL)canBecomeFocused;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setShadowContentsCenter:(CGRect)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowVerticalOffset:(double)arg1 ;
-(void)setShadowExpansion:(CGSize)arg1 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(void)_updateShadowLayer;
-(void)_setShadowImageIfNeeded;
-(void)_layoutShadow;
-(BOOL)isShadowEnabled;
-(CGSize)shadowSize;
-(double)shadowRadius;
-(BOOL)_disableOutsetShadowPath;
-(CGRect)shadowContentsCenter;
-(CGPathRef)_shadowPathForSize:(CGSize)arg1 radius:(double)arg2 ;
-(void)setShadowSize:(CGSize)arg1 ;
-(double)shadowOpacity;
-(double)shadowVerticalOffset;
-(CGSize)shadowExpansion;
-(void)set_disableOutsetShadowPath:(BOOL)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(_UIFocusAnimationConfiguration *)focusAnimationConfiguration;
-(void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(unsigned long long)controlState;
-(void)setFloatingContentDelegate:(id<_UIFloatingContentViewDelegate>)arg1 ;
-(double)scaleFactor;
-(void)setContentMotionRotation:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)setFocusAnimationConfiguration:(_UIFocusAnimationConfiguration *)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRoundContentWhenDeselected:(BOOL)arg1 ;
-(void)setUnfocusedShadowVerticalOffset:(double)arg1 ;
-(void)setClipsContentToBounds:(BOOL)arg1 ;
-(UIView *)visualEffectContainerView;
-(void)setControlState:(unsigned long long)arg1 ;
-(void)setFocusScaleAnchorPoint:(CGPoint)arg1 ;
-(void)setUseShadowImage:(BOOL)arg1 ;
-(void)setUnfocusedShadowOpacity:(double)arg1 ;
-(void)setUnfocusedShadowRadius:(double)arg1 ;
-(void)setUnfocusedShadowExpansion:(CGSize)arg1 ;
-(unsigned long long)_primaryStateForState:(unsigned long long)arg1 ;
-(BOOL)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateTransformForPrimaryState:(unsigned long long)arg1 ;
-(void)addContentMotionEffect:(id)arg1 ;
-(BOOL)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateBackgroundViewForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateScaleFactor;
-(BOOL)useShadowImage;
-(double)unfocusedShadowRadius;
-(CGSize)unfocusedShadowExpansion;
-(void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(id<_UIFloatingContentViewDelegate>)floatingContentDelegate;
-(void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1 ;
-(void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1 ;
-(void)_uninstallContentMotionEffects;
-(void)_installContentMotionEffects;
-(void)setShadowImage:(id)arg1 stretchable:(BOOL)arg2 ;
-(void)setAsymmetricScaleFactor:(CGSize)arg1 ;
-(void)setAsymmetricFocusedSizeIncrease:(CGSize)arg1 ;
-(double)focusedSizeIncrease;
-(CGSize)asymmetricFocusedSizeIncrease;
-(id)backgroundColorForState:(unsigned long long)arg1 ;
-(void)removeContentMotionEffect:(id)arg1 ;
-(void)setScalesBackwards:(BOOL)arg1 ;
-(BOOL)clipsContentToBounds;
-(double)_effectiveShadowRadius;
-(void)setScaleFactor:(double)arg1 ;
-(CGPoint)focusScaleAnchorPoint;
-(double)unfocusedShadowOpacity;
-(double)unfocusedShadowVerticalOffset;
-(long long)highlightStyle;
-(void)setHighlightStyle:(long long)arg1 ;
-(BOOL)isContentOpaque;
-(void)setContentOpaque:(BOOL)arg1 ;
-(BOOL)scalesBackwards;
-(BOOL)roundContentWhenDeselected;
-(CGSize)asymmetricScaleFactor;
-(id)focusAnimationConfigurationHandler;
-(void)setFocusAnimationConfigurationHandler:(id)arg1 ;
@end

