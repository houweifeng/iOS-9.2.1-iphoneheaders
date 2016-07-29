/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementStopwatchTime : UIAccessibilityElement {

	UILabel* _label;
	int _timeType;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int timeType;                 //@synthesize timeType=_timeType - In the implementation block
-(int)timeType;
-(void)setTimeType:(int)arg1 ;
-(void)dealloc;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
@end
