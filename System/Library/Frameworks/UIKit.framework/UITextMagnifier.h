/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UITextInput;
@class UIView, UIResponder, UITextMagnifierTimeWeightedPoint;

@interface UITextMagnifier : UIView {

	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _animationPoint;
	CGPoint _terminalPoint;
	BOOL _terminalPointPlacedCarefully;
	UIResponder*<UITextInput> _text;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;

}

@property (nonatomic,retain) UIView * target;                                  //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> text;                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;                       //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                           //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint;                          //@synthesize terminalPoint=_terminalPoint - In the implementation block
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully;              //@synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
+(id)getLoupeBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTarget:(UIView *)arg1 ;
-(UIResponder*<UITextInput>)text;
-(void)setText:(UIResponder*<UITextInput>)arg1 ;
-(UIView *)target;
-(void)autoscrollWillNotStart;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)terminalPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(CGPoint)magnificationPoint;
-(void)animateToMagnifierRenderer;
-(void)animateToAutoscrollRenderer;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)remove;
-(void)detectLostTouches:(id)arg1 ;
-(void)setToMagnifierRenderer;
-(void)zoomUpAnimation;
-(void)windowWillRotate:(id)arg1 ;
-(CGPoint)animationPoint;
-(void)zoomDownAnimation;
-(BOOL)isHorizontal;
@end

