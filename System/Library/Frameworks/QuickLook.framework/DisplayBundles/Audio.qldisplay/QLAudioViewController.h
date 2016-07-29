/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Audio.qldisplay/Audio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Audio/Audio-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIMovieScrubberDelegate.h>
#import <UIKit/UIMovieScrubberDataSource.h>

@class AVPlayerViewController, AVPlayer, NSURL, UIMovieScrubber, NSLayoutConstraint, UIView, NSMutableDictionary, NSObject, QLOverlayPlayButton, NSError, NSString;

@interface QLAudioViewController : UIViewController <UIMovieScrubberDelegate, UIMovieScrubberDataSource> {

	AVPlayerViewController* _playerViewController;
	AVPlayer* _player;
	NSURL* _mediaURL;
	BOOL _shouldPlay;
	BOOL _scrubbing;
	BOOL _endOfMedia;
	double _beforeScrubbingRate;
	UIMovieScrubber* _scrubber;
	NSLayoutConstraint* _topScrubber;
	UIView* _scrubberContainer;
	NSMutableDictionary* _cachedTimeStamps;
	NSObject* _playbackTimeObserver;
	QLOverlayPlayButton* _playButton;
	BOOL _playButtonVisible;
	BOOL _primaryPlayer;
	BOOL _isVisible;
	long long _playingStatus;
	NSError* _error;
	double _scrubberVerticalOffset;

}

@property (readonly) long long playingStatus;                            //@synthesize playingStatus=_playingStatus - In the implementation block
@property (assign) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL playButtonVisible;                     //@synthesize playButtonVisible=_playButtonVisible - In the implementation block
@property (readonly) double duration; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) double scrubberVerticalOffset;              //@synthesize scrubberVerticalOffset=_scrubberVerticalOffset - In the implementation block
@property (assign,nonatomic) BOOL primaryPlayer;                         //@synthesize primaryPlayer=_primaryPlayer - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                             //@synthesize isVisible=_isVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVisible:(BOOL)arg1 ;
-(BOOL)primaryPlayer;
-(id)initWithMediaURL:(id)arg1 ;
-(void)updatePlayingStatus;
-(void)setPlayButtonVisible:(BOOL)arg1 ;
-(long long)playingStatus;
-(void)playerItemDidReachEnd;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)setPrimaryPlayer:(BOOL)arg1 ;
-(void)updateScrubberLayout;
-(BOOL)playButtonVisible;
-(double)scrubberVerticalOffset;
-(void)dealloc;
-(double)duration;
-(void)invalidate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(double)movieScrubberDuration:(id)arg1 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1 ;
-(void)pause;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(NSError *)error;
-(void)play;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)togglePlayPause;
-(void)setError:(NSError *)arg1 ;
@end

