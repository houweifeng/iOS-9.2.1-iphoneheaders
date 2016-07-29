/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/RCGLWaveformRendererDelegate.h>
#import <libobjc.A.dylib/RCWaveformSelectionOverlayDelegate.h>

@protocol RCGLWaveformViewDelegate;
@class RCWaveformScrollView, RCGLWaveformRenderer, RCWaveformSelectionOverlay, RCAcousticAnnotationView, UIView, NSMutableArray, NSTimer, RCUIConfiguration, RCLayoutMetrics, RCWaveformDataSource, NSString;

@interface RCGLWaveformViewController : UIViewController <UIScrollViewDelegate, RCGLWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate> {

	RCWaveformScrollView* _scrollView;
	RCGLWaveformRenderer* _rendererController;
	RCWaveformSelectionOverlay* _selectionOverlay;
	RCAcousticAnnotationView* _acousticAnnotationView;
	UIView* _bottomLineView;
	UIView* _topLineView;
	NSMutableArray* _timeMarkerViews;
	NSTimer* _overlayAutoscrollTimer;
	SCD_Struct_RC4 _visibleTimeRangeBeforeSelectionTracking;
	BOOL _timeMarkerViewsNeedInitialLayout;
	BOOL _timeMarkerViewsUpdatesDisabled;
	BOOL _scrubbing;
	BOOL _dragEnding;
	BOOL _shouldUpdateInDisplayLink;
	float _resumingToForegroundAutoscrollRate;
	double _layoutWidth;
	double _timeBeganAutoscrolling;
	BOOL _isScrollViewAutoScrolling;
	BOOL _isScrollViewAutoScrollingPaused;
	BOOL _isScrollViewAutoScrollingBeginning;
	double _overlayAutoscrollRateForSelectionTracking;
	double _overlayAutoscrollBaseDuration;
	BOOL _scrubbingEnabled;
	BOOL _playing;
	BOOL _capturing;
	BOOL _clipTimeMarkersToDuration;
	BOOL _selectedTimeRangeEditingEnabled;
	BOOL _selectedTimeRangeScrubbingEnabled;
	id<RCGLWaveformViewDelegate> _delegate;
	RCUIConfiguration* _UIConfiguration;
	RCLayoutMetrics* _layoutMetrics;
	unsigned long long _currentTimeDisplayOptions;
	double _currentTime;
	double _duration;
	double _selectionVisibleMargin;
	double _maximumSelectionDuration;
	SCD_Struct_RC4 _visibleTimeRange;
	SCD_Struct_RC4 _highlightTimeRange;
	SCD_Struct_RC4 _selectedTimeRange;

}

@property (nonatomic,retain) RCWaveformDataSource * dataSource; 
@property (assign,nonatomic,__weak) id<RCGLWaveformViewDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                        //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL playing;                                                                                 //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL capturing;                                                                               //@synthesize capturing=_capturing - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;                                                            //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                                                              //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long currentTimeDisplayOptions;                                                 //@synthesize currentTimeDisplayOptions=_currentTimeDisplayOptions - In the implementation block
@property (assign,nonatomic) BOOL clipTimeMarkersToDuration;                                                               //@synthesize clipTimeMarkersToDuration=_clipTimeMarkersToDuration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                                                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 visibleTimeRange;                                                              //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 highlightTimeRange;                                                            //@synthesize highlightTimeRange=_highlightTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC4 selectedTimeRange;                                                             //@synthesize selectedTimeRange=_selectedTimeRange - In the implementation block
@property (assign,nonatomic) double selectionVisibleMargin;                                                                //@synthesize selectionVisibleMargin=_selectionVisibleMargin - In the implementation block
@property (assign,nonatomic) double maximumSelectionDuration;                                                              //@synthesize maximumSelectionDuration=_maximumSelectionDuration - In the implementation block
@property (assign,getter=isSelectedTimeRangeEditingEnabled,nonatomic) BOOL selectedTimeRangeEditingEnabled;                //@synthesize selectedTimeRangeEditingEnabled=_selectedTimeRangeEditingEnabled - In the implementation block
@property (assign,getter=isSelectedTimeRangeEditingEnabled,nonatomic) BOOL selectedTimeRangeScrubbingEnabled;              //@synthesize selectedTimeRangeScrubbingEnabled=_selectedTimeRangeScrubbingEnabled - In the implementation block
@property (getter=isAutoscrolling,nonatomic,readonly) BOOL autoscrolling;                                                  //@synthesize isScrollViewAutoScrolling=_isScrollViewAutoScrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(RCWaveformDataSource *)arg1 ;
-(void)setDelegate:(id<RCGLWaveformViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(RCWaveformDataSource *)dataSource;
-(id<RCGLWaveformViewDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)playing;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(BOOL)scrubbingEnabled;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(void)rc_screenUpdatesDisabledDidChange;
-(void)setCurrentTimeDisplayOptions:(unsigned long long)arg1 ;
-(void)setSelectionVisibleMargin:(double)arg1 ;
-(SCD_Struct_RC4)selectedTimeRange;
-(void)setVisibleTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)visibleTimeRange;
-(void)setHighlightTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)highlightTimeRange;
-(CGRect)waveformRectForLayoutBounds:(CGRect)arg1 ;
-(double)currentTimeIndicatorCoordinate;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(void)setClipTimeMarkersToDuration:(BOOL)arg1 ;
-(void)setSelectedTimeRange:(SCD_Struct_RC4)arg1 animationDuration:(double)arg2 ;
-(void)setMaximumSelectionDuration:(double)arg1 ;
-(void)beginAutoscrollingAtTime:(double)arg1 atRate:(float)arg2 ;
-(BOOL)isAutoscrolling;
-(void)setCapturing:(BOOL)arg1 ;
-(void)setSelectedTimeRangeEditingEnabled:(BOOL)arg1 ;
-(void)endAutoscrolling;
-(double)maximumSelectionDuration;
-(void)setVisibleTimeRange:(SCD_Struct_RC4)arg1 animationDuration:(double)arg2 ;
-(SCD_Struct_RC4)setHighlightTimeRange;
-(RCUIConfiguration *)UIConfiguration;
-(RCLayoutMetrics *)layoutMetrics;
-(void)waveformRendererContentDidFinishLoading:(id)arg1 ;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(void)waveformRendererDidSynchronizeToDisplayLink:(id)arg1 ;
-(void)waveformRenderer:(id)arg1 contentWidthDidChange:(double)arg2 ;
-(void)_applyUIConfiguration;
-(void)_updateWaveformViewContentSizeAndOffset;
-(void)_updateAnnotationViews;
-(void)_updateSelectionOverlayWithAnimationDuration:(double)arg1 ;
-(void)_updateCurrentTimeDisplay;
-(void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
-(void)_setVisibleTimeRange:(SCD_Struct_RC4)arg1 animationDuration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setSelectedTimeRange:(SCD_Struct_RC4)arg1 updateVisibleTimeRange:(BOOL)arg2 notifyDelegate:(BOOL)arg3 animationDuration:(double)arg4 ;
-(SCD_Struct_RC4)_visibleTimeRangeForCurrentSelectionTimeRange;
-(void)setAutoscrolling:(BOOL)arg1 ;
-(void)_startDisplayLink;
-(void)_updateRendererControllerPausedState;
-(void)fixupScrollPositionToMatchIndicatorPositionTime;
-(void)reloadOverlayOffsets;
-(void)_scrollViewPanGestureRecognized:(id)arg1 ;
-(void)_setTimeMarkerViewsNeedInitialLayout:(BOOL)arg1 ;
-(void)_updateVisibleAreaWithAnimationDuration:(double)arg1 ;
-(void)pauseAutoscrolling;
-(BOOL)isSelectedTimeRangeEditingEnabled;
-(BOOL)isSelectedTimeRangeEditingEnabled;
-(BOOL)_isScrubbingSelectionTimeRange;
-(void)setSelectedTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)_scrubbingDidFinish;
-(void)resumeAutoscrollingIfPaused;
-(void)_setTimeMarkerViewUpdatesDisabled:(BOOL)arg1 ;
-(void)_autoscrollOverlayIfNecessary;
-(SCD_Struct_RC4)timeRangeByInsettingVisibleTimeRange:(SCD_Struct_RC4)arg1 inset:(double)arg2 ;
-(CGRect)_frameForTimeMarkerView:(id)arg1 ;
-(BOOL)_shouldAutoAnimateScrollChanges;
-(BOOL)_shouldCenterTimeIndicator;
-(void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4 ;
-(void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 assetCurrentTime:(BOOL)arg4 ;
-(SCD_Struct_RC4)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(SCD_Struct_RC4)arg2 isTracking:(BOOL)arg3 ;
-(double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(BOOL)arg3 ;
-(double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2 ;
-(double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2 ;
-(double)waveformSelectionOverlayGetCurrentTime:(id)arg1 ;
-(BOOL)isScrollViewAutoScrolling;
-(BOOL)_isScrubbing;
-(void)scrollView:(id)arg1 willChangeContentOffsetToOffset:(CGPoint)arg2 ;
-(void)scrollView:(id)arg1 didChangeContentOffsetToOffset:(CGPoint)arg2 ;
-(void)_stopDisplayLink;
-(BOOL)capturing;
-(unsigned long long)currentTimeDisplayOptions;
-(BOOL)clipTimeMarkersToDuration;
-(double)selectionVisibleMargin;
-(void)setSelectedTimeRangeScrubbingEnabled:(BOOL)arg1 ;
@end

