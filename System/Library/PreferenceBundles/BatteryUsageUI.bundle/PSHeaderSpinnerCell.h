/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface PSHeaderSpinnerCell : UIView <PSHeaderFooterView> {

	UILabel* _text;
	UIActivityIndicatorView* _spinner;
	BOOL _animating;
	NSString* _name;

}

@property (readonly) UIActivityIndicatorView * spinner; 
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL animating;                         //@synthesize animating=_animating - In the implementation block
-(void)layoutSubviews;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(UIActivityIndicatorView *)spinner;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

