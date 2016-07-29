/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UISplittableInputView.h>
#import <UIKit/_UIRemoteKeyboardInputViewPlaceholder.h>

@class UIView, NSString;

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {

	UIView* _mirroredView;
	CGSize _fixedSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
+(id)placeholderForView:(id)arg1 ;
+(id)placeholderWithWidth:(double)arg1 height:(double)arg2 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(void)layoutMergedSubviews;
-(void)updateMergedSubviewConstraints;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)willBeginSplitTransition;
-(void)didEndSplitTransition;
-(CGRect)_compatibleBounds;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)description;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)refreshPlaceholder;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(UIView *)placeheldView;
@end

