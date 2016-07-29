/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIButton, UIColor;

@interface _UIButtonMaskAnimationView : UIView {

	unsigned long long _hardEdge;
	UIView* _hardEdgeLine;
	UIButton* _delegate;

}

@property (assign,nonatomic) UIButton * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign) double borderWidth; 
@property (assign,nonatomic) UIColor * borderColor; 
@property (assign) unsigned long long hardEdge; 
-(void)setDelegate:(UIButton *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(UIButton *)delegate;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)setHardEdge:(unsigned long long)arg1 ;
-(unsigned long long)hardEdge;
-(CGRect)_frameForLine;
@end
