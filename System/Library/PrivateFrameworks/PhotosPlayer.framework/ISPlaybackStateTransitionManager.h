/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISPlaybackSpecObserver.h>

@protocol ISPlaybackStateTransitionManagerDelegate;
@class ISPlaybackSpec, NSHashTable, NSArray, NSString;

@interface ISPlaybackStateTransitionManager : NSObject <ISPlaybackSpecObserver> {

	struct {
		BOOL respondsToDidEndTransition;
	}  _delegateFlags;
	BOOL __needsUpdateAnimations;
	BOOL __didHideCrossfadeContentForCurrentPlayback;
	float _progress;
	ISPlaybackSpec* _playbackSpec;
	NSHashTable* _outputs;
	long long _currentPlaybackState;
	double _endVitalityTransitionDuration;
	id<ISPlaybackStateTransitionManagerDelegate> _delegate;
	NSArray* __stillImageFilters;
	NSArray* __stillImageAnimationsForBeginningPlayback;
	NSArray* __stillImageAnimationsForEndingPlayback;
	NSArray* __stillImageAnimationsForBeginningVitality;
	NSArray* __stillImageAnimationsForEndingVitality;
	NSArray* __videoFilters;
	NSArray* __videoAnimationsForBeginningPlayback;
	NSArray* __videoAnimationsForEndingPlayback;
	NSArray* __videoAnimationsForBeginningVitality;
	NSArray* __videoAnimationsForEndingVitality;
	long long __currentRequestID;

}

@property (nonatomic,retain) ISPlaybackSpec * playbackSpec;                                                                                         //@synthesize playbackSpec=_playbackSpec - In the implementation block
@property (nonatomic,retain) NSHashTable * outputs;                                                                                                 //@synthesize outputs=_outputs - In the implementation block
@property (nonatomic,readonly) long long currentPlaybackState;                                                                                      //@synthesize currentPlaybackState=_currentPlaybackState - In the implementation block
@property (nonatomic,readonly) float progress;                                                                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double endVitalityTransitionDuration;                                                                                  //@synthesize endVitalityTransitionDuration=_endVitalityTransitionDuration - In the implementation block
@property (assign,nonatomic,__weak) id<ISPlaybackStateTransitionManagerDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setStillImageFilters:,nonatomic,retain) NSArray * _stillImageFilters;                                                            //@synthesize _stillImageFilters=__stillImageFilters - In the implementation block
@property (setter=_setStillImageAnimationsForBeginningPlayback:,nonatomic,retain) NSArray * _stillImageAnimationsForBeginningPlayback;              //@synthesize _stillImageAnimationsForBeginningPlayback=__stillImageAnimationsForBeginningPlayback - In the implementation block
@property (setter=_setStillImageAnimationsForEndingPlayback:,nonatomic,retain) NSArray * _stillImageAnimationsForEndingPlayback;                    //@synthesize _stillImageAnimationsForEndingPlayback=__stillImageAnimationsForEndingPlayback - In the implementation block
@property (setter=_setStillImageAnimationsForBeginningVitality:,nonatomic,retain) NSArray * _stillImageAnimationsForBeginningVitality;              //@synthesize _stillImageAnimationsForBeginningVitality=__stillImageAnimationsForBeginningVitality - In the implementation block
@property (setter=_setStillImageAnimationsForEndingVitality:,nonatomic,retain) NSArray * _stillImageAnimationsForEndingVitality;                    //@synthesize _stillImageAnimationsForEndingVitality=__stillImageAnimationsForEndingVitality - In the implementation block
@property (setter=_setVideoFilters:,nonatomic,retain) NSArray * _videoFilters;                                                                      //@synthesize _videoFilters=__videoFilters - In the implementation block
@property (setter=_setVideoAnimationsForBeginningPlayback:,nonatomic,retain) NSArray * _videoAnimationsForBeginningPlayback;                        //@synthesize _videoAnimationsForBeginningPlayback=__videoAnimationsForBeginningPlayback - In the implementation block
@property (setter=_setVideoAnimationsForEndingPlayback:,nonatomic,retain) NSArray * _videoAnimationsForEndingPlayback;                              //@synthesize _videoAnimationsForEndingPlayback=__videoAnimationsForEndingPlayback - In the implementation block
@property (setter=_setVideoAnimationsForBeginningVitality:,nonatomic,retain) NSArray * _videoAnimationsForBeginningVitality;                        //@synthesize _videoAnimationsForBeginningVitality=__videoAnimationsForBeginningVitality - In the implementation block
@property (setter=_setVideoAnimationsForEndingVitality:,nonatomic,retain) NSArray * _videoAnimationsForEndingVitality;                              //@synthesize _videoAnimationsForEndingVitality=__videoAnimationsForEndingVitality - In the implementation block
@property (assign,setter=_setNeedsUpdateAnimations:,nonatomic) BOOL _needsUpdateAnimations;                                                         //@synthesize _needsUpdateAnimations=__needsUpdateAnimations - In the implementation block
@property (assign,setter=_setCurrentRequestID:,nonatomic) long long _currentRequestID;                                                              //@synthesize _currentRequestID=__currentRequestID - In the implementation block
@property (assign,setter=_setDidHideCrossfadeContentForCurrentPlayback:,nonatomic) BOOL _didHideCrossfadeContentForCurrentPlayback;                 //@synthesize _didHideCrossfadeContentForCurrentPlayback=__didHideCrossfadeContentForCurrentPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ISPlaybackStateTransitionManagerDelegate>)arg1 ;
-(id)init;
-(id<ISPlaybackStateTransitionManagerDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(float)progress;
-(void)_setCurrentRequestID:(long long)arg1 ;
-(long long)_currentRequestID;
-(void)setPlaybackSpec:(ISPlaybackSpec *)arg1 ;
-(ISPlaybackSpec *)playbackSpec;
-(NSHashTable *)outputs;
-(void)setOutputs:(NSHashTable *)arg1 ;
-(void)setEndVitalityTransitionDuration:(double)arg1 ;
-(void)hideCrossfadeContentWithBlurAndScale:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)willTransitionToPlaybackState:(long long)arg1 withProgress:(float)arg2 ;
-(long long)currentPlaybackState;
-(long long)performTransitionToPlaybackState:(long long)arg1 withProgress:(float)arg2 ;
-(void)_invalidateAnimations;
-(void)_updateAnimationsIfNeeded;
-(NSArray *)_videoFilters;
-(NSArray *)_stillImageFilters;
-(void)_setDidHideCrossfadeContentForCurrentPlayback:(BOOL)arg1 ;
-(NSArray *)_videoAnimationsForBeginningPlayback;
-(NSArray *)_stillImageAnimationsForBeginningPlayback;
-(NSArray *)_videoAnimationsForEndingPlayback;
-(NSArray *)_stillImageAnimationsForEndingPlayback;
-(NSArray *)_videoAnimationsForEndingVitality;
-(NSArray *)_stillImageAnimationsForEndingVitality;
-(NSArray *)_videoAnimationsForBeginningVitality;
-(NSArray *)_stillImageAnimationsForBeginningVitality;
-(void)_notifyDelegateDidEndTransitionToPlaybackState:(long long)arg1 forRequestID:(long long)arg2 finished:(BOOL)arg3 ;
-(BOOL)_didHideCrossfadeContentForCurrentPlayback;
-(void)_setNeedsUpdateAnimations:(BOOL)arg1 ;
-(BOOL)_needsUpdateAnimations;
-(double)endVitalityTransitionDuration;
-(void)_setStillImageFilters:(id)arg1 ;
-(void)_setVideoFilters:(id)arg1 ;
-(void)_setStillImageAnimationsForBeginningPlayback:(id)arg1 ;
-(void)_setVideoAnimationsForBeginningPlayback:(id)arg1 ;
-(void)_setStillImageAnimationsForEndingPlayback:(id)arg1 ;
-(void)_setVideoAnimationsForEndingPlayback:(id)arg1 ;
-(void)_setStillImageAnimationsForBeginningVitality:(id)arg1 ;
-(void)_setVideoAnimationsForBeginningVitality:(id)arg1 ;
-(void)_setStillImageAnimationsForEndingVitality:(id)arg1 ;
-(void)_setVideoAnimationsForEndingVitality:(id)arg1 ;
-(void)playbackSpecDidChange:(id)arg1 ;
@end

