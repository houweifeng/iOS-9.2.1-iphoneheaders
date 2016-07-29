/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIImageView, UIButton;

@interface AXForceTouchSensitivityTestViewController : UIViewController {

	UIImageView* _messageImageView;
	UIButton* _doneButton;

}

@property (nonatomic,retain) UIImageView * messageImageView;              //@synthesize messageImageView=_messageImageView - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
-(void)animateDoneButtonSlideIn;
-(void)setMessageImageView:(UIImageView *)arg1 ;
-(UIImageView *)messageImageView;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)doneButtonTapped;
@end

