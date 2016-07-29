/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UISlider.h>

@class UIColor;

@interface PSSegmentableSlider : UISlider {

	UIColor* _trackMarkersColor;
	BOOL _segmented;
	unsigned long long _segmentCount;

}

@property (assign,getter=isSegmented,nonatomic) BOOL segmented;              //@synthesize segmented=_segmented - In the implementation block
@property (assign,nonatomic) unsigned long long segmentCount;                //@synthesize segmentCount=_segmentCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setSegmented:(BOOL)arg1 ;
-(void)sliderTapped:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(BOOL)isSegmented;
-(unsigned long long)segmentCount;
-(void)setSegmentCount:(unsigned long long)arg1 ;
@end

