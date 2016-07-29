/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFDynamicBarAnimatorDelegate;
@class CADisplayLink;

@interface _SFDynamicBarAnimator : NSObject {

	double _topBarHeightForState[2];
	double _bottomBarOffsetForState[2];
	BOOL _dragging;
	CADisplayLink* _displayLink;
	double _targetTopBarHeight;
	double _unroundedTopBarHeight;
	double _lastUnroundedTopBarHeight;
	BOOL _didHideBarsByMoving;
	BOOL _didHideOrShowBarsExplicitly;
	double _lastOffset;
	BOOL _inSteadyState;
	long long _state;
	double _topBarHeight;
	double _bottomBarOffset;
	double _minimumTopBarHeight;
	double _maximumBottomBarOffset;
	id<_SFDynamicBarAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long targetState; 
@property (nonatomic,readonly) double topBarHeight;                                          //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) double bottomBarOffset;                                       //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) double minimumTopBarHeight;                                     //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic) double maximumBottomBarOffset;                                  //@synthesize maximumBottomBarOffset=_maximumBottomBarOffset - In the implementation block
@property (assign,nonatomic,__weak) id<_SFDynamicBarAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_SFDynamicBarAnimatorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<_SFDynamicBarAnimatorDelegate>)delegate;
-(long long)state;
-(long long)targetState;
-(void)_updateOutputs;
-(void)_displayLinkFired:(id)arg1 ;
-(BOOL)canTransitionToState:(long long)arg1 ;
-(void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(double)_constrainTopBarHeight:(double)arg1 ;
-(double)_bottomBarOffsetForTopBarHeight:(double)arg1 ;
-(void)_setInSteadyState:(BOOL)arg1 ;
-(void)_transitionToSteadyState;
-(void)_moveBarsWithDelta:(double)arg1 ;
-(void)beginDraggingWithOffset:(double)arg1 ;
-(void)updateDraggingWithOffset:(double)arg1 ;
-(void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2 ;
-(void)setTopBarHeight:(double)arg1 forState:(long long)arg2 ;
-(void)setBottomBarOffset:(double)arg1 forState:(long long)arg2 ;
-(void)setMinimumTopBarHeight:(double)arg1 ;
-(void)setMaximumBottomBarOffset:(double)arg1 ;
-(double)topBarHeight;
-(double)bottomBarOffset;
-(double)minimumTopBarHeight;
-(double)maximumBottomBarOffset;
-(void)_updateDisplayLink;
@end

