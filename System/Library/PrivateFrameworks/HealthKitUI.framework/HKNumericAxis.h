/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKAxis.h>

@interface HKNumericAxis : HKAxis {

	double _lastAxisSpread;
	double _lastStepSize;

}
-(id)stringFromNumber:(id)arg1 ;
-(id)labelsForChartRange:(HKRange)arg1 zoomScale:(double)arg2 ;
-(void)enumerateTickCoordinatesInChartRange:(HKRange)arg1 zoomScale:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)adjustedRangeForFittedRange:(id)arg1 ;
-(id)_axisLabelForValue:(id)arg1 ;
-(double)_labelSpacingWithMin:(double)arg1 max:(double)arg2 maxNumLabels:(long long)arg3 ;
@end
