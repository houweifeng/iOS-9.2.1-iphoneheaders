/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont, CAShapeLayer, NSAttributedString;

@interface CMKModeDialItem : UIView {

	BOOL _selected;
	NSString* _title;
	UIFont* _font;
	CAShapeLayer* __scalableTextLayer;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                                        //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) NSAttributedString * _attributedTitle; 
@property (nonatomic,readonly) CAShapeLayer * _scalableTextLayer;                  //@synthesize _scalableTextLayer=__scalableTextLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGColorRef)_textColor;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)tintColorDidChange;
-(UIFont *)font;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSAttributedString *)_attributedTitle;
-(void)_commonCMKModeDialItemInitialization;
-(CAShapeLayer *)_scalableTextLayer;
-(void)_updateScalableTextPathFromAttributedTitle;
-(CGPathRef)_pathForAttributedString:(id)arg1 ;
@end

