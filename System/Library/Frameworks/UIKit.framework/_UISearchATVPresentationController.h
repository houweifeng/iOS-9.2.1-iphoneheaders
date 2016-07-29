/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISearchPresentationController.h>

@class UIVisualEffectView;

@interface _UISearchATVPresentationController : _UISearchPresentationController {

	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(long long)adaptivePresentationStyle;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)searchBarToBecomeTopAttached;
-(double)statusBarAdjustment;
-(void)setContentVisible:(BOOL)arg1 ;
-(double)resultsControllerContentOffset;
-(BOOL)shouldAccountForStatusBar;
-(id)adaptivePresentationController;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(CGRect)finalFrameForContainerView;
-(BOOL)animatorShouldSizeResultsContainerView;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(id)backgroundObscuringView;
-(void)showBackgroundObscuringView;
-(void)hideBackgroundObscuringView;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI33)arg1 ;
@end

