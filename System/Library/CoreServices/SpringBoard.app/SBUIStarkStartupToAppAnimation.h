/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupAnimation.h>

@class FBWindowContextHostManager, UIView, UIStatusBar;

@interface SBUIStarkStartupToAppAnimation : SBUIStarkStartupAnimation {

	FBWindowContextHostManager* _contextHostManager;
	UIView* _viewToAnimate;
	UIStatusBar* _fakeStatusBar;
	BOOL _finished;

}
-(void)_cleanupAnimation;
-(void)_reallyPrepareAnimation;
-(void)_finishedAnimation:(BOOL)arg1 ;
-(id)_createViewToAnimate;
-(void)_cancelAnimation;
-(void)_setupStartDependencies;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(void)dealloc;
-(void)_startAnimation;
@end

