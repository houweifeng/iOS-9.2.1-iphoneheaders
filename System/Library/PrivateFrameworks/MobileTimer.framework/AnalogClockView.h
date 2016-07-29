/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/Clock.h>

@protocol HandView;
@class UIImage, UIImageView, UIView, NSDate, NSCalendar, NSTimeZone;

@interface AnalogClockView : UIView <Clock> {

	int _runMode;
	UIImage* _faceDayImage;
	UIImage* _faceNightImage;
	UIImageView* _faceView;
	UIView*<HandView> _dayHands[3];
	UIView*<HandView> _nightHands[3];
	UIImageView* _middleDotDay;
	UIImageView* _middleDotNight;
	UIImageView* _middleRedDot;
	NSDate* _time;
	BOOL _nighttime;
	double _seconds;
	int _flutterIndex;
	BOOL _isRenderStateStale;
	NSCalendar* _calendar;
	BOOL _minuteHourAnimationTriggered;

}

@property (assign,nonatomic) int runMode;                                      //@synthesize runMode=_runMode - In the implementation block
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) UIImageView * faceView;                         //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,readonly) long long hour; 
@property (nonatomic,readonly) long long minute; 
@property (nonatomic,retain) NSDate * time;                                    //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (getter=isNighttime,nonatomic,readonly) BOOL nighttime;              //@synthesize nighttime=_nighttime - In the implementation block
@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(void)initialize;
+(int)style;
+(id)resourcePath;
+(double)secondHandOverhangLength;
+(double)secondHandMainLength;
+(id)imageInBundleForName:(id)arg1 ;
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
+(double)antialiasPaddingRatio;
+(id)analogClockWithStyle:(int)arg1 ;
+(void)registerClock:(id)arg1 ;
+(void)unregisterClock:(id)arg1 ;
+(id)cacheTopLevelPath;
+(id)cacheVersionHash;
+(void)updateFlutterForAllTicking;
+(void)registerTickingClock:(id)arg1 ;
+(void)registerSweepingClock:(id)arg1 ;
+(void)updateTimeForAllTicking;
+(void)updateTimeForAllSweeping;
+(void)unregisterTickingClock:(id)arg1 ;
+(void)unregisterSweepingClock:(id)arg1 ;
+(Class)classForStyle:(int)arg1 ;
+(CGSize)clockSize;
+(id)cacheVersionedPath;
+(id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2 ;
+(id)dayTimeFaceColor;
+(id)dayTimeTextColor;
+(id)nightTimeFaceColor;
+(id)nightTimeTextColor;
+(BOOL)doesFaceHaveShadow;
+(id)shadowInfoAtIndex:(unsigned long long)arg1 ;
+(double)numeralInset;
+(id)numeralFont;
+(void)adjustNumberalCenter:(CGPoint*)arg1 forNumeralIndex:(long long)arg2 ;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ;
+(id)dayTimeHourHandColor;
+(id)nightTimeHourHandColor;
+(id)dayTimeMinuteHandColor;
+(id)nightTimeMinuteHandColor;
+(id)dayTimeSecondHandColor;
+(id)nightTimeSecondHandColor;
+(double)secondHandLength;
+(id)makeClockHand:(int)arg1 daytime:(BOOL)arg2 ;
+(id)dayTimeOverHourHandDotColor;
+(id)nightTimeOverHourHandDotColor;
+(id)makeDotImageSize:(double)arg1 color:(id)arg2 ;
+(id)overHourHandDotImageForDaytime:(BOOL)arg1 ;
+(id)overSecondHandDotColor;
+(id)makeOverSecondHandDotImage;
+(id)clockFaceForDaytime:(BOOL)arg1 ;
+(id)clockHand:(int)arg1 daytime:(BOOL)arg2 ;
+(BOOL)hasOverHourHandDot;
+(id)overHourHandDotForDayTime:(BOOL)arg1 ;
+(BOOL)hasOverSecondHandDot;
+(id)overSecondHandDotImage;
+(BOOL)isClockRegistered:(id)arg1 ;
+(CGSize)sizeForStyle:(int)arg1 ;
+(UIEdgeInsets)insetsForStyle:(int)arg1 ;
+(CGPoint)shadowRotationalCenterForHand:(int)arg1 ;
+(UIEdgeInsets)shadowInsets;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)stop;
-(int)style;
-(CGSize)intrinsicContentSize;
-(void)start;
-(long long)hour;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(double)updateInterval;
-(NSTimeZone *)timeZone;
-(long long)minute;
-(BOOL)isStarted;
-(void)updateTime;
-(double)coarseUpdateInterval;
-(void)setRunMode:(int)arg1 ;
-(void)updateFlutter;
-(void)updateTimeContinuously:(long long)arg1 ;
-(int)runMode;
-(void)setHandTransformForHandIndex:(int)arg1 ;
-(void)setHandAngle:(double)arg1 forHandIndex:(int)arg2 ;
-(void)updateTimeAnimated:(BOOL)arg1 ;
-(void)setTime:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNighttime:(BOOL)arg1 ;
-(UIImageView *)faceView;
-(BOOL)isNighttime;
@end

