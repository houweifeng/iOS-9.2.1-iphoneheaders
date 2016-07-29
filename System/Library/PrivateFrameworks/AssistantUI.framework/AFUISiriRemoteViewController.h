/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SVSSiriViewControllerHosting.h>

@protocol AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate;
@class AFApplicationInfo, NSString;

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {

	id<AFUISiriRemoteViewControllerDataSource> _dataSource;
	id<AFUISiriRemoteViewControllerDelegate> _delegate;
	AFApplicationInfo* _viewServiceApplicationInfo;

}

@property (assign,nonatomic,__weak) id<AFUISiriRemoteViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriRemoteViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AFApplicationInfo * viewServiceApplicationInfo;                            //@synthesize viewServiceApplicationInfo=_viewServiceApplicationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDataSource:(id<AFUISiriRemoteViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<AFUISiriRemoteViewControllerDelegate>)arg1 ;
-(id<AFUISiriRemoteViewControllerDataSource>)dataSource;
-(id<AFUISiriRemoteViewControllerDelegate>)delegate;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setSession:(id)arg1 ;
-(void)setStatusViewHidden:(BOOL)arg1 ;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1 ;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBugReportingAvailable:(BOOL)arg1 ;
-(void)setHelpButtonEmphasized:(BOOL)arg1 ;
-(void)pulseHelpButton;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)serviceRequestsDismissal:(BOOL)arg1 ;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1 ;
-(void)serviceStartRequestWithOptions:(id)arg1 ;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1 ;
-(void)setCarDisplayGatekeeperVisible:(BOOL)arg1 ;
-(void)setStatusViewDisabled:(BOOL)arg1 ;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1 ;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3 ;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1 ;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)serviceDidPresentUserInterface;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;
-(void)serviceDidDetectMicButtonTap;
-(void)serviceDidDetectMicButtonLongPressBegan;
-(void)serviceDidDetectMicButtonLongPressEnded;
-(void)servicePresentationDidChangePeekMode:(unsigned long long)arg1 ;
-(void)setViewServiceApplicationInfo:(AFApplicationInfo *)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)setRequestOptions:(id)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 ;
-(void)siriDidDeactivate;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriWillHidePasscodeUnlockForResult:(long long)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)userInteractionDidOccur;
-(void)setSpeechSynthesis:(id)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)didReceiveShortTapAction;
-(id)speechSynthesisDelegate;
-(void)siriWillShowPasscodeUnlock;
-(void)setStatusBarFrame:(CGRect)arg1 ;
-(AFApplicationInfo *)viewServiceApplicationInfo;
-(id)sessionDelegate;
@end

