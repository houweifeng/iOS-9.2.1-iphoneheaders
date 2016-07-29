/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAlertManager;

@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)dealloc;
-(double)animationDuration;
-(void)_startAnimation;
@end

