/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StackElementDelegate;
#import <MobileMail/MobileMail-Structs.h>
@class UIView;

@interface StackElement : NSObject {

	id<StackElementDelegate> _delegate;
	id _item;
	UIView* _itemView;
	UIView* _dimmingAnimationView;
	int _previousState;
	int _currentState;
	int _nextState;
	int _targetState;
	long long _nextDepth;
	long long _targetDepth;

}

@property (assign,nonatomic) id<StackElementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id item;                                      //@synthesize item=_item - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL isAnimating; 
@property (nonatomic,readonly) int previousState;                            //@synthesize previousState=_previousState - In the implementation block
@property (assign,nonatomic) int currentState; 
@property (nonatomic,readonly) int nextState;                                //@synthesize nextState=_nextState - In the implementation block
@property (assign,nonatomic) int targetState; 
@property (nonatomic,readonly) long long nextDepth;                          //@synthesize nextDepth=_nextDepth - In the implementation block
@property (assign,nonatomic) long long targetDepth;                          //@synthesize targetDepth=_targetDepth - In the implementation block
@property (nonatomic,readonly) UIView * itemView; 
-(void)setTargetDepth:(long long)arg1 ;
-(id)initWithItem:(id)arg1 state:(int)arg2 ;
-(int)nextState;
-(long long)nextDepth;
-(long long)targetDepth;
-(void)setNextState:(int)arg1 nextDepth:(long long)arg2 animated:(BOOL)arg3 ;
-(id)itemViewCreateIfNeeded:(BOOL)arg1 ;
-(void)showFullsize:(BOOL)arg1 ;
-(void)showDimmed:(BOOL)arg1 ;
-(void)fadeInUnderneathStack:(BOOL)arg1 previousDepth:(long long)arg2 ;
-(void)moveIntoStack:(BOOL)arg1 ;
-(void)moveOutFromStack:(BOOL)arg1 ;
-(void)fadeOutUnderneathStack:(BOOL)arg1 previousDepth:(long long)arg2 ;
-(void)removeDimmingFilter;
-(void)removeItemView;
-(void)beginAnimationToState:(int)arg1 withDuration:(double)arg2 beginsFromCurrentState:(BOOL)arg3 animated:(BOOL)arg4 animations:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)beginAnimationToState:(int)arg1 withDuration:(double)arg2 beginsFromCurrentState:(BOOL)arg3 animated:(BOOL)arg4 animations:(/*^block*/id)arg5 ;
-(CGAffineTransform)fullsizeTransform;
-(void)updateItemView:(id)arg1 onStack:(BOOL)arg2 adjustSubviewIndex:(BOOL)arg3 ;
-(void)updateItemView:(id)arg1 ;
-(void)updateItemView:(id)arg1 onStack:(BOOL)arg2 ;
-(void)updateItemView:(id)arg1 onStack:(BOOL)arg2 adjustSubviewIndex:(BOOL)arg3 stackDepth:(long long)arg4 ;
-(void)updateItemView:(id)arg1 onStack:(BOOL)arg2 stackDepth:(long long)arg3 ;
-(CGPoint)offStackTranslation;
-(CGAffineTransform)stackTransformWithDepth:(long long)arg1 translation:(CGPoint)arg2 ;
-(double)borderWidthWithStackDepth:(long long)arg1 ;
-(id)borderColorWithStackDepth:(long long)arg1 ;
-(CGSize)_scaleFactorWithDepth:(long long)arg1 translation:(CGPoint*)arg2 ;
-(CGSize)_stackContainerSize;
-(CGAffineTransform)stackTransformWithDepth:(long long)arg1 ;
-(void)setDelegate:(id<StackElementDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<StackElementDelegate>)delegate;
-(id)dimmingColor;
-(id)item;
-(int)currentState;
-(BOOL)isAnimating;
-(BOOL)isVisible;
-(void)setCurrentState:(int)arg1 ;
-(int)targetState;
-(void)setTargetState:(int)arg1 ;
-(void)removeView;
-(int)previousState;
-(void)hide:(BOOL)arg1 ;
-(UIView *)itemView;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

