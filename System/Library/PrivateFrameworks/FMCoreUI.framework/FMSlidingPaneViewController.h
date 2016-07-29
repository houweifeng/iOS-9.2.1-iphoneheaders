/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <FMCoreUI/FMViewController.h>

@protocol FMSlidingPaneViewControllerDelegate;
@class UIVisualEffect, SlidingPaneViewState, UIViewController, UIView;

@interface FMSlidingPaneViewController : FMViewController {

	BOOL _didHideToolbar;
	UIVisualEffect* _paneVisualEffect;
	id<FMSlidingPaneViewControllerDelegate> _delegate;
	double _animationDuration;
	double _animationSpringDamping;
	double _animationInitialVelocity;
	unsigned long long _animationOptions;
	SlidingPaneViewState* _paneState;
	UIEdgeInsets _paneInsets;
	UIEdgeInsets _paneContentInsets;

}

@property (assign,nonatomic,__weak) id<FMSlidingPaneViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * paneViewController; 
@property (nonatomic,readonly) UIView * paneView; 
@property (assign,nonatomic) UIEdgeInsets paneInsets;                                              //@synthesize paneInsets=_paneInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets paneContentInsets;                                       //@synthesize paneContentInsets=_paneContentInsets - In the implementation block
@property (assign,nonatomic) double animationDuration;                                             //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double animationSpringDamping;                                        //@synthesize animationSpringDamping=_animationSpringDamping - In the implementation block
@property (assign,nonatomic) double animationInitialVelocity;                                      //@synthesize animationInitialVelocity=_animationInitialVelocity - In the implementation block
@property (assign,nonatomic) unsigned long long animationOptions;                                  //@synthesize animationOptions=_animationOptions - In the implementation block
@property (nonatomic,retain) UIVisualEffect * paneVisualEffect;                                    //@synthesize paneVisualEffect=_paneVisualEffect - In the implementation block
@property (getter=isPaneShowing,nonatomic,readonly) BOOL paneShowing; 
@property (nonatomic,retain) SlidingPaneViewState * paneState;                                     //@synthesize paneState=_paneState - In the implementation block
@property (assign,nonatomic) BOOL didHideToolbar;                                                  //@synthesize didHideToolbar=_didHideToolbar - In the implementation block
-(void)setDelegate:(id<FMSlidingPaneViewControllerDelegate>)arg1 ;
-(id<FMSlidingPaneViewControllerDelegate>)delegate;
-(void)setAnimationDuration:(double)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)awakeFromNib;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)traitCollectionForChildViewController:(id)arg1 ;
-(double)animationDuration;
-(unsigned long long)animationOptions;
-(void)setAnimationOptions:(unsigned long long)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)setAnimationSpringDamping:(double)arg1 ;
-(double)animationSpringDamping;
-(void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_paneFrameChanged:(CGRect)arg1 ;
-(UIView *)paneView;
-(UIViewController *)paneViewController;
-(void)commonConfiguration;
-(void)setPaneInsets:(UIEdgeInsets)arg1 ;
-(void)setPaneContentInsets:(UIEdgeInsets)arg1 ;
-(void)setAnimationInitialVelocity:(double)arg1 ;
-(void)setDidHideToolbar:(BOOL)arg1 ;
-(void)_crossDissolveOldPaneState:(id)arg1 newPaneState:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentPaneState:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)_preferredSizeForPaneState:(id)arg1 ;
-(void)didPresentPane:(id)arg1 inRect:(CGRect)arg2 animated:(BOOL)arg3 ;
-(void)_dismissPaneState:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)didHideToolbar;
-(void)dismissPaneViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)paneSizeChanged:(CGRect)arg1 forViewController:(id)arg2 ;
-(id)_paneParentView;
-(UIEdgeInsets)paneInsets;
-(id)_metricsFromEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIVisualEffect *)paneVisualEffect;
-(UIEdgeInsets)paneContentInsets;
-(void)_createPaneViewForState:(id)arg1 ;
-(void)_createPaneContentConstraintsForState:(id)arg1 ;
-(void)willPresentPane:(id)arg1 inRect:(CGRect)arg2 animated:(BOOL)arg3 ;
-(double)animationInitialVelocity;
-(void)willDismissPane:(id)arg1 animated:(BOOL)arg2 ;
-(void)_removeChildViewControllerForState:(id)arg1 ;
-(void)didDismissPane:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPaneVisualEffect:(UIVisualEffect *)arg1 ;
-(void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 withPercent:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPresentingConstraintConstant:(double)arg1 ;
-(void)dismissSegue:(id)arg1 ;
-(void)dismiss:(id)arg1 forEvent:(id)arg2 ;
-(CGSize)_normalizeSize:(CGSize)arg1 ;
-(BOOL)isPaneShowing;
-(SlidingPaneViewState *)paneState;
-(void)setPaneState:(SlidingPaneViewState *)arg1 ;
@end

