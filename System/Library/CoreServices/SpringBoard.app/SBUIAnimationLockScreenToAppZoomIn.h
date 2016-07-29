/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, SBWindowSelfHostWrapper, UIView, NSMutableArray, SBAppStatusBarSettingsAssertion, SBUILockScreenNotificationAnimationHandler;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	SBWindowSelfHostWrapper* _layoutViewControllerHostWrapper;
	SBWindowSelfHostWrapper* _pipWindowWrapper;
	UIView* _viewToAnimate;
	NSMutableArray* _appsRequiringHostView;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _finishedNotificationAnimations;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBUILockScreenNotificationAnimationHandler* _notificationAnimationHandler;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(id)_lockScreenViewController;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(void)_doAnimation:(/*^block*/id)arg1 ;
-(void)_noteNotificationAnimationsDidFinish;
-(void)_finishedZooming;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)_willSetupStartDependencies;
-(BOOL)isReasonableMomentToInterrupt;
-(void)dealloc;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

