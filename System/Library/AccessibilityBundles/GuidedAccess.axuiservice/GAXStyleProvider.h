/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class NSBundle, NSMutableDictionary, UIColor, UIFont, NSDictionary, UIImage;

@interface GAXStyleProvider : NSObject {

	NSBundle* _bundle;
	NSMutableDictionary* _cachedStyleProperties;
	UIOffset _timeRestrictionsFeatureViewTextOffset;

}

@property (nonatomic,readonly) double defaultAnimationDuration; 
@property (nonatomic,readonly) double fastAnimationDuration; 
@property (nonatomic,readonly) double applicationViewRoundedCornerRadius; 
@property (nonatomic,readonly) BOOL reduceTransparencyAndGraphics; 
@property (nonatomic,readonly) UIColor * defaultButtonTitleColor; 
@property (nonatomic,readonly) UIColor * defaultLabelTextColor; 
@property (nonatomic,readonly) UIColor * defaultLabelBackgroundColor; 
@property (nonatomic,readonly) UIFont * workspaceNavigationBarTitleFont; 
@property (nonatomic,readonly) double workspaceNavigationBarDismissButtonMinimumWidth; 
@property (nonatomic,readonly) BOOL workspaceNavigationBarNeedsMiniMetricsInitialized; 
@property (nonatomic,readonly) NSDictionary * workspaceNavigationBarButtonTextAttributes; 
@property (nonatomic,readonly) UIFont * workspaceInstructionsLabelFont; 
@property (nonatomic,readonly) UIEdgeInsets workspaceInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) BOOL workspaceInstructionsLabelShouldBeDisplayed; 
@property (nonatomic,readonly) BOOL workspaceInstructionsLabelShouldUseCompactTextInPortraitOrientation; 
@property (nonatomic,readonly) BOOL workspaceInstructionsLabelShouldUseCompactTextInLandscapeOrientation; 
@property (nonatomic,readonly) UIColor * hostedApplicationShadowColor; 
@property (nonatomic,readonly) double interestAreaViewSnapAnimationDuration; 
@property (nonatomic,readonly) UIColor * interestAreaViewBackgroundColor; 
@property (nonatomic,readonly) UIImage * interestAreaViewBackgroundHatchingTexture; 
@property (nonatomic,readonly) double interestAreaViewBackgroundHatchingTextureAlpha; 
@property (nonatomic,readonly) double interestAreaViewBackgroundStripePatternAlpha; 
@property (nonatomic,readonly) UIColor * interestAreaViewFingerPathStrokeColor; 
@property (nonatomic,readonly) double interestAreaViewFingerPathLineWidth; 
@property (nonatomic,readonly) UIImage * interestAreaViewCloseButtonImage; 
@property (nonatomic,readonly) UIImage * interestAreaViewResizingKnobButtonImage; 
@property (nonatomic,readonly) CGSize minimumSizeForInterestAreaPath; 
@property (nonatomic,readonly) double marginOfErrorForDecidingToMergeInterestAreaPaths; 
@property (nonatomic,readonly) double featureViewControllerHeight; 
@property (nonatomic,readonly) double featureViewControllerMiniHeight; 
@property (nonatomic,readonly) UIFont * featureViewControllerInstructionsFont; 
@property (nonatomic,readonly) UIColor * featureViewControllerInstructionsColor; 
@property (nonatomic,readonly) double featureViewControllerInstructionsHorizontalOffset; 
@property (nonatomic,readonly) double featureViewControllerInstructionsMiniHorizontalOffset; 
@property (nonatomic,readonly) double featureViewControllerLandscapeGutterWidth; 
@property (nonatomic,readonly) double featureViewControllerMinimimGutterWidth; 
@property (nonatomic,readonly) double featureViewControllerMinimumHorizontalSpacing; 
@property (nonatomic,readonly) UIFont * featureViewControllerOptionsButtonFont; 
@property (nonatomic,readonly) UIOffset featureViewControllerOptionsButtonMiniOffset; 
@property (nonatomic,readonly) UIOffset featureViewControllerOptionsButtonOffset; 
@property (nonatomic,readonly) double featureViewControllerOptionsButtonTitleHorizontalPadding; 
@property (nonatomic,readonly) UIFont * featureViewControllerOptionsCellTextFont; 
@property (nonatomic,readonly) double featureViewControllerPortraitGutterWidth; 
@property (nonatomic,readonly) double featureViewControllerVerticalOffset; 
@property (nonatomic,readonly) UIFont * featureViewDetailTextFont; 
@property (nonatomic,readonly) UIEdgeInsets featureViewFrameEdgeInsets; 
@property (nonatomic,readonly) UIColor * featureViewIconColor; 
@property (nonatomic,readonly) double featureViewIconCornerRadius; 
@property (nonatomic,readonly) CGSize featureViewMaximumIconSize; 
@property (nonatomic,readonly) double featureViewMinimumHeight; 
@property (nonatomic,readonly) UIFont * featureViewOptionsButtonFont; 
@property (nonatomic,readonly) double featureViewOptionsButtonHeight; 
@property (nonatomic,readonly) UIColor * featureViewOptionsButtonLineColor; 
@property (nonatomic,readonly) double featureViewOptionsButtonLineWidth; 
@property (nonatomic,readonly) UIOffset featureViewOptionsButtonOffset; 
@property (nonatomic,readonly) double featureViewOptionsButtonTitleHorizontalPadding; 
@property (nonatomic,readonly) UIColor * featureViewTextColor; 
@property (nonatomic,readonly) UIFont * featureViewTextFont; 
@property (nonatomic,readonly) double featureViewTextHorizontalPadding; 
@property (nonatomic,readonly) UIOffset featureViewToggleOffset; 
@property (nonatomic,readonly) UIImage * appFeatureViewDefineIcon; 
@property (nonatomic,readonly) CGSize appFeatureViewIconSize; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewHomeIcon; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewLockIcon; 
@property (nonatomic,readonly) UIImage * hardwareFeatureViewVolumeIcon; 
@property (nonatomic,readonly) UIImage * timeRestrictionsFeatureViewTimerIcon; 
@property (nonatomic,readonly) UIOffset timeRestrictionsFeatureViewTextOffset;                                         //@synthesize timeRestrictionsFeatureViewTextOffset=_timeRestrictionsFeatureViewTextOffset - In the implementation block
@property (nonatomic,readonly) UIOffset optionsFeatureViewTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewKeyboardIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewKeyboardTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewMotionIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewMotionTextOffset; 
@property (nonatomic,readonly) UIImage * systemFeatureViewTouchIcon; 
@property (nonatomic,readonly) UIOffset systemFeatureViewTouchTextOffset; 
@property (nonatomic,readonly) UIColor * optionsDoneButtonBackgroundColor; 
@property (nonatomic,readonly) UIColor * optionsDoneButtonBackgroundHighlightedColor; 
@property (nonatomic,readonly) UIFont * optionsDoneButtonFont; 
@property (nonatomic,readonly) double optionsDoneButtonHeight; 
@property (nonatomic,readonly) UIColor * optionsViewBackgroundDimmingColor; 
@property (nonatomic,readonly) double optionsViewFeaturesContentViewGradientHeight; 
@property (nonatomic,readonly) double optionsViewSeparatorHeight; 
@property (nonatomic,readonly) double optionsViewSeparatorHorizontalPadding; 
@property (nonatomic,readonly) double optionsViewSeparatorVerticalPadding; 
@property (nonatomic,retain) NSBundle * bundle;                                                                        //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedStyleProperties;                                              //@synthesize cachedStyleProperties=_cachedStyleProperties - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(UIColor *)defaultLabelBackgroundColor;
-(double)featureViewOptionsButtonHeight;
-(UIColor *)featureViewIconColor;
-(id)_lightLabelFontWithSize:(double)arg1 ;
-(id)_mediumLabelFontWithSize:(double)arg1 ;
-(id)_regularLabelFontWithSize:(double)arg1 ;
-(NSMutableDictionary *)cachedStyleProperties;
-(void)setCachedStyleProperties:(NSMutableDictionary *)arg1 ;
-(UIColor *)defaultButtonTitleColor;
-(double)fastAnimationDuration;
-(id)_boldLabelFontWithSize:(double)arg1 ;
-(UIImage *)hardwareFeatureViewVolumeIcon;
-(BOOL)workspaceInstructionsLabelShouldUseCompactTextInLandscapeOrientation;
-(UIOffset)systemFeatureViewMotionTextOffset;
-(UIImage *)systemFeatureViewTouchIcon;
-(UIImage *)appFeatureViewDefineIcon;
-(double)applicationViewRoundedCornerRadius;
-(double)featureViewOptionsButtonLineWidth;
-(UIColor *)featureViewOptionsButtonLineColor;
-(double)interestAreaViewBackgroundStripePatternAlpha;
-(id)_cachedIconWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(UIColor *)interestAreaViewBackgroundColor;
-(UIImage *)interestAreaViewBackgroundHatchingTexture;
-(double)interestAreaViewBackgroundHatchingTextureAlpha;
-(UIImage *)interestAreaViewResizingKnobButtonImage;
-(UIImage *)interestAreaViewCloseButtonImage;
-(double)interestAreaViewFingerPathLineWidth;
-(UIColor *)interestAreaViewFingerPathStrokeColor;
-(double)interestAreaViewSnapAnimationDuration;
-(double)marginOfErrorForDecidingToMergeInterestAreaPaths;
-(CGSize)minimumSizeForInterestAreaPath;
-(BOOL)workspaceNavigationBarNeedsMiniMetricsInitialized;
-(BOOL)workspaceInstructionsLabelShouldBeDisplayed;
-(UIFont *)workspaceInstructionsLabelFont;
-(UIEdgeInsets)hostedApplicationScaledFrameEdgeInsetsForInterfaceOrientation:(long long)arg1 ;
-(UIEdgeInsets)workspaceInstructionsLabelEdgeInsets;
-(UIFont *)workspaceNavigationBarTitleFont;
-(NSDictionary *)workspaceNavigationBarButtonTextAttributes;
-(double)workspaceNavigationBarDismissButtonMinimumWidth;
-(UIColor *)hostedApplicationShadowColor;
-(double)featureViewIconCornerRadius;
-(BOOL)reduceTransparencyAndGraphics;
-(CGSize)appFeatureViewIconSize;
-(UIOffset)optionsFeatureViewTextOffset;
-(UIImage *)hardwareFeatureViewHomeIcon;
-(double)featureViewControllerVerticalOffset;
-(double)featureViewControllerLandscapeGutterWidth;
-(double)featureViewControllerPortraitGutterWidth;
-(double)featureViewControllerMinimimGutterWidth;
-(double)featureViewControllerMinimumHorizontalSpacing;
-(double)featureViewControllerInstructionsMiniHorizontalOffset;
-(double)featureViewControllerInstructionsHorizontalOffset;
-(UIOffset)featureViewControllerOptionsButtonMiniOffset;
-(UIOffset)featureViewControllerOptionsButtonOffset;
-(double)featureViewControllerMiniHeight;
-(double)featureViewControllerHeight;
-(UIOffset)timeRestrictionsFeatureViewTextOffset;
-(UIFont *)featureViewControllerInstructionsFont;
-(UIColor *)featureViewControllerInstructionsColor;
-(UIFont *)featureViewControllerOptionsButtonFont;
-(double)featureViewControllerOptionsButtonTitleHorizontalPadding;
-(UIColor *)optionsViewBackgroundDimmingColor;
-(UIEdgeInsets)featureViewFrameEdgeInsets;
-(double)optionsViewSeparatorVerticalPadding;
-(double)featureViewMinimumHeight;
-(double)optionsViewSeparatorHeight;
-(double)optionsViewSeparatorHorizontalPadding;
-(double)optionsDoneButtonHeight;
-(double)optionsViewFeaturesContentViewGradientHeight;
-(UIColor *)optionsDoneButtonBackgroundColor;
-(UIFont *)optionsDoneButtonFont;
-(UIColor *)optionsDoneButtonBackgroundHighlightedColor;
-(UIFont *)featureViewControllerOptionsCellTextFont;
-(UIImage *)timeRestrictionsFeatureViewTimerIcon;
-(UIFont *)featureViewOptionsButtonFont;
-(UIFont *)featureViewTextFont;
-(UIOffset)featureViewOptionsButtonOffset;
-(double)featureViewOptionsButtonTitleHorizontalPadding;
-(UIOffset)featureViewToggleOffset;
-(CGSize)featureViewMaximumIconSize;
-(UIColor *)featureViewTextColor;
-(UIFont *)featureViewDetailTextFont;
-(double)featureViewTextHorizontalPadding;
-(UIOffset)systemFeatureViewTouchTextOffset;
-(BOOL)workspaceInstructionsLabelShouldUseCompactTextInPortraitOrientation;
-(UIImage *)hardwareFeatureViewLockIcon;
-(UIImage *)systemFeatureViewKeyboardIcon;
-(UIImage *)systemFeatureViewMotionIcon;
-(UIOffset)systemFeatureViewKeyboardTextOffset;
-(void)dealloc;
-(id)init;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(UIColor *)defaultLabelTextColor;
-(double)defaultAnimationDuration;
-(id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1 ;
-(void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
@end

