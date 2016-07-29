/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface RCUIConfiguration : NSObject <NSCopying> {

	BOOL _waveformBoundaryLineDimInSelectionMode;
	BOOL _showsWaveformCenterline;
	float _minimumDecibelDisplayRange;
	float _maximumDecibelDisplayRange;
	NSString* _debugIdentifier;
	UIColor* _backgroundColor;
	UIColor* _waveformColor;
	UIColor* _waveformBoundaryLineColor;
	UIColor* _waveformHighlightColor;
	UIColor* _timeLineMarkerColor;
	UIColor* _timeLineTimeColor;
	UIColor* _acousticValueColor;
	UIColor* _acousticGradientMaskEndColor;
	double _acousticAnnotationVerticalMargin;
	UIColor* _playbackPositionBarColor;
	UIColor* _playbackPositionTimeColor;
	UIColor* _selectionOverlayColor;
	UIColor* _selectionOverlayEndpointBarColor;
	UIColor* _selectionOverlayEndpointTimeColor;

}

@property (nonatomic,retain) NSString * debugIdentifier;                               //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * waveformColor;                                  //@synthesize waveformColor=_waveformColor - In the implementation block
@property (nonatomic,retain) UIColor * waveformBoundaryLineColor;                      //@synthesize waveformBoundaryLineColor=_waveformBoundaryLineColor - In the implementation block
@property (nonatomic,retain) UIColor * waveformHighlightColor;                         //@synthesize waveformHighlightColor=_waveformHighlightColor - In the implementation block
@property (assign,nonatomic) BOOL waveformBoundaryLineDimInSelectionMode;              //@synthesize waveformBoundaryLineDimInSelectionMode=_waveformBoundaryLineDimInSelectionMode - In the implementation block
@property (assign,nonatomic) BOOL showsWaveformCenterline;                             //@synthesize showsWaveformCenterline=_showsWaveformCenterline - In the implementation block
@property (nonatomic,retain) UIColor * timeLineMarkerColor;                            //@synthesize timeLineMarkerColor=_timeLineMarkerColor - In the implementation block
@property (nonatomic,retain) UIColor * timeLineTimeColor;                              //@synthesize timeLineTimeColor=_timeLineTimeColor - In the implementation block
@property (nonatomic,retain) UIColor * acousticValueColor;                             //@synthesize acousticValueColor=_acousticValueColor - In the implementation block
@property (nonatomic,retain) UIColor * acousticGradientMaskEndColor;                   //@synthesize acousticGradientMaskEndColor=_acousticGradientMaskEndColor - In the implementation block
@property (assign,nonatomic) double acousticAnnotationVerticalMargin;                  //@synthesize acousticAnnotationVerticalMargin=_acousticAnnotationVerticalMargin - In the implementation block
@property (assign,nonatomic) float minimumDecibelDisplayRange;                         //@synthesize minimumDecibelDisplayRange=_minimumDecibelDisplayRange - In the implementation block
@property (assign,nonatomic) float maximumDecibelDisplayRange;                         //@synthesize maximumDecibelDisplayRange=_maximumDecibelDisplayRange - In the implementation block
@property (nonatomic,retain) UIColor * playbackPositionBarColor;                       //@synthesize playbackPositionBarColor=_playbackPositionBarColor - In the implementation block
@property (nonatomic,retain) UIColor * playbackPositionTimeColor;                      //@synthesize playbackPositionTimeColor=_playbackPositionTimeColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionOverlayColor;                          //@synthesize selectionOverlayColor=_selectionOverlayColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionOverlayEndpointBarColor;               //@synthesize selectionOverlayEndpointBarColor=_selectionOverlayEndpointBarColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionOverlayEndpointTimeColor;              //@synthesize selectionOverlayEndpointTimeColor=_selectionOverlayEndpointTimeColor - In the implementation block
+(id)defaultConfiguration;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAcousticGradientMaskEndColor:(UIColor *)arg1 ;
-(void)setWaveformColor:(UIColor *)arg1 ;
-(void)setWaveformHighlightColor:(UIColor *)arg1 ;
-(void)setWaveformBoundaryLineColor:(UIColor *)arg1 ;
-(void)setWaveformBoundaryLineDimInSelectionMode:(BOOL)arg1 ;
-(void)setTimeLineTimeColor:(UIColor *)arg1 ;
-(void)setTimeLineMarkerColor:(UIColor *)arg1 ;
-(void)setSelectionOverlayEndpointTimeColor:(UIColor *)arg1 ;
-(void)setAcousticAnnotationVerticalMargin:(double)arg1 ;
-(void)setPlaybackPositionTimeColor:(UIColor *)arg1 ;
-(void)setSelectionOverlayColor:(UIColor *)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(UIColor *)waveformColor;
-(UIColor *)selectionOverlayColor;
-(UIColor *)selectionOverlayEndpointBarColor;
-(void)setSelectionOverlayEndpointBarColor:(UIColor *)arg1 ;
-(UIColor *)selectionOverlayEndpointTimeColor;
-(UIColor *)playbackPositionTimeColor;
-(UIColor *)waveformBoundaryLineColor;
-(BOOL)showsWaveformCenterline;
-(float)maximumDecibelDisplayRange;
-(UIColor *)waveformHighlightColor;
-(BOOL)waveformBoundaryLineDimInSelectionMode;
-(void)setAcousticValueColor:(UIColor *)arg1 ;
-(void)setPlaybackPositionBarColor:(UIColor *)arg1 ;
-(void)setShowsWaveformCenterline:(BOOL)arg1 ;
-(void)setMinimumDecibelDisplayRange:(float)arg1 ;
-(void)setMaximumDecibelDisplayRange:(float)arg1 ;
-(UIColor *)timeLineTimeColor;
-(UIColor *)timeLineMarkerColor;
-(UIColor *)acousticValueColor;
-(UIColor *)playbackPositionBarColor;
-(UIColor *)acousticGradientMaskEndColor;
-(double)acousticAnnotationVerticalMargin;
-(float)minimumDecibelDisplayRange;
-(NSString *)debugIdentifier;
@end

