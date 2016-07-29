/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView {

	EKDayOccurrenceView* _occurrenceView;
	UIColor* _baseColor;
	double _radius;

}

@property (nonatomic,retain) UIColor * baseColor;                                        //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,__weak,readonly) EKDayOccurrenceView * occurrenceView;              //@synthesize occurrenceView=_occurrenceView - In the implementation block
@property (assign,nonatomic) double radius;                                              //@synthesize radius=_radius - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(EKDayOccurrenceView *)occurrenceView;
-(id)initWithFrame:(CGRect)arg1 occurrenceView:(id)arg2 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(CGRect)_circleRect;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(UIColor *)baseColor;
@end

