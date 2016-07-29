/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {

	ACUILinkButton* _linkButton;
	long long _desiredTextAlignment;

}

@property (assign,nonatomic) long long alignment;              //@synthesize desiredTextAlignment=_desiredTextAlignment - In the implementation block
-(void)setAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)alignment;
-(id)initWithButton:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

