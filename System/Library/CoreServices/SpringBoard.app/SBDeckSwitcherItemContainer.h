/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBDeckSwitcherItemContainerDelegate;
@class SBDeckSwitcherPageView, SBDisplayItem, UIScrollView, UIView, SBDeckSwitcherIconImageContainerView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, SBAppSwitcherSettings, NSString;

@interface SBDeckSwitcherItemContainer : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	SBDeckSwitcherPageView* _pageView;
	SBDisplayItem* _displayItem;
	id<SBDeckSwitcherItemContainerDelegate> _delegate;
	UIScrollView* _verticalScrollView;
	UIView* _iconAndLabelContainer;
	SBDeckSwitcherIconImageContainerView* _iconImageView;
	UILabel* _iconTitle;
	double _killVelocity;
	double _contentCornerRadiusProgress;
	double _contentBlurRadiusProgress;
	double _contentPageViewScale;
	double _titleOpacity;
	double _titleAndIconOpacity;
	UILongPressGestureRecognizer* _pressDownGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	SBAppSwitcherSettings* _settings;
	BOOL _disableBlurInputBoundsUpdatesForDismissal;
	BOOL _blurEnabled;
	double _lastBlurRadius;
	CGRect _lastBlurFrame;
	double _unobscuredMargin;

}

@property (nonatomic,retain) SBDeckSwitcherPageView * pageView;                               //@synthesize pageView=_pageView - In the implementation block
@property (assign,nonatomic) double contentCornerRadiusProgress;                              //@synthesize contentCornerRadiusProgress=_contentCornerRadiusProgress - In the implementation block
@property (assign,nonatomic) double contentBlurRadiusProgress;                                //@synthesize contentBlurRadiusProgress=_contentBlurRadiusProgress - In the implementation block
@property (assign,nonatomic) double contentPageViewScale;                                     //@synthesize contentPageViewScale=_contentPageViewScale - In the implementation block
@property (assign,nonatomic) double titleAndIconOpacity;                                      //@synthesize titleAndIconOpacity=_titleAndIconOpacity - In the implementation block
@property (assign,nonatomic) double titleOpacity;                                             //@synthesize titleOpacity=_titleOpacity - In the implementation block
@property (assign,nonatomic) double unobscuredMargin;                                         //@synthesize unobscuredMargin=_unobscuredMargin - In the implementation block
@property (assign,nonatomic) double darkeningAlpha; 
@property (assign,nonatomic) double killGestureHysteresis; 
@property (nonatomic,retain,readonly) SBDisplayItem * displayItem;                            //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,readonly) id<SBDeckSwitcherItemContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double killingProgress; 
@property (assign,nonatomic) BOOL shouldClipShadow; 
@property (assign,nonatomic) CGRect shadowClippingFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredRestingVisibleMarginForBounds:(CGRect)arg1 ;
+(double)spacingBetweenIconAndLabel;
+(double)spacingBetweenSnapshotAndIcon;
+(double)spacingBetweenEdgeAndIcon;
+(double)iconSize;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(void)viewDismissing:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4 ;
-(void)updateTransitionProgress:(double)arg1 ;
-(void)interactionDidEnd:(BOOL)arg1 ;
-(void)transitionDidEnd:(BOOL)arg1 forPresentation:(BOOL)arg2 ;
-(void)setDarkeningAlpha:(double)arg1 ;
-(double)darkeningAlpha;
-(void)setShouldClipShadow:(BOOL)arg1 ;
-(BOOL)shouldClipShadow;
-(void)setShadowClippingFrame:(CGRect)arg1 ;
-(CGRect)shadowClippingFrame;
-(SBDisplayItem *)displayItem;
-(double)contentBlurRadiusProgress;
-(void)setContentBlurRadiusProgress:(double)arg1 ;
-(void)setTitleOpacity:(double)arg1 ;
-(void)setTitleAndIconOpacity:(double)arg1 ;
-(void)setContentCornerRadiusProgress:(double)arg1 ;
-(void)setContentPageViewScale:(double)arg1 ;
-(void)setKillGestureHysteresis:(double)arg1 ;
-(double)killingProgress;
-(void)setUnobscuredMargin:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayItem:(id)arg2 delegate:(id)arg3 ;
-(id)_createScrollView;
-(CGRect)_frameForIconTitleViewContainer;
-(CGRect)_blurFrame;
-(void)_handlePageViewPressDown:(id)arg1 ;
-(void)_handlePageViewTap:(id)arg1 ;
-(void)_applyVisualStyleToSubviews;
-(CGRect)_frameForPageView;
-(void)_addIconSubview;
-(void)_removeIconSubview;
-(CGRect)_frameForIconView;
-(CGRect)_frameForIconTitle:(id)arg1 ;
-(CGAffineTransform)_transformForIconTitleViewContainer;
-(void)_updateBlur;
-(void)_ensureSubviewOrder;
-(double)_inverseScaleTransformFactor;
-(double)_scaleTransformFactor;
-(double)_effectiveTitleAndIconOpacityConsideringKillProgress;
-(double)killGestureHysteresis;
-(double)contentCornerRadiusProgress;
-(double)titleOpacity;
-(double)titleAndIconOpacity;
-(double)contentPageViewScale;
-(double)unobscuredMargin;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<SBDeckSwitcherItemContainerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(SBDeckSwitcherPageView *)pageView;
-(void)setPageView:(SBDeckSwitcherPageView *)arg1 ;
-(CGRect)_frameForScrollView;
@end

