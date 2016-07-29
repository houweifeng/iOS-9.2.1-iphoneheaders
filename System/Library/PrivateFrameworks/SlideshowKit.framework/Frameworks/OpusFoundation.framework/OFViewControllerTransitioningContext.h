/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(id)containerView;
-(BOOL)isInteractive;
-(void)completeTransition:(BOOL)arg1;
-(void)startInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)initiallyInteractive;
-(double)progress;
-(BOOL)isCompleting;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;
-(BOOL)isRubberBanding;
-(double)progressVelocity;
-(BOOL)wasCancelled;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;

@end

