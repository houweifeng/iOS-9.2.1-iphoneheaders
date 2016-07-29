/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaItem, MPMediaPlaylist, MPMediaQuery, MPRadioStation;

@interface MPMusicPlayerClientState : NSObject {

	BOOL _allowsBackgroundVideo;
	int _backgroundPlaybackAccess;
	MPMediaItem* _firstItem;
	MPMediaPlaylist* _geniusMixPlaylist;
	BOOL _hasAudioBackgroundMode;
	MPMediaQuery* _query;
	MPRadioStation* _radioStation;
	long long _repeatMode;
	BOOL _seeking;
	long long _shuffleMode;
	BOOL _useApplicationSpecificQueue;
	BOOL _videoPlaybackEnabled;

}

@property (assign,nonatomic) BOOL allowsBackgroundVideo;                       //@synthesize allowsBackgroundVideo=_allowsBackgroundVideo - In the implementation block
@property (assign,nonatomic) int backgroundPlaybackAccess;                     //@synthesize backgroundPlaybackAccess=_backgroundPlaybackAccess - In the implementation block
@property (nonatomic,retain) MPMediaItem * firstItem;                          //@synthesize firstItem=_firstItem - In the implementation block
@property (nonatomic,retain) MPMediaPlaylist * geniusMixPlaylist;              //@synthesize geniusMixPlaylist=_geniusMixPlaylist - In the implementation block
@property (assign,nonatomic) BOOL hasAudioBackgroundMode;                      //@synthesize hasAudioBackgroundMode=_hasAudioBackgroundMode - In the implementation block
@property (nonatomic,retain) MPRadioStation * radioStation;                    //@synthesize radioStation=_radioStation - In the implementation block
@property (assign,nonatomic) long long repeatMode;                             //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL seeking;                                     //@synthesize seeking=_seeking - In the implementation block
@property (assign,nonatomic) long long shuffleMode;                            //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,retain) MPMediaQuery * query;                             //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL useApplicationSpecificQueue;                 //@synthesize useApplicationSpecificQueue=_useApplicationSpecificQueue - In the implementation block
@property (assign,nonatomic) BOOL videoPlaybackEnabled;                        //@synthesize videoPlaybackEnabled=_videoPlaybackEnabled - In the implementation block
-(MPMediaQuery *)query;
-(MPMediaItem *)firstItem;
-(void)setQuery:(MPMediaQuery *)arg1 ;
-(void)setRepeatMode:(long long)arg1 ;
-(void)setShuffleMode:(long long)arg1 ;
-(BOOL)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(BOOL)arg1 ;
-(void)setUseApplicationSpecificQueue:(BOOL)arg1 ;
-(void)setVideoPlaybackEnabled:(BOOL)arg1 ;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)useApplicationSpecificQueue;
-(void)setFirstItem:(MPMediaItem *)arg1 ;
-(void)setGeniusMixPlaylist:(MPMediaPlaylist *)arg1 ;
-(void)setRadioStation:(MPRadioStation *)arg1 ;
-(void)setHasAudioBackgroundMode:(BOOL)arg1 ;
-(int)backgroundPlaybackAccess;
-(BOOL)hasAudioBackgroundMode;
-(void)setBackgroundPlaybackAccess:(int)arg1 ;
-(MPMediaPlaylist *)geniusMixPlaylist;
-(BOOL)seeking;
-(BOOL)videoPlaybackEnabled;
-(long long)shuffleMode;
-(MPRadioStation *)radioStation;
-(long long)repeatMode;
@end
