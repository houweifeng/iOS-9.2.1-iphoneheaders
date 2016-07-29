/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBWorkspaceApplication;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController {

	UIView* _staticAppView;
	UIView* _hostView;

}

@property (nonatomic,retain,readonly) SBWorkspaceApplication * app; 
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_setupStartDependencies;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(BOOL)_shouldDismissBanner;
-(BOOL)_willAnimate;
-(void)_willBeginWaitingForStartDependencies;
-(void)_hideAppHostView;
-(void)dealloc;
-(SBWorkspaceApplication *)app;
-(void)_startAnimation;
@end
