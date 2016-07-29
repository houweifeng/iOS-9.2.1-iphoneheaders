/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBStarkSessionConfiguring;
@class SBStarkScreenController, SBStarkLockOutView, FBSceneHostManager, NSString, SBUIStarkStartupAnimation;

@interface SBStarkLockOutViewController : UIViewController {

	id<SBStarkSessionConfiguring> _configuration;
	SBStarkScreenController* _screenController;
	long long _mode;
	SBStarkLockOutView* _modeView;
	SBStarkLockOutView* _previousModeView;
	FBSceneHostManager* _layoutWindowHostManager;
	NSString* _layoutWindowHostRequester;
	BOOL _inDealloc;
	BOOL _pendingAnimated;
	long long _pendingMode;
	SBUIStarkStartupAnimation* _startupAnimation;

}

@property (assign,nonatomic) long long lockOutMode; 
@property (nonatomic,retain,readonly) SBStarkLockOutView * lockoutView;               //@synthesize modeView=_modeView - In the implementation block
@property (nonatomic,retain) SBStarkScreenController * screenController;              //@synthesize screenController=_screenController - In the implementation block
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(SBStarkScreenController *)screenController;
-(void)setScreenController:(SBStarkScreenController *)arg1 ;
-(void)setLockOutMode:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)lockOutMode;
-(id)_newModeViewForMode:(long long)arg1 ;
-(void)_updateLockOutModeIfPending;
-(SBStarkLockOutView *)lockoutView;
-(void)setLockOutMode:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end

