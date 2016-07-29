/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PKPhysicsContactDelegate.h>

@protocol OS_dispatch_source, SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate;
@class NSObject, NSMutableArray, CADisplayLink, PKPhysicsBody, UILongPressGestureRecognizer, UIPanGestureRecognizer, PKPhysicsWorld, UITapGestureRecognizer, NSString;

@interface SKUIPhysicalCirclesView : UIView <PKPhysicsContactDelegate> {

	NSObject*<OS_dispatch_source> _circleLoadStepTimer;
	NSMutableArray* _circleBodies;
	SKUIPhysicalCircleConstants _constants;
	id<SKUIPhysicalCirclesDataSource> _dataSource;
	id<SKUIPhysicalCirclesDelegate> _delegate;
	CADisplayLink* _displayLink;
	PKPhysicsBody* _groundBody;
	long long _longPressCircleIndex;
	UILongPressGestureRecognizer* _longPressRecognizer;
	double _maximumFrequencyDistance;
	double _minimumFrequencyDistance;
	UIPanGestureRecognizer* _panRecognizer;
	void* _physicsKitFramework;
	PKPhysicsWorld* _physicsWorld;
	NSMutableArray* _repellors;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (assign,nonatomic,__weak) id<SKUIPhysicalCirclesDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIPhysicalCirclesDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SKUIPhysicalCircleConstants constants;                            //@synthesize constants=_constants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<SKUIPhysicalCirclesDataSource>)arg1 ;
-(void)setDelegate:(id<SKUIPhysicalCirclesDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<SKUIPhysicalCirclesDataSource>)dataSource;
-(id<SKUIPhysicalCirclesDelegate>)delegate;
-(void)_displayLinkTick:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(void)addCirclesWithCount:(long long)arg1 ;
-(void)removeCirclesInIndexSet:(id)arg1 byAnimatingToPoint:(CGPoint)arg2 delay:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)removeAllCirclesAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeCirclesInIndexSet:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)circleViewAtIndex:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 forCircleAtIndex:(long long)arg2 ;
-(void)setConstants:(SKUIPhysicalCircleConstants)arg1 ;
-(void)startPhysics;
-(void)stopPhysics;
-(void)removeCircleAtIndex:(long long)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeAllRepellors;
-(id)addRepellorWithCenter:(CGPoint)arg1 radius:(double)arg2 bufferSize:(double)arg3 ;
-(void)_tapGestureAction:(id)arg1 ;
-(void)_panGestureAction:(id)arg1 ;
-(void)_loadCirclesWithStartIndex:(long long)arg1 totalCount:(long long)arg2 ;
-(void)_cancelStepTimers;
-(void)_reloadDidFinish;
-(void)removeRepellor:(id)arg1 ;
-(void)_removeCircleBodies:(id)arg1 ;
-(void)_calculateFrequencyScaling;
-(long long)_circleIndexForPoint:(CGPoint)arg1 ;
-(void)_startFluctuationForCircleView:(id)arg1 ;
-(void)_stopFluctuationForCircleView:(id)arg1 ;
-(void)_addSpringForCircleBody:(id)arg1 ;
-(CGPoint)_initialPositionForCircleIndex:(long long)arg1 view:(id)arg2 ;
-(id)_circleBodyWithView:(id)arg1 ;
-(BOOL)_addNextMissingSpringJoint;
-(SKUIPhysicalCircleConstants)constants;
@end

