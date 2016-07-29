/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, ABSteadfastLineView;

@interface ABDividerView : UIView {

	BOOL _isVertical;
	UIColor* _defaultColor;
	UIColor* _shadowColor;
	ABSteadfastLineView* _line;
	ABSteadfastLineView* _shadowLine;
	BOOL _disappearsOnHighlight;

}

@property (assign,getter=isVertical,nonatomic) BOOL vertical;              //@synthesize isVertical=_isVertical - In the implementation block
@property (nonatomic,retain) UIColor * defaultColor;                       //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                        //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL disappearsOnHighlight;                   //@synthesize disappearsOnHighlight=_disappearsOnHighlight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)shadowColor;
-(BOOL)isVertical;
-(void)setVertical:(BOOL)arg1 ;
-(BOOL)disappearsOnHighlight;
-(void)setDisappearsOnHighlight:(BOOL)arg1 ;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(UIColor *)defaultColor;
@end

