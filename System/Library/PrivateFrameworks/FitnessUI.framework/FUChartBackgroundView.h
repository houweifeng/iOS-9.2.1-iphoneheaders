/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class NSNumber;

@interface FUChartBackgroundView : UIView {

	NSNumber* _maxValue;
	NSNumber* _minValue;
	UIEdgeInsets _lineInsets;

}

@property (nonatomic,retain) NSNumber * maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSNumber * minValue;                  //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lineInsets;              //@synthesize lineInsets=_lineInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSNumber *)minValue;
-(void)setMaxValue:(NSNumber *)arg1 ;
-(void)setMinValue:(NSNumber *)arg1 ;
-(NSNumber *)maxValue;
-(UIEdgeInsets)lineInsets;
-(void)setLineInsets:(UIEdgeInsets)arg1 ;
@end

