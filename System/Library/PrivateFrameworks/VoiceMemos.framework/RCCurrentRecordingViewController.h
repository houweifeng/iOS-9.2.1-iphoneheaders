/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/RCCurrentRecordingViewControllerDelegate.h>
#import <libobjc.A.dylib/RCUIServiceCurrentRecordingViewController.h>

@protocol RCCurrentRecordingViewControllerDelegate;
@class UIColor, RCCurrentRecordingRemoteViewController, RCAVState, NSString;

@interface RCCurrentRecordingViewController : UIViewController <RCCurrentRecordingViewControllerDelegate, RCUIServiceCurrentRecordingViewController> {

	BOOL _screenUpdatesDisabled;
	BOOL _isDisplayingLockscreenInterface;
	UIColor* _presentationBackgroundColor;
	UIColor* _waveformForegroundColor;
	RCCurrentRecordingRemoteViewController* _remoteViewController;
	id<RCCurrentRecordingViewControllerDelegate> _delegate;
	RCAVState* _AVState;

}

@property (assign,nonatomic,__weak) id<RCCurrentRecordingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RCAVState * AVState;                                                       //@synthesize AVState=_AVState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)remoteViewControllerClass;
+(id)serviceViewControllerClassName;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RCCurrentRecordingViewControllerDelegate>)arg1 ;
-(id<RCCurrentRecordingViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(RCAVState *)AVState;
-(void)setAVState:(RCAVState *)arg1 ;
-(void)currentRecordingViewControllerRecordingDidEnd:(id)arg1 ;
-(void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2 ;
-(void)setScreenUpdatesDisabled:(BOOL)arg1 ;
-(void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2 ;
-(void)dismissLockscreenInterface;
-(void)loadCaptureStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_failedToBecomeReadyWithMessage:(id)arg1 ;
-(void)insertRemoteViewController:(id)arg1 ;
-(void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(BOOL)arg2 ;
@end

