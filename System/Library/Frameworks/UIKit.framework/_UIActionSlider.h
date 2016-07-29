/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIActionSliderLabel, _UIActionSliderDelegate;
@class UIView, _UIBackdropView, _UIActionSliderKnob, UIImageView, UIPanGestureRecognizer, NSString, UIFont, _UIVibrantSettings, UIImage, UIColor, UILabel, UIBezierPath;

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate> {

	UIView* _contentView;
	UIView* _trackDodgeView;
	UIView* _trackBackgroundView;
	_UIBackdropView* _trackBlurView;
	UIView* _trackSolidView;
	_UIActionSliderKnob* _knobView;
	UIImageView* _knobImageView;
	UIView*<_UIActionSliderLabel> _trackLabel;
	UIPanGestureRecognizer* _slideGestureRecognizer;
	CGPoint _slideGestureInitialPoint;
	double _knobPosition;
	double _trackWidthProportion;
	BOOL _showingTrackLabel;
	BOOL _animating;
	long long _style;
	long long _textStyle;
	NSString* _trackText;
	UIFont* _trackFont;
	double _trackTextBaselineFromBottom;
	id<_UIActionSliderDelegate> _delegate;
	double _knobWidth;
	double _cachedTrackMaskWidth;
	_UIVibrantSettings* _vibrantSettings;
	CGSize _knobImageOffset;
	CGSize _trackSize;
	UIEdgeInsets _knobInsets;

}

@property (assign,nonatomic) long long style;                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long textStyle;                                            //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIImage * knobImage; 
@property (nonatomic,retain) UIColor * knobColor; 
@property (assign,nonatomic) CGSize knobImageOffset;                                         //@synthesize knobImageOffset=_knobImageOffset - In the implementation block
@property (nonatomic,copy) NSString * trackText;                                             //@synthesize trackText=_trackText - In the implementation block
@property (nonatomic,retain) UIFont * trackFont;                                             //@synthesize trackFont=_trackFont - In the implementation block
@property (assign,nonatomic) CGSize trackSize;                                               //@synthesize trackSize=_trackSize - In the implementation block
@property (assign,nonatomic) double trackTextBaselineFromBottom;                             //@synthesize trackTextBaselineFromBottom=_trackTextBaselineFromBottom - In the implementation block
@property (nonatomic,readonly) CGRect trackTextRect; 
@property (nonatomic,retain,readonly) UILabel * trackLabel; 
@property (nonatomic,readonly) UIPanGestureRecognizer * slideGestureRecognizer;              //@synthesize slideGestureRecognizer=_slideGestureRecognizer - In the implementation block
@property (assign,nonatomic) id<_UIActionSliderDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double knobPosition;                                            //@synthesize knobPosition=_knobPosition - In the implementation block
@property (assign,nonatomic) double knobWidth;                                               //@synthesize knobWidth=_knobWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets knobInsets;                                        //@synthesize knobInsets=_knobInsets - In the implementation block
@property (nonatomic,readonly) CGRect knobRect; 
@property (nonatomic,readonly) UIBezierPath * knobMaskPath; 
@property (assign,nonatomic) double trackWidthProportion;                                    //@synthesize trackWidthProportion=_trackWidthProportion - In the implementation block
@property (assign,getter=isShowingTrackLabel,nonatomic) BOOL showingTrackLabel;              //@synthesize showingTrackLabel=_showingTrackLabel - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                              //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double cachedTrackMaskWidth;                                    //@synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth - In the implementation block
@property (getter=_knobView,nonatomic,readonly) UIView * knobView;                           //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) _UIVibrantSettings * vibrantSettings;                           //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<_UIActionSliderDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<_UIActionSliderDelegate>)delegate;
-(long long)style;
-(void)didMoveToSuperview;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(id)_knobView;
-(_UIVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_UIVibrantSettings *)arg1 ;
-(long long)textStyle;
-(UIColor *)knobColor;
-(void)setKnobColor:(UIColor *)arg1 ;
-(void)_knobPanGesture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2 ;
-(void)setCachedTrackMaskWidth:(double)arg1 ;
-(CGRect)knobRect;
-(void)_makeTrackLabel;
-(double)_knobWidth;
-(double)_knobHorizontalPosition;
-(double)_knobVerticalInset;
-(CGRect)_trackFrame;
-(double)_knobMinXInset;
-(NSString *)trackText;
-(double)trackTextBaselineFromBottom;
-(CGSize)trackSize;
-(void)_hideTrackLabel:(BOOL)arg1 ;
-(void)setTrackWidthProportion:(double)arg1 ;
-(void)_showTrackLabel;
-(void)updateAllTrackMasks;
-(double)knobWidth;
-(UIEdgeInsets)knobInsets;
-(double)_knobAvailableX;
-(double)_knobMinX;
-(double)_knobLeftMostX;
-(double)_knobRightMostX;
-(double)_knobMaxXInset;
-(double)_knobMaxX;
-(double)trackWidthProportion;
-(UIFont *)trackFont;
-(double)cachedTrackMaskWidth;
-(CGRect)trackTextRect;
-(id)trackMaskPath;
-(void)setMaskPath:(CGPathRef)arg1 onView:(id)arg2 ;
-(id)trackMaskImage;
-(void)setMaskFromImage:(id)arg1 onView:(id)arg2 ;
-(BOOL)isShowingTrackLabel;
-(void)setShowingTrackLabel:(BOOL)arg1 ;
-(void)setKnobPosition:(double)arg1 ;
-(BOOL)shouldHideTrackLabelForXPoint:(double)arg1 ;
-(BOOL)xPointIsWithinTrack:(double)arg1 ;
-(void)_slideCompleted:(BOOL)arg1 ;
-(UIBezierPath *)knobMaskPath;
-(UIImage *)knobImage;
-(void)setKnobImage:(UIImage *)arg1 ;
-(void)setKnobImageOffset:(CGSize)arg1 ;
-(void)setTrackText:(NSString *)arg1 ;
-(void)setTrackFont:(UIFont *)arg1 ;
-(void)setTrackSize:(CGSize)arg1 ;
-(UILabel *)trackLabel;
-(void)setKnobWidth:(double)arg1 ;
-(void)setKnobInsets:(UIEdgeInsets)arg1 ;
-(void)openTrackAnimated:(BOOL)arg1 ;
-(void)closeTrackAnimated:(BOOL)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(CGSize)knobImageOffset;
-(void)setTrackTextBaselineFromBottom:(double)arg1 ;
-(UIPanGestureRecognizer *)slideGestureRecognizer;
-(double)knobPosition;
@end

