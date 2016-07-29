/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject {

	BOOL _hasContrast;
	BOOL _accumulatorIsPrimed;
	double _mostRecentSaturation;
	double _accumulatedSaturation;
	double _mostRecentBrightness;
	double _accumulatedBrightness;
	UIColor* _contentColor;
	double _mostRecentContrast;
	double _accumulatedContrast;
	double _mostRecentLuminance;
	double _accumulatedLuminance;
	double _nextChangeBarrier;
	long long _currentStyle;

}

@property (assign,nonatomic) double mostRecentSaturation;               //@synthesize mostRecentSaturation=_mostRecentSaturation - In the implementation block
@property (assign,nonatomic) double accumulatedSaturation;              //@synthesize accumulatedSaturation=_accumulatedSaturation - In the implementation block
@property (assign,nonatomic) double mostRecentBrightness;               //@synthesize mostRecentBrightness=_mostRecentBrightness - In the implementation block
@property (assign,nonatomic) double accumulatedBrightness;              //@synthesize accumulatedBrightness=_accumulatedBrightness - In the implementation block
@property (nonatomic,retain) UIColor * contentColor;                    //@synthesize contentColor=_contentColor - In the implementation block
@property (assign,nonatomic) double mostRecentContrast;                 //@synthesize mostRecentContrast=_mostRecentContrast - In the implementation block
@property (assign,nonatomic) double accumulatedContrast;                //@synthesize accumulatedContrast=_accumulatedContrast - In the implementation block
@property (assign,nonatomic) double mostRecentLuminance;                //@synthesize mostRecentLuminance=_mostRecentLuminance - In the implementation block
@property (assign,nonatomic) double accumulatedLuminance;               //@synthesize accumulatedLuminance=_accumulatedLuminance - In the implementation block
@property (assign,nonatomic) BOOL hasContrast;                          //@synthesize hasContrast=_hasContrast - In the implementation block
@property (assign,nonatomic) BOOL accumulatorIsPrimed;                  //@synthesize accumulatorIsPrimed=_accumulatorIsPrimed - In the implementation block
@property (assign,nonatomic) double nextChangeBarrier;                  //@synthesize nextChangeBarrier=_nextChangeBarrier - In the implementation block
@property (assign,nonatomic) long long currentStyle;                    //@synthesize currentStyle=_currentStyle - In the implementation block
+(long long)styleForContentColor:(id)arg1 contrast:(double)arg2 ;
+(long long)styleForContentColor:(id)arg1 ;
-(void)pl_primeForUseWithCameraOverlays;
-(void)pl_primeForUseWithCameraOverlays;
-(void)dealloc;
-(id)settings;
-(long long)currentStyle;
-(void)clearContentColorAccumulator;
-(BOOL)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2 ;
-(double)accumulatedBrightness;
-(double)accumulatedLuminance;
-(double)accumulatedSaturation;
-(void)setContentColor:(UIColor *)arg1 ;
-(void)setMostRecentBrightness:(double)arg1 ;
-(void)setMostRecentContrast:(double)arg1 ;
-(void)setMostRecentLuminance:(double)arg1 ;
-(void)setMostRecentSaturation:(double)arg1 ;
-(void)setAccumulatedContrast:(double)arg1 ;
-(void)setHasContrast:(BOOL)arg1 ;
-(BOOL)hasContrast;
-(BOOL)accumulatorIsPrimed;
-(void)setAccumulatedBrightness:(double)arg1 ;
-(void)setAccumulatedLuminance:(double)arg1 ;
-(void)setAccumulatedSaturation:(double)arg1 ;
-(void)setAccumulatorIsPrimed:(BOOL)arg1 ;
-(double)accumulatedContrast;
-(void)setCurrentStyle:(long long)arg1 ;
-(void)setNextChangeBarrier:(double)arg1 ;
-(double)nextChangeBarrier;
-(UIColor *)contentColor;
-(BOOL)accumulateChangesToContentColor:(id)arg1 ;
-(double)mostRecentSaturation;
-(double)mostRecentBrightness;
-(double)mostRecentContrast;
-(double)mostRecentLuminance;
@end

