/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, NSArray;

@interface SKUIInteractiveSegmentedControl : UIControl {

	NSMutableArray* _dividerViews;
	/*^block*/id _dividerCreationBlock;
	double _dividerWidth;
	NSArray* _segments;
	double _selectionProgress;

}

@property (nonatomic,copy) id dividerCreationBlock;                 //@synthesize dividerCreationBlock=_dividerCreationBlock - In the implementation block
@property (assign,nonatomic) double dividerWidth;                   //@synthesize dividerWidth=_dividerWidth - In the implementation block
@property (nonatomic,copy) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) double selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelectionProgress:(double)arg1 ;
-(void)setDividerCreationBlock:(id)arg1 ;
-(void)setDividerWidth:(double)arg1 ;
-(NSArray *)segments;
-(double)selectionProgress;
-(void)setSegments:(NSArray *)arg1 ;
-(void)_unregisterForObservationOfSegment:(id)arg1 ;
-(id)_createDividerViewWithFrame:(CGRect)arg1 ;
-(long long)selectedSegmentIndexForSelectionProgress:(double)arg1 ;
-(double)relativeSelectionProgressForSelectionProgress:(double)arg1 segmentIndex:(long long)arg2 ;
-(void)_registerForObservationOfSegment:(id)arg1 ;
-(double)selectionProgressForRelativeSectionProgress:(double)arg1 segmentIndex:(long long)arg2 ;
-(BOOL)_setSelectionProgress:(double)arg1 ;
-(void)_applySelectionProgressToSegments;
-(void)_notifyClientsOfSelectionProgressChange;
-(double)selectionProgressForSelectedSegmentAtIndex:(long long)arg1 ;
-(void)_segmentControlTouchUpInsideAction:(id)arg1 ;
-(id)dividerCreationBlock;
-(double)dividerWidth;
@end

