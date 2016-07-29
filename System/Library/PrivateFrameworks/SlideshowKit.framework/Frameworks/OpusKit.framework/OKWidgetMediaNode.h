/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetNode.h>
#import <libobjc.A.dylib/OKViewControllerAudioSupport.h>

@class NSURL, AVPlayer, AVPlayerLayer, OKAudioDucker, NSString, SCNPlane, SCNMaterialProperty;

@interface OKWidgetMediaNode : OKWidgetNode <OKViewControllerAudioSupport> {

	NSURL* _videoURL;
	AVPlayer* _videoPlayer;
	AVPlayerLayer* _videoPlayerLayer;
	BOOL _autoplay;
	BOOL _loop;
	BOOL _shouldPlayVideoWhenAvailable;
	float _rate;
	float _seekToTime;
	OKAudioDucker* _audioDucker;
	float _requiredDuckLevel;
	float _audioVolume;
	NSString* _audioTrackID;
	NSURL* _mediaURL;
	long long _contentMode;
	SCNPlane* _mediaHolder;
	BOOL _loadRessourceNeeded;
	SCNMaterialProperty* _diffuse;
	double _lastResolution;
	SCNVector3 _visionVector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(double)duration;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay;
-(void)seekToTime:(double)arg1 ;
-(double)currentTime;
-(void)setVideoURL:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(long long)settingContentMode;
-(void)setSettingContentMode:(long long)arg1 ;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(BOOL)settingLoop;
-(void)setSettingLoop:(BOOL)arg1 ;
-(void)applyLayoutSettings;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)prepareForRefresh;
-(void)setSettingHeight:(double)arg1 ;
-(void)_cancelThumbnailOperations:(id)arg1 ;
-(void)_reloadThumbnailContent;
-(void)loadRessourcesIfNeeded;
-(CGSize)calculateBestResolutionForMediaNode;
-(SCNVector3)calculateAspectFill:(id)arg1 ;
-(void)reloadMediaURL:(id)arg1 size:(CGSize)arg2 lowQuality:(BOOL)arg3 highQuality:(BOOL)arg4 identifier:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_reloadThumbnailContent:(BOOL)arg1 ;
-(void)resetVideo;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)playVideo:(id)arg1 ;
-(void)pauseVideo:(id)arg1 ;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(void)beginFadingWithDuration:(double)arg1 ;
-(double)requiredDuckLevel;
-(void)setPlaybackAudioVolume:(double)arg1 ;
-(id)settingUrl;
-(void)setSettingUrl:(id)arg1 ;
-(BOOL)settingsAutoplay;
-(void)setSettingWidth:(double)arg1 ;
-(float)settingRate;
-(void)setSettingRate:(float)arg1 ;
-(float)settingSeekToTime;
-(void)setSettingSeekToTime:(float)arg1 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg1 ;
-(float)settingAudioVolume;
-(void)setSettingAudioVolume:(float)arg1 ;
-(void)unloadRessources;
-(SCNVector3)visionVector;
@end

