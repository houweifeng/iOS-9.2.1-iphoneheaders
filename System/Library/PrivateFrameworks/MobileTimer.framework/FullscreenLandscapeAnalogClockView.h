/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/AnalogClockView.h>

@interface FullscreenLandscapeAnalogClockView : AnalogClockView
+(int)style;
+(id)resourcePath;
+(double)secondHandOverhangLength;
+(double)secondHandMainLength;
+(double)faceRadius;
+(double)hourHandLength;
+(double)minuteHandLength;
+(double)minuteHandWidth;
+(double)hourHandWidth;
+(double)secondHandWidth;
+(double)overHourHandDotSize;
+(double)overSecondHandDotSize;
+(CGPoint)handRotationalCenterForHand:(int)arg1 ;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
-(double)updateInterval;
-(double)coarseUpdateInterval;
@end

