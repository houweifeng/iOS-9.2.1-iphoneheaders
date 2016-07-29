/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class PSSoftwareUpdateAnimatedIcon, UIProgressView, UILabel, PSWebContainerView, UIImage;

@interface PSSoftwareUpdateTitleCell : PSTableCell {

	int _progressStyle;
	PSSoftwareUpdateAnimatedIcon* _animatedGearView;
	BOOL _animatingGearView;
	UIProgressView* _progressBar;
	UILabel* _updateStatusLabel;
	PSWebContainerView* _releaseNotesSummaryView;

}

@property (nonatomic,retain,readonly) UIImage * gearBackgroundImage; 
@property (nonatomic,retain) UIProgressView * progressBar;                              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UILabel * updateStatusLabel;                               //@synthesize updateStatusLabel=_updateStatusLabel - In the implementation block
@property (nonatomic,retain) PSWebContainerView * releaseNotesSummaryView;              //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
@property (assign,nonatomic) int progressDisplayStyle; 
+(long long)cellStyle;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)didMoveToSuperview;
-(void)setProgress:(float)arg1 ;
-(UIImage *)gearBackgroundImage;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(CGRect)arg1 ;
-(void)sizeToFitWithTable:(id)arg1 ;
-(void)setAnimatingGearView:(BOOL)arg1 ;
-(void)setReleaseNotesSummary:(id)arg1 ;
-(double)preferredHeightWithTable:(id)arg1 ;
-(int)progressDisplayStyle;
-(void)setProgressDisplayStyle:(int)arg1 ;
-(UILabel *)updateStatusLabel;
-(void)setUpdateStatusLabel:(UILabel *)arg1 ;
-(PSWebContainerView *)releaseNotesSummaryView;
-(void)setReleaseNotesSummaryView:(PSWebContainerView *)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

