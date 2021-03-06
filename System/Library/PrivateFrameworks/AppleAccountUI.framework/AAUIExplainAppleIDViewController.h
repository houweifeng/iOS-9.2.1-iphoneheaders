/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIScrollView, UIView, UILabel, UIButton;

@interface AAUIExplainAppleIDViewController : UIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _goToSettingsButton;
	BOOL _shouldShowInviteeInstructions;

}

@property (assign,nonatomic) BOOL shouldShowInviteeInstructions;              //@synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions - In the implementation block
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldShowInviteeInstructions;
-(void)setShouldShowInviteeInstructions:(BOOL)arg1 ;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
@end

