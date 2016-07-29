/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {

	BOOL _disabled;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _lineWidth;
	double _cornerRadius;

}

@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                   //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)cornerRadius;
-(void)setActive:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(UIColor *)strokeColor;
-(id)_fillColor:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 lineWidth:(double)arg3 updateView:(BOOL)arg4 ;
-(void)updateView;
@end

