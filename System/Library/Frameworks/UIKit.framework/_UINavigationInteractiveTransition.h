/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UINavigationInteractiveTransitionBase.h>

@class UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	UIScreenEdgePanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(void)dealloc;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(void)startInteractiveTransition;
-(void)setNotInteractiveTransition;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)gestureRecognizerView;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_configureNavigationGesture;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanGestureRecognizer;
@end

