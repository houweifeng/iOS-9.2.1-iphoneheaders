/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MPAVRoutingSheet, MPAVRoutingController, UIButton, UILabel, MPAudioVideoRoutingPopoverController, MPVolumeSlider, UIImage, NSString;

@interface MPVolumeView : UIView <MPAVRoutingControllerDelegate, NSCoding> {

	MPAVRoutingSheet* _routingSheet;
	MPAVRoutingController* _routingController;
	BOOL _hasNonDefaultRouteButtonImages;
	BOOL _hasNonDefaultMaxVolumeSliderImage;
	BOOL _hasNonDefaultMinVolumeSliderImage;
	BOOL _hidesRouteLabelWhenNoRouteChoice;
	UIButton* _routeButton;
	BOOL _routeButtonShowsTouchWhenHighlighted;
	BOOL _routeDiscoveryEnabled;
	UILabel* _routeLabel;
	MPAudioVideoRoutingPopoverController* _routePopoverController;
	BOOL _showingButton;
	BOOL _showingLabel;
	BOOL _showingSlider;
	BOOL _showsRouteButton;
	BOOL _showsVolumeSlider;
	long long _style;
	MPVolumeSlider* _volumeSlider;
	BOOL _volumeSliderShrinksFromBothEnds;
	BOOL _wirelessRouteIsPicked;
	BOOL _wirelessRoutesAvailable;
	BOOL _pushedRouteDiscoveryModeState;
	unsigned long long _routePopoverPermittedArrowDirections;

}

@property (assign,nonatomic) BOOL showsVolumeSlider; 
@property (assign,nonatomic) BOOL showsRouteButton; 
@property (getter=areWirelessRoutesAvailable,nonatomic,readonly) BOOL wirelessRoutesAvailable; 
@property (getter=isWirelessRouteActive,nonatomic,readonly) BOOL wirelessRouteActive; 
@property (nonatomic,retain) UIImage * volumeWarningSliderImage; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) MPVolumeSlider * volumeSlider; 
@property (assign,nonatomic) BOOL volumeSliderShrinksFromBothEnds; 
@property (assign,nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isShowingRouteButton; 
@property (assign,nonatomic) BOOL routeButtonShowsTouchWhenHighlighted; 
@property (assign,nonatomic) unsigned long long routePopoverPermittedArrowDirections;                       //@synthesize routePopoverPermittedArrowDirections=_routePopoverPermittedArrowDirections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)isVisible;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)_createSubviews;
-(void)_registerNotifications;
-(void)_initWithStyle:(long long)arg1 ;
-(void)_unregisterNotifications;
-(void)_setShowsVolumeSlider:(BOOL)arg1 ;
-(void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setRouteDiscoveryEnabled:(BOOL)arg1 ;
-(void)_updateWirelessRouteStatus;
-(void)_getDefaultVolumeSliderFrame:(CGRect*)arg1 routeButtonFrame:(CGRect*)arg2 forBounds:(CGRect)arg3 ;
-(BOOL)routeButtonShowsTouchWhenHighlighted;
-(id)_defaultRouteButtonImageAsSelected:(BOOL)arg1 ;
-(void)_displayAudioRoutePicker;
-(CGRect)volumeSliderRectForBounds:(CGRect)arg1 ;
-(CGRect)routeButtonRectForBounds:(CGRect)arg1 ;
-(BOOL)isShowingRouteButton;
-(BOOL)isWirelessRouteActive;
-(BOOL)areWirelessRoutesAvailable;
-(id)minimumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(id)maximumVolumeSliderImageForState:(unsigned long long)arg1 ;
-(UIImage *)volumeWarningSliderImage;
-(id)routeButtonImageForState:(unsigned long long)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setVolumeWarningSliderImage:(UIImage *)arg1 ;
-(void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)setShowsRouteButton:(BOOL)arg1 ;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)showsRouteButton;
-(BOOL)showsVolumeSlider;
-(id)volumeThumbImageForState:(unsigned long long)arg1 ;
-(CGRect)volumeThumbRectForBounds:(CGRect)arg1 volumeSliderRect:(CGRect)arg2 value:(float)arg3 ;
-(BOOL)hidesRouteLabelWhenNoRouteChoice;
-(BOOL)volumeSliderShrinksFromBothEnds;
-(void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1 ;
-(void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1 ;
-(void)dismissActiveOverlaysAnimated:(BOOL)arg1 ;
-(BOOL)isShowingActiveOverlays;
-(void)_setVolumeAudioCategory:(id)arg1 ;
-(id)_routeButton;
-(unsigned long long)routePopoverPermittedArrowDirections;
-(void)setRoutePopoverPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(MPVolumeSlider *)volumeSlider;
@end

