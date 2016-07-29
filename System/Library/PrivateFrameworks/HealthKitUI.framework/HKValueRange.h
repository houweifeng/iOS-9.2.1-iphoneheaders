/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKTimePeriod.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKValueRange : NSObject <HKTimePeriod, NSCopying> {

	id _minValue;
	id _maxValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id minValue;                             //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id maxValue;                             //@synthesize maxValue=_maxValue - In the implementation block
+(id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
-(id)startDate;
-(id)endDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minValue;
-(void)setMaxValue:(id)arg1 ;
-(void)setMinValue:(id)arg1 ;
-(id)maxValue;
-(void)unionRange:(id)arg1 ;
-(BOOL)containsValue:(id)arg1 ;
-(void)unionMinValueWithRange:(id)arg1 ;
-(void)unionMaxValueWithRange:(id)arg1 ;
@end

