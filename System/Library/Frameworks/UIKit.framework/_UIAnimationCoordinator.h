/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSMutableDictionary, _UIViewControllerOneToOneTransitionContext, UIPercentDrivenInteractiveTransition, UIView, UIViewController, NSString;

@interface _UIAnimationCoordinator : NSObject <UIViewControllerAnimatedTransitioning> {

	NSMutableDictionary* _stash;
	_UIViewControllerOneToOneTransitionContext* _transitionContext;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;
	double _duration;
	/*^block*/id _preperation;
	/*^block*/id _animator;
	/*^block*/id _completion;
	UIView* _containerView;
	UIViewController* _viewController;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,retain,readonly) _UIViewControllerOneToOneTransitionContext * transitionContext; 
@property (assign,nonatomic) double duration;                                                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id preperation;                                                                         //@synthesize preperation=_preperation - In the implementation block
@property (nonatomic,copy) id animator;                                                                            //@synthesize animator=_animator - In the implementation block
@property (nonatomic,copy) id completion;                                                                          //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                                                                    //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                                                                      //@synthesize endFrame=_endFrame - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * stash; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)containerView;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(_UIViewControllerOneToOneTransitionContext *)transitionContext;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setAnimator:(id)arg1 ;
-(NSMutableDictionary *)stash;
-(void)animateInteractively;
-(void)finishInteractiveAnimation;
-(void)cancelInteractiveAnimation;
-(void)updateInteractiveProgress:(double)arg1 ;
-(void)animate;
-(CGRect)startFrame;
-(void)setPreperation:(id)arg1 ;
-(id)animator;
-(void)_updateTransitionContext;
-(id)preperation;
@end

