/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIWindow, UIImageView, NSMapTable, UIScreen;

@interface _UIIdleModeController : NSObject {

	BOOL _didApplyVisualEffects;
	UIWindow* _backgroundWindow;
	UIImageView* _vignetteView;
	BOOL _keyWindowAllowedGroupBlending;
	UIWindow* _keyWindow;
	NSMapTable* _viewsToCAFilters;
	NSMapTable* _viewsToAttributes;
	NSMapTable* _viewsToOriginalAttributes;
	BOOL _idleModeEnabled;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;                                        //@synthesize screen=_screen - In the implementation block
@property (assign,getter=isIdleModeEnabled,nonatomic) BOOL idleModeEnabled;              //@synthesize idleModeEnabled=_idleModeEnabled - In the implementation block
-(void)dealloc;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(double)_presentationAnimationDuration;
-(double)_dismissalAnimationDuration;
-(void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2 ;
-(void)_completeDismissal;
-(void)_enterIdleMode;
-(void)_exitIdleMode;
-(BOOL)_recordLayoutAttributesStartingAtView:(id)arg1 ;
-(void)_prepareForPresentationWithKeyWindow:(id)arg1 focusedView:(id)arg2 ;
-(void)_animatePresentation;
-(void)_animateDismissal;
-(id)_originalAttributesForView:(id)arg1 comparedToIdleModeAttributes:(id)arg2 ;
-(id)_vignetteImageAroundFocusedFrame:(CGRect)arg1 ;
-(void)_applyPresentationLayoutAttributesToViews;
-(double)_vignetteAlpha;
-(double)_dimmingOverlayWhiteValue;
-(void)_applyDismissalLayoutAttributesToViews;
-(BOOL)isIdleModeEnabled;
@end

