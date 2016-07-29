/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADPrerollViewDelegate.h>
#import <libobjc.A.dylib/ADPlayerDelegate.h>

@class AVPlayerViewController, MPMoviePlayerController, ADPrerollView, ADPlayer, NSString;

@interface ADPrerollController : NSObject <ADPrerollViewDelegate, ADPlayerDelegate> {

	AVPlayerViewController* _avPlayerViewController;
	MPMoviePlayerController* _moviePlayerController;
	BOOL _setupInProgress;
	BOOL _isObservingThirdPartyAVPlayer;
	unsigned long long _type;
	ADPrerollView* _view;
	ADPlayer* _adPlayer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerViewController * avPlayerViewController; 
@property (assign,nonatomic,__weak) MPMoviePlayerController * moviePlayerController; 
@property (nonatomic,retain) ADPrerollView * view;                                                //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) ADPlayer * adPlayer;                                                 //@synthesize adPlayer=_adPlayer - In the implementation block
@property (assign,nonatomic) BOOL setupInProgress;                                                //@synthesize setupInProgress=_setupInProgress - In the implementation block
@property (assign,nonatomic) BOOL isObservingThirdPartyAVPlayer;                                  //@synthesize isObservingThirdPartyAVPlayer=_isObservingThirdPartyAVPlayer - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(ADPrerollView *)view;
-(unsigned long long)type;
-(void)setView:(ADPrerollView *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_advertisementView;
-(void)shutdown;
-(void)doneButtonPressed;
-(void)actionButtonPressed;
-(id)initWithAVPlayerViewController:(id)arg1 ;
-(id)initWithMoviePlayerController:(id)arg1 ;
-(void)setAvPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)_appWillResignActive;
-(void)setMoviePlayerController:(MPMoviePlayerController *)arg1 ;
-(BOOL)setupInProgress;
-(void)setSetupInProgress:(BOOL)arg1 ;
-(BOOL)_beginPlayback;
-(BOOL)isObservingThirdPartyAVPlayer;
-(AVPlayerViewController *)avPlayerViewController;
-(ADPlayer *)adPlayer;
-(BOOL)_isEmbedded;
-(MPMoviePlayerController *)moviePlayerController;
-(void)_handlePlaybackCompletion:(BOOL)arg1 ;
-(void)setIsObservingThirdPartyAVPlayer:(BOOL)arg1 ;
-(void)setAdPlayer:(ADPlayer *)arg1 ;
-(BOOL)prerollViewRequestsEmbeddedStatus;
-(void)playButtonPressed;
-(void)pauseButtonPressed;
-(void)skipButtonPressed;
-(void)adPlayerDidTimeout:(id)arg1 ;
-(void)adPlayerFailedToLoadAsset:(id)arg1 ;
-(void)adPlayerFailedToPlayWithUnknownError:(id)arg1 ;
-(void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3 ;
-(void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2 ;
-(void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3 ;
-(void)adPlayerDidFinishPlayback:(id)arg1 ;
-(id)viewControllerForActionFromAdPlayer:(id)arg1 ;
-(void)playPrerollAdWithCompletion:(/*^block*/id)arg1 ;
-(void)adPlayerDidBeginAction:(id)arg1 ;
@end

