/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>

@class UIButton;

@interface WLMigrationCompletedViewController : WLWelcomeGroupViewController {

	UIButton* _continueButton;
	UIButton* _continueView;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;              //@synthesize continueHandler=_continueHandler - In the implementation block
-(void)loadView;
-(void)_continueTapped:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
@end

