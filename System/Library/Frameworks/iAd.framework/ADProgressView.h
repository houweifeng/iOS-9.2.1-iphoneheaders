/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, ADPrerollSlider;

@interface ADProgressView : UIView {

	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	ADPrerollSlider* _slider;

}

@property (nonatomic,retain) UILabel * elapsedTimeLabel;                //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;              //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) ADPrerollSlider * slider;                  //@synthesize slider=_slider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(UILabel *)elapsedTimeLabel;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
-(void)setSlider:(ADPrerollSlider *)arg1 ;
-(ADPrerollSlider *)slider;
@end

