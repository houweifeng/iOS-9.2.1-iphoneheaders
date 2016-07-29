/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, NSString, UIImage;

@interface SKUIIncompatibleAppView : UIView {

	NSMutableArray* _buttons;
	UIImageView* _iconView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * iconImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id)addButtonWithTitle:(id)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIImage *)iconImage;
-(void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setIconImage:(UIImage *)arg1 ;
@end

