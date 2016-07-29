/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallLockScreen/InCallLockScreen-Structs.h>
#import <UIKit/UIView.h>

@protocol PHMarqueeViewDelegate;
@class NSString, UIFont, UIColor, CAGradientLayer, CALayer, PHMarqueeContentView, UILabel;

@interface PHMarqueeView : UIView {

	BOOL _scalingEnabled;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	double _maxNonMarqueeWidth;
	id<PHMarqueeViewDelegate> _delegate;
	CAGradientLayer* _leftMaskLayer;
	CAGradientLayer* _rightMaskLayer;
	CALayer* _maskContainerLayer;
	PHMarqueeContentView* _contentView;
	UILabel* _label;

}

@property (nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (assign,getter=isScalingEnabled,nonatomic) BOOL scalingEnabled;              //@synthesize scalingEnabled=_scalingEnabled - In the implementation block
@property (assign,nonatomic) double maxNonMarqueeWidth;                                //@synthesize maxNonMarqueeWidth=_maxNonMarqueeWidth - In the implementation block
@property (assign,nonatomic,__weak) id<PHMarqueeViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (retain) CAGradientLayer * leftMaskLayer;                                    //@synthesize leftMaskLayer=_leftMaskLayer - In the implementation block
@property (retain) CAGradientLayer * rightMaskLayer;                                   //@synthesize rightMaskLayer=_rightMaskLayer - In the implementation block
@property (retain) CALayer * maskContainerLayer;                                       //@synthesize maskContainerLayer=_maskContainerLayer - In the implementation block
@property (retain) PHMarqueeContentView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (retain) UILabel * label;                                                    //@synthesize label=_label - In the implementation block
-(void)setScalingEnabled:(BOOL)arg1 ;
-(CAGradientLayer *)rightMaskLayer;
-(void)maskEdges:(unsigned long long)arg1 ;
-(void)setRightMaskLayer:(CAGradientLayer *)arg1 ;
-(void)setMaxNonMarqueeWidth:(double)arg1 ;
-(void)removeMarqueeAnimation;
-(CALayer *)maskContainerLayer;
-(CAGradientLayer *)leftMaskLayer;
-(BOOL)isScalingEnabled;
-(void)sizeLabel;
-(void)setMaskContainerLayer:(CALayer *)arg1 ;
-(double)maxNonMarqueeWidth;
-(void)addMarqueeAnimationIfNecessary;
-(BOOL)labelSizeRequiresMarquee;
-(void)maskEdges:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setLeftMaskLayer:(CAGradientLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PHMarqueeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PHMarqueeViewDelegate>)delegate;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(PHMarqueeContentView *)contentView;
-(void)setContentView:(PHMarqueeContentView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(UIColor *)textColor;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

