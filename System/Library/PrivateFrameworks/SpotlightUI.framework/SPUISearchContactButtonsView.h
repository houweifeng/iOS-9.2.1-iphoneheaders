/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SPUISearchContactButtonsViewDelegate;
@class UIButton, NSLayoutConstraint;

@interface SPUISearchContactButtonsView : UIView {

	id<SPUISearchContactButtonsViewDelegate> _delegate;
	UIButton* _videoButton;
	UIButton* _messageButton;
	UIButton* _phoneButton;
	NSLayoutConstraint* _constraintBetweenVideoAndMessageButtons;
	NSLayoutConstraint* _constraintBetweenMessageAndPhoneButtons;
	unsigned long long _currentButtonTypes;

}

@property (assign) id<SPUISearchContactButtonsViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (retain) UIButton * videoButton;                                                    //@synthesize videoButton=_videoButton - In the implementation block
@property (retain) UIButton * messageButton;                                                  //@synthesize messageButton=_messageButton - In the implementation block
@property (retain) UIButton * phoneButton;                                                    //@synthesize phoneButton=_phoneButton - In the implementation block
@property (retain) NSLayoutConstraint * constraintBetweenVideoAndMessageButtons;              //@synthesize constraintBetweenVideoAndMessageButtons=_constraintBetweenVideoAndMessageButtons - In the implementation block
@property (retain) NSLayoutConstraint * constraintBetweenMessageAndPhoneButtons;              //@synthesize constraintBetweenMessageAndPhoneButtons=_constraintBetweenMessageAndPhoneButtons - In the implementation block
@property (assign) unsigned long long currentButtonTypes;                                     //@synthesize currentButtonTypes=_currentButtonTypes - In the implementation block
-(void)setDelegate:(id<SPUISearchContactButtonsViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SPUISearchContactButtonsViewDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateConstraints;
-(void)buttonPressed:(id)arg1 ;
-(void)setPhoneButton:(UIButton *)arg1 ;
-(UIButton *)phoneButton;
-(id)contactButtonWithImageName:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setVideoButton:(UIButton *)arg1 ;
-(void)setMessageButton:(UIButton *)arg1 ;
-(void)setConstraintBetweenVideoAndMessageButtons:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintBetweenMessageAndPhoneButtons:(NSLayoutConstraint *)arg1 ;
-(unsigned long long)currentButtonTypes;
-(NSLayoutConstraint *)constraintBetweenVideoAndMessageButtons;
-(NSLayoutConstraint *)constraintBetweenMessageAndPhoneButtons;
-(UIButton *)videoButton;
-(UIButton *)messageButton;
-(void)setCurrentButtonTypes:(unsigned long long)arg1 ;
-(void)updateWithButtonTypes:(unsigned long long)arg1 ;
@end

