/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NACVolumeController.h>

@protocol NACVolumeControllerDelegate;
@class MPVolumeController, MPAVRoutingController, NSString, NSCountedSet, NACEventThrottler;

@interface NACVolumeControllerLocal : NSObject <MPVolumeControllerDelegate, MPAVRoutingControllerDelegate, NACVolumeController> {

	MPVolumeController* _volumeController;
	MPAVRoutingController* _routingController;
	NSString* _audioCategory;
	NSCountedSet* _volumeSetHistory;
	NACEventThrottler* _volumeThrottler;
	NACEventThrottler* _hapticThrottler;
	BOOL _systemMuted;
	id<NACVolumeControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted;                                      //@synthesize systemMuted=_systemMuted - In the implementation block
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(id)init;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)setVolumeValue:(float)arg1 ;
-(float)EUVolumeLimit;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(float)volumeValue;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)beginObservingVolume;
-(void)endObservingVolume;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(void)beginObservingHapticIntensity;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isVolumeWarningEnabled;
-(void)_setVolumeValue:(id)arg1 ;
-(void)_setHapticIntensity:(id)arg1 ;
-(void)setVolumeValue:(float)arg1 muted:(BOOL)arg2 overrideEULimit:(BOOL)arg3 ;
-(float)hapticIntensity;
-(BOOL)isSystemMuted;
-(void)endObservingHapticIntensity;
-(void)playPreview;
-(void)_hapticIntensityDidChange:(id)arg1 ;
@end

