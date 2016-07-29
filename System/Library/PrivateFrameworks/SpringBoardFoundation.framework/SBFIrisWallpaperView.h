/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <libobjc.A.dylib/ISPlayerViewDelegatePrivate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperView.h>

@protocol SBFIrisWallpaperView <NSObject>
@property (assign,nonatomic) id<SBFIrisWallpaperViewDelegate> irisDelegate; 
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@required
-(id)irisGestureRecognizer;
-(long long)irisPlaybackState;
-(BOOL)isIrisInteracting;
-(void)setIrisDelegate:(id)arg1;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;

@end


@protocol SBFIrisWallpaperViewDelegate;
@class UIImageView, NSURL, ISAVPlayer, ISPlayerView, UIGestureRecognizer, NSString;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {

	id<SBFIrisWallpaperViewDelegate> _irisDelegate;
	long long _currentMode;
	UIImageView* _imageView;
	NSURL* _videoFileURL;
	double _stillTimeInVideo;
	BOOL _useRewindPlaybackStyle;
	ISAVPlayer* _prewiredAVPlayer;
	CGSize _prewiredSize;
	ISPlayerView* _playerView;
	long long _playerState;
	long long _playbackState;
	BOOL _isInteracting;
	UIGestureRecognizer* _playerGestureRecognizer;

}

@property (nonatomic,readonly) long long currentIrisMode;                                //@synthesize currentMode=_currentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFIrisWallpaperViewDelegate> irisDelegate; 
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
+(void)initialize;
-(void)dealloc;
-(void)_populateContentView;
-(BOOL)_setupContentViewForMode:(long long)arg1 ;
-(void)_setPlayerGestureRecognizer:(id)arg1 ;
-(void)_resetPrewiredAVPlayer;
-(id)irisGestureRecognizer;
-(long long)irisPlaybackState;
-(BOOL)isIrisInteracting;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 wallpaperVideoURL:(id)arg3 stillTimeInVideo:(double)arg4 treatWallpaper:(BOOL)arg5 variant:(long long)arg6 prewireMemory:(BOOL)arg7 useRewindPlaybackStyle:(BOOL)arg8 ;
-(void)switchToIrisMode:(long long)arg1 ;
-(void)_setupContentView;
-(long long)currentIrisMode;
-(void)playerViewGestureRecognizerDidChange:(id)arg1 ;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(void)_setImage:(id)arg1 ;
-(id)avPlayerForPlayerView:(id)arg1 ;
@end

