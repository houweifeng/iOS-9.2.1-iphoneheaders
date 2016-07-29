/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSLayoutConstraint, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationTotalView : UIView {

	UILabel* _labelView;
	UILabel* _valueView;
	UIView* _separatorView;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _rightMarginConstraint;
	NSLayoutConstraint* _labelBaselineConstraint;
	BOOL _isPendingTotal;
	PKPaymentAuthorizationLayout* _layout;
	long long _style;

}

@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL isPendingTotal;                                //@synthesize isPendingTotal=_isPendingTotal - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)updateConstraints;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)_prepareConstraints;
-(void)_createSubviews;
-(id)_labelAttributedStringWithString:(id)arg1 ;
-(id)_valueAttributedStringWithString:(id)arg1 ;
-(double)_initialLeading;
-(void)setLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isPendingTotal;
-(void)setIsPendingTotal:(BOOL)arg1 ;
@end

