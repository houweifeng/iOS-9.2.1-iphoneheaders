/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@protocol ADPrerollBottomBarDelegate;
@class ADPrerollButton, UILabel, NSTimer, UIImage, ADVolumeSlider;

@interface ADPrerollBottomBar : UIView {

	id<ADPrerollBottomBarDelegate> _delegate;
	BOOL _layoutForExpandedSize;
	BOOL _isFullscreen;
	BOOL _skipButtonCountingDown;
	ADPrerollButton* _actionButton;
	UILabel* _skipLabel;
	UILabel* _shortSkipLabel;
	ADPrerollButton* _skipButton;
	double _skipDuration;
	double _lastViewingStartTime;
	double _accumulatedViewingTime;
	NSTimer* _skipAccumulationTimer;
	UIImage* _playImage;
	UIImage* _pauseImage;
	ADPrerollButton* _playPauseButton;
	ADVolumeSlider* _volumeSlider;

}

@property (assign,nonatomic,__weak) id<ADPrerollBottomBarDelegate> delegate; 
@property (assign,nonatomic) BOOL layoutForExpandedSize;                                  //@synthesize layoutForExpandedSize=_layoutForExpandedSize - In the implementation block
@property (assign,nonatomic) BOOL isFullscreen;                                           //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (nonatomic,retain) ADPrerollButton * actionButton;                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UILabel * skipLabel;                                         //@synthesize skipLabel=_skipLabel - In the implementation block
@property (nonatomic,retain) UILabel * shortSkipLabel;                                    //@synthesize shortSkipLabel=_shortSkipLabel - In the implementation block
@property (nonatomic,retain) ADPrerollButton * skipButton;                                //@synthesize skipButton=_skipButton - In the implementation block
@property (assign,nonatomic) BOOL skipButtonCountingDown;                                 //@synthesize skipButtonCountingDown=_skipButtonCountingDown - In the implementation block
@property (assign,nonatomic) double skipDuration;                                         //@synthesize skipDuration=_skipDuration - In the implementation block
@property (assign,nonatomic) double lastViewingStartTime;                                 //@synthesize lastViewingStartTime=_lastViewingStartTime - In the implementation block
@property (assign,nonatomic) double accumulatedViewingTime;                               //@synthesize accumulatedViewingTime=_accumulatedViewingTime - In the implementation block
@property (nonatomic,retain) NSTimer * skipAccumulationTimer;                             //@synthesize skipAccumulationTimer=_skipAccumulationTimer - In the implementation block
@property (nonatomic,retain) UIImage * playImage;                                         //@synthesize playImage=_playImage - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                        //@synthesize pauseImage=_pauseImage - In the implementation block
@property (nonatomic,retain) ADPrerollButton * playPauseButton;                           //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) ADVolumeSlider * volumeSlider;                               //@synthesize volumeSlider=_volumeSlider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ADPrerollBottomBarDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<ADPrerollBottomBarDelegate>)delegate;
-(ADPrerollButton *)actionButton;
-(UIImage *)playImage;
-(BOOL)isFullscreen;
-(void)_skipButtonTapped:(id)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)displayAsPaused:(BOOL)arg1 ;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)setLayoutForExpandedSize:(BOOL)arg1 ;
-(BOOL)layoutForExpandedSize;
-(void)setVolumeSlider:(ADVolumeSlider *)arg1 ;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(void)setPlayPauseButton:(ADPrerollButton *)arg1 ;
-(ADPrerollButton *)playPauseButton;
-(UIImage *)pauseImage;
-(void)setSkipLabel:(UILabel *)arg1 ;
-(UILabel *)skipLabel;
-(void)setShortSkipLabel:(UILabel *)arg1 ;
-(UILabel *)shortSkipLabel;
-(void)setSkipButton:(ADPrerollButton *)arg1 ;
-(ADPrerollButton *)skipButton;
-(double)accumulatedViewingTime;
-(double)skipDuration;
-(void)_pauseButtonTapped:(id)arg1 ;
-(void)_pauseCountdown;
-(void)_resumeCountdown;
-(BOOL)skipButtonCountingDown;
-(void)setSkipDuration:(double)arg1 ;
-(void)_updateSkipLabel;
-(void)setSkipButtonCountingDown:(BOOL)arg1 ;
-(void)setLastViewingStartTime:(double)arg1 ;
-(void)_accumulateViewingTime;
-(void)setSkipAccumulationTimer:(NSTimer *)arg1 ;
-(double)lastViewingStartTime;
-(void)setAccumulatedViewingTime:(double)arg1 ;
-(void)showActionButton:(BOOL)arg1 ;
-(void)beginCountdownWithDuration:(double)arg1 ;
-(NSTimer *)skipAccumulationTimer;
-(void)setActionButton:(ADPrerollButton *)arg1 ;
-(void)_actionButtonTapped:(id)arg1 ;
-(ADVolumeSlider *)volumeSlider;
@end

