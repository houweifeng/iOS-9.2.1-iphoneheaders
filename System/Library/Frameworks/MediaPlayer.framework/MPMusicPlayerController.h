/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPMusicPlayerController
@optional
-(void)stop;
-(id)numberOfItems;
-(void)pause;
-(void)setRepeatMode:(id)arg1;
-(void)prepareToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(id)arg1;
-(id)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
-(void)setShuffleMode:(id)arg1;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)arg1;
-(id)setQueueWithSeedItems:(id)arg1;
-(id)nowPlayingItemAtIndex:(id)arg1;
-(void)pauseWithFadeoutDuration:(id)arg1;
-(id)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(id)arg1;
-(id)indexOfNowPlayingItem;
-(id)unshuffledIndexOfNowPlayingItem;
-(id)isNowPlayingItemFromGeniusMix;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)arg1;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1;
-(void)setQueueWithRadioStation:(id)arg1;
-(id)userQueueModificationsDisabled;
-(void)setUserQueueModificationsDisabled:(id)arg1;
-(id)skipInDirection:(id)arg1;
-(id)serverIsAlive;
-(void)setUseApplicationSpecificQueue:(id)arg1;
-(void)registerForServerDiedNotifications;
-(void)setQueueWithQuery:(id)arg1;
-(void)playItem:(id)arg1;
-(id)queueAsQuery;
-(id)queueAsRadioStation;
-(void)prepareQueueForPlayback;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(void)setQueueWithItemCollection:(id)arg1;
-(void)setNowPlayingItem:(id)arg1;
-(void)play;
-(id)playbackState;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)arg1;
-(id)playbackSpeed;
-(id)shuffleMode;
-(void)setPlaybackSpeed:(id)arg1;
-(id)repeatMode;
-(void)shuffle;

@end

