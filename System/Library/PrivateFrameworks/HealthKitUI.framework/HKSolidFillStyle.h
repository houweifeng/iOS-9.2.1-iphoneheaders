/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKFillStyle.h>

@class UIColor;

@interface HKSolidFillStyle : HKFillStyle {

	UIColor* _color;

}

@property (nonatomic,copy) UIColor * color;              //@synthesize color=_color - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
@end

