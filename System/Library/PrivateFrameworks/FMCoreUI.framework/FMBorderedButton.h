/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMDynamicTypeButton.h>

@class UIColor;

@interface FMBorderedButton : FMDynamicTypeButton {

	BOOL _hairlineBorder;
	UIColor* _borderColor;

}

@property (assign,nonatomic) double borderWidth; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL hairlineBorder;                //@synthesize hairlineBorder=_hairlineBorder - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)awakeFromNib;
-(double)cornerRadius;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(double)borderWidth;
-(void)prepareForInterfaceBuilder;
-(void)setHairlineBorder:(BOOL)arg1 ;
-(BOOL)hairlineBorder;
-(void)_bbUpdateLayer;
@end

