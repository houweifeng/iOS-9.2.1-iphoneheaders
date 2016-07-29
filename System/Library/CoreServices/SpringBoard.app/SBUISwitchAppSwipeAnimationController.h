/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol SBDosidoAnimator;
@class BSUIAnimationFactory, SBSceneLayoutAnimationWrapperView, SBWorkspaceApplicationTransitionContext;

@interface SBUISwitchAppSwipeAnimationController : SBUIMainScreenAnimationController {

	BSUIAnimationFactory* _animationFactory;
	id<SBDosidoAnimator> _currentAnimator;
	unsigned long long _currentDirection;
	SBSceneLayoutAnimationWrapperView* _startingView;
	SBSceneLayoutAnimationWrapperView* _targetView;
	SBWorkspaceApplicationTransitionContext* _startingTransitionContext;
	SBWorkspaceApplicationTransitionContext* _targetTransitionContext;
	SBWorkspaceApplicationTransitionContext* _endingTransitionContext;

}

@property (nonatomic,readonly) unsigned long long currentDirection;                                                   //@synthesize currentDirection=_currentDirection - In the implementation block
@property (nonatomic,retain,readonly) SBWorkspaceApplicationTransitionContext * endingTransitionContext;              //@synthesize endingTransitionContext=_endingTransitionContext - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(BOOL)isStepped;
-(id)_newAnimationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 displayMode:(long long)arg3 ;
-(void)_startAnimatingInDirection:(unsigned long long)arg1 ;
-(id)_animationFactory;
-(void)_cleanupAnimation;
-(id)_newStretchTransformerForDirection:(unsigned long long)arg1 ;
-(id)_newDosidoAnimatorForDirection:(unsigned long long)arg1 ;
-(void)_animator:(id)arg1 finishedAnimating:(BOOL)arg2 ;
-(void)startAnimatingInDirection:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)endingTransitionContext;
-(void)dealloc;
-(unsigned long long)currentDirection;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
-(void)_startAnimation;
@end

