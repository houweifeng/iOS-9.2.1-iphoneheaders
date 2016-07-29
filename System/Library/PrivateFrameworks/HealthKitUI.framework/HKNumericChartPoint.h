/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSString;

@interface HKNumericChartPoint : NSObject <HKChartPoint> {

	NSDate* _xValue;
	id _yValue;
	id _userInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id)yValue;
-(id)minYValue;
-(id)maxYValue;
-(id)xValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1 ;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3 ;
@end

