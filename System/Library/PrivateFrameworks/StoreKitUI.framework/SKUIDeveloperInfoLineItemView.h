/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface SKUIDeveloperInfoLineItemView : UIView {

	UIEdgeInsets _contentInset;
	UILabel* _labelLabel;
	UIView* _separatorView;
	UILabel* _valueLabel;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end

