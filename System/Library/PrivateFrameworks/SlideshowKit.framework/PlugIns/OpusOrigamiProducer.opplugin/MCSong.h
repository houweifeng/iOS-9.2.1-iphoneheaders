/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {

	BOOL mStartTimeIsDefined;
	BOOL mDurationIsDefined;
	float mVolume;
	MCAssetAudio* mAsset;
	double mFadeInDuration;
	double mFadeOutDuration;
	unsigned long long mIndex;
	double mStartTime;
	double mDuration;
	MCAudioPlaylist* mAudioPlaylistIfAudioPlaylistSong;
	MCSlide* mSlideIfSlideSong;

}

@property (retain) MCAssetAudio * asset; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) unsigned long long index; 
@property (nonatomic,readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (assign) MCAudioPlaylist * audioPlaylistIfAudioPlaylistSong; 
@property (assign) MCSlide * slideIfSlideSong; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(BOOL)startTimeIsDefined;
-(BOOL)durationIsDefined;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setAudioPlaylistIfAudioPlaylistSong:(MCAudioPlaylist *)arg1 ;
-(void)undefineStartTime;
-(void)undefineDuration;
-(void)setSlideIfSlideSong:(MCSlide *)arg1 ;
-(MCSlide *)slideIfSlideSong;
-(MCAudioPlaylist *)audioPlaylistIfAudioPlaylistSong;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)index;
-(MCAssetAudio *)asset;
-(double)startTime;
-(void)setAsset:(MCAssetAudio *)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setVolume:(float)arg1 ;
-(id)imprint;
-(float)volume;
@end

