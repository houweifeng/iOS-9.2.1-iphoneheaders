/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusScrollAnimator.h>

@class UIScreen, _UIFocusEngineScrollViewOffsets, NSMapTable, CADisplayLink, NSString;

@interface _UIFocusDisplayLinkScrollAnimator : NSObject <_UIFocusScrollAnimator> {

	UIScreen* _screen;
	_UIFocusEngineScrollViewOffsets* _singleScrollViewEntry;
	NSMapTable* _scrollViews;
	CADisplayLink* _displayLink;
	double _defaultConvergenceRate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double defaultConvergenceRate; 
@property (nonatomic,readonly) BOOL requiresExtendingScrollViewVisibleBounds; 
-(void)dealloc;
-(id)initWithScreen:(id)arg1 ;
-(void)setDefaultConvergenceRate:(double)arg1 ;
-(BOOL)isAnimatingScrollView:(id)arg1 ;
-(void)cancelScrollingForScrollView:(id)arg1 ;
-(CGPoint)targetContentOffsetForScrollView:(id)arg1 ;
-(BOOL)requiresExtendingScrollViewVisibleBounds;
-(void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(BOOL)arg2 ;
-(void)setPeekOffsetAdjustment:(CGPoint)arg1 forScrollView:(id)arg2 ;
-(CGPoint)velocityToScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
-(void)setTargetContentOffset:(CGPoint)arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)_entryForScrollView:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_updateDisplayLinkConfiguration;
-(void)_heartbeat:(id)arg1 ;
-(void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3 ;
-(double)defaultConvergenceRate;
@end

