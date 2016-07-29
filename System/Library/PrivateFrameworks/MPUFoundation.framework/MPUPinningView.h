/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CALayer;

@interface MPUPinningView : UIView {

	UIView* _containerView;
	CALayer* _effectivePinningSourceLayer;
	UIView* _contentView;
	UIView* _pinningSourceView;
	CALayer* _pinningSourceLayer;

}

@property (nonatomic,retain) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * pinningSourceView;                //@synthesize pinningSourceView=_pinningSourceView - In the implementation block
@property (nonatomic,retain) CALayer * pinningSourceLayer;              //@synthesize pinningSourceLayer=_pinningSourceLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_prepareForDefaultImageSnapshotNotification:(id)arg1 ;
-(void)_unregisterKVOObserversForLayer:(id)arg1 ;
-(void)_configureMatchMoveAnimation;
-(BOOL)_updateEffectivePinningSourceView;
-(void)setPinningSourceLayer:(CALayer *)arg1 ;
-(void)_registerKVOObserversForLayer:(id)arg1 ;
-(UIView *)pinningSourceView;
-(CALayer *)pinningSourceLayer;
-(void)setPinningSourceView:(UIView *)arg1 ;
@end

