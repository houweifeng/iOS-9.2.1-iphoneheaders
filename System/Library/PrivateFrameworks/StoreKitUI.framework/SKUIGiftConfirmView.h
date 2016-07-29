/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SKUIGiftConfirmLabeledValue, UILabel, SKUIGiftConfiguration, UIView, UIButton;

@interface SKUIGiftConfirmView : UIView {

	SKUIGiftConfirmLabeledValue* _amountView;
	UILabel* _chargeDisclaimerLabel;
	UILabel* _confirmYourOrderLabel;
	SKUIGiftConfirmLabeledValue* _senderView;
	SKUIGiftConfiguration* _giftConfiguration;
	SKUIGiftConfirmLabeledValue* _itemView;
	SKUIGiftConfirmLabeledValue* _messageView;
	SKUIGiftConfirmLabeledValue* _recipientsView;
	UIView* _rule1;
	UIView* _rule2;
	UIView* _rule3;
	UIView* _rule4;
	UIView* _rule5;
	UIView* _rule6;
	SKUIGiftConfirmLabeledValue* _fromView;
	SKUIGiftConfirmLabeledValue* _sendOnView;
	UIButton* _termsButton;
	SKUIGiftConfirmLabeledValue* _themeNameView;
	UILabel* _totalLabel;

}

@property (nonatomic,readonly) UIButton * termsButton; 
-(void)layoutSubviews;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(UIButton *)termsButton;
-(id)_newLightLabelWithSize:(double)arg1 white:(double)arg2 alpha:(double)arg3 ;
-(id)_termsButton;
-(id)_newBoldLabelWithSize:(double)arg1 white:(double)arg2 ;
@end

