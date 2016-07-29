/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UISlider.h>
#import <libobjc.A.dylib/MPDetailedScrubbing.h>
#import <libobjc.A.dylib/MPDetailScrubControllerDelegate.h>

@protocol MPDetailSliderDelegate;
@class UILabel, MPDetailScrubController, NSTimer, UIView, UIImageView, NSString;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate> {

	UILabel* _currentTimeInverseLabel;
	UILabel* _currentTimeLabel;
	MPDetailScrubController* _scrubController;
	BOOL _allowsScrubbing;
	BOOL _autoscrubActive;
	NSTimer* _autoscrubTimer;
	BOOL _canCommit;
	double _currentTime;
	UIView* _downloadingTrackOverlay;
	UIImageView* _glowDetailScrubImageView;
	BOOL _isTracking;
	double _maxTrackWidth;
	CGPoint _previousLocationInView;
	long long _style;
	UIImageView* _thumbImageView;
	double _trackInset;
	id<MPDetailSliderDelegate> _delegate;
	double _detailScrubbingVerticalRange;
	double _duration;
	double _availableDuration;
	long long _timeLabelStyle;
	double _minTimeLabelWidth;

}

@property (assign,nonatomic,__weak) id<MPDetailSliderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsScrubbing;                                           //@synthesize allowsScrubbing=_allowsScrubbing - In the implementation block
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) double detailScrubbingVerticalRange;                            //@synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) double duration;                                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double availableDuration;                                       //@synthesize availableDuration=_availableDuration - In the implementation block
@property (nonatomic,readonly) BOOL detailScrubbingAvailableForCurrentDuration; 
@property (assign,nonatomic) long long timeLabelStyle;                                       //@synthesize timeLabelStyle=_timeLabelStyle - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                                       //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (nonatomic,readonly) NSString * localizedScrubSpeedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)labelClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MPDetailSliderDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id<MPDetailSliderDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isTracking;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(id)currentThumbImage;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(id)viewForFirstBaselineLayout;
-(BOOL)allowsDetailScrubbing;
-(BOOL)allowsScrubbing;
-(BOOL)detailScrubbingAvailableForCurrentDuration;
-(void)setTimeLabelStyle:(long long)arg1 ;
-(void)setAvailableDuration:(double)arg1 ;
-(void)cancelTracking;
-(void)setValue:(float)arg1 duration:(double)arg2 ;
-(void)_setupControlsForStyle;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3 ;
-(id)timeLabelFontForStyle:(long long)arg1 ;
-(id)timeLabelTextColorForStyle:(long long)arg1 ;
-(id)_stringForCurrentTime:(double)arg1 ;
-(id)_stringForInverseCurrentTime:(double)arg1 ;
-(void)_updateTrackInset;
-(void)_setValueWhileTracking:(float)arg1 duration:(double)arg2 ;
-(void)_updateForAvailableDuraton;
-(void)_updateTimeDisplayForTime:(double)arg1 ;
-(void)_commitValue;
-(void)_autoscrubTick:(id)arg1 ;
-(void)_resetScrubInfo;
-(void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2 ;
-(id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(BOOL)arg3 ;
-(id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2 ;
-(id)_stringForTime:(double)arg1 ;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(double)detailScrubbingVerticalRange;
-(void)setDetailScrubbingVerticalRange:(double)arg1 ;
-(double)availableDuration;
-(long long)timeLabelStyle;
-(double)minTimeLabelWidth;
-(NSString *)localizedScrubSpeedText;
-(CGRect)thumbHitRect;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(void)setAllowsScrubbing:(BOOL)arg1 ;
@end

