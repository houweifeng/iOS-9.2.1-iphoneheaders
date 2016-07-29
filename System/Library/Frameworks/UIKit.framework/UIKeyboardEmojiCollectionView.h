/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionView.h>

@class UITouch, UIKeyboardEmojiView, UIKBRenderConfig, UIKeyboardEmojiInputController, UIView, UIKeyboardEmojiGraphicsTraits, UIResponder;

@interface UIKeyboardEmojiCollectionView : UICollectionView {

	UITouch* _activeTouch;
	UIKeyboardEmojiView* _touched;
	UIKeyboardEmojiView* _pendingDisplay;
	UIKeyboardEmojiView* _onDisplay;
	UIKBRenderConfig* _renderConfig;
	UIKeyboardEmojiInputController* _inputController;
	UIView* _pressIndicator;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	UIResponder* _hitTestResponder;

}

@property (retain) UIKeyboardEmojiInputController * inputController;                          //@synthesize inputController=_inputController - In the implementation block
@property (assign,nonatomic) UIResponder * hitTestResponder;                                  //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (retain,readonly) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;              //@synthesize emojiGraphicsTraits=_emojiGraphicsTraits - In the implementation block
@property (retain) UITouch * activeTouch;                                                     //@synthesize activeTouch=_activeTouch - In the implementation block
@property (retain) UIKeyboardEmojiView * touched;                                             //@synthesize touched=_touched - In the implementation block
@property (retain) UIKeyboardEmojiView * pendingDisplay;                                      //@synthesize pendingDisplay=_pendingDisplay - In the implementation block
@property (retain) UIKeyboardEmojiView * onDisplay;                                           //@synthesize onDisplay=_onDisplay - In the implementation block
@property (retain) UIKBRenderConfig * renderConfig;                                           //@synthesize renderConfig=_renderConfig - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)_shouldReverseLayoutDirection;
-(UIKBRenderConfig *)renderConfig;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 renderConfig:(id)arg3 inputController:(id)arg4 emojiGraphicsTraits:(id)arg5 ;
-(void)setHitTestResponder:(UIResponder *)arg1 ;
-(UIKeyboardEmojiInputController *)inputController;
-(id)closestCellForPoint:(CGPoint)arg1 ;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(UIResponder *)hitTestResponder;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)_currentScreenScale;
-(UIKeyboardEmojiView *)touched;
-(void)setTouched:(UIKeyboardEmojiView *)arg1 ;
-(UITouch *)activeTouch;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(UIKeyboardEmojiView *)pendingDisplay;
-(void)setPendingDisplay:(UIKeyboardEmojiView *)arg1 ;
-(UIKeyboardEmojiView *)onDisplay;
-(void)setOnDisplay:(UIKeyboardEmojiView *)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(void)setInputController:(UIKeyboardEmojiInputController *)arg1 ;
@end

