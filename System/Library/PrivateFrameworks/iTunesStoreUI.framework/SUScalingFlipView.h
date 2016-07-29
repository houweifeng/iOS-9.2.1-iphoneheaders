/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SUScalingFlipViewDelegate;
@class UIView;

@interface SUScalingFlipView : UIView {

	UIView* _backView;
	id<SUScalingFlipViewDelegate> _delegate;
	long long _direction;
	double _duration;
	CGRect _fromFrame;
	UIView* _frontView;
	CGRect _toFrame;

}

@property (assign,nonatomic) id<SUScalingFlipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long direction;                                 //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
-(void)setDelegate:(id<SUScalingFlipViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SUScalingFlipViewDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(id)_fixedAnimationForAnimation:(id)arg1 ;
-(id)_transformAnimationWithStart:(CATransform3D)arg1 middle:(CATransform3D)arg2 end:(CATransform3D)arg3 ;
-(void)performFlip;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(id)_frontLayerAnimation;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
@end

