/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCustomSeparatorTableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKTransitDeparturesCellDelegate;
@class UIImageView, UILabel, _MKAnimatableLabel, NSLayoutConstraint, NSArray, _MKGradientView, UIView, NSAttributedString, NSDate, NSTimeZone, UIButton, NSString;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell <UIGestureRecognizerDelegate> {

	UIImageView* _lineImageView;
	UIImageView* _incidentIconImageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	_MKAnimatableLabel* _departureLabel;
	UILabel* _departureSubtextLabel;
	NSLayoutConstraint* _labelLeadingMarginConstraint;
	BOOL _isShowingMultipleDepartures;
	NSLayoutConstraint* _departureLabelCenterX;
	NSLayoutConstraint* _departureLabelCustomTrailingMarginConstraint;
	NSLayoutConstraint* _departureLabelTrailingAlign;
	NSLayoutConstraint* _labelBufferConstraint;
	NSLayoutConstraint* _lineImageToContainerTrailingConstraint;
	NSLayoutConstraint* _lineImageViewTopConstraint;
	NSLayoutConstraint* _primaryToTopConstraint;
	NSLayoutConstraint* _departureLabelToTopConstraint;
	NSLayoutConstraint* _departureLabelToBottomConstraint;
	NSLayoutConstraint* _lineImageViewCenteringConstraint;
	NSLayoutConstraint* _primaryLabelCenteringConstraint;
	NSLayoutConstraint* _departureLabelCenteringConstraint;
	NSLayoutConstraint* _incidentToDepartureSubtextLabelConstraint;
	NSLayoutConstraint* _incidentTrailingConstraint;
	UILabel* _animationLabel;
	NSLayoutConstraint* _primaryLabelWidthConstraint;
	NSArray* _labelHeightConstraints;
	NSLayoutConstraint* _primaryLabelHeightConstraint;
	NSLayoutConstraint* _secondaryLabelHeightConstraint;
	NSLayoutConstraint* _secondaryToPrimaryConstraint;
	NSLayoutConstraint* _primaryToBottomConstraint;
	NSLayoutConstraint* _secondaryToBottomConstraint;
	NSLayoutConstraint* _departureSubtextToTopConstraint;
	NSLayoutConstraint* _departureSubtextLabelToBottomConstraint;
	NSLayoutConstraint* _incidentToPrimaryConstraint;
	NSLayoutConstraint* _incidentToSecondaryConstraint;
	NSLayoutConstraint* _incidentToBottomConstraint;
	NSLayoutConstraint* _lineImageToTextGutterConstraint;
	NSLayoutConstraint* _lineImageLeadingConstraint;
	NSLayoutConstraint* _lineImageCompressedLeadingConstraint;
	NSLayoutConstraint* _primaryToDepartureLabelConstraint;
	NSLayoutConstraint* _animationLabelLeadingConstraint;
	NSLayoutConstraint* _animationLabelToTopConstraint;
	BOOL _supressSelectionState;
	BOOL _isTrackingDragGesture;
	double _dragGestureStartingPercentage;
	long long _closingDragGestureAnimationCount;
	_MKGradientView* _dragGradientView;
	UIView* _dragBackgroundView;
	BOOL _dragAnimateSubtext;
	NSAttributedString* _dragAnimationSubtext;
	NSAttributedString* _dragAnimationPreviousSubtext;
	BOOL _isAnimatingMultiDepartureTransition;
	double _unadjustedLeadingSeparatorInset;
	BOOL _showNoConnectionEmDash;
	BOOL _centerPrimaryLabel;
	BOOL _centerDepartureLabel;
	BOOL _showIncidentIcon;
	BOOL _incidentButtonHidden;
	BOOL _shouldAdjustSeparatorInsetToMargin;
	BOOL _useCompressedGutter;
	BOOL _useCompressedLeading;
	double _lineImageViewSize;
	NSArray* _departures;
	unsigned long long _departureStyle;
	NSDate* _countdownReferenceDate;
	NSTimeZone* _departureTimeZone;
	UIButton* _incidentButton;
	NSString* _incidentTitle;
	id<MKTransitDeparturesCellDelegate> _delegate;

}

@property (assign,nonatomic) double lineImageViewSize;                                                    //@synthesize lineImageViewSize=_lineImageViewSize - In the implementation block
@property (nonatomic,readonly) double labelMargin; 
@property (nonatomic,retain) NSDate * countdownReferenceDate;                                             //@synthesize countdownReferenceDate=_countdownReferenceDate - In the implementation block
@property (nonatomic,retain) NSArray * departures;                                                        //@synthesize departures=_departures - In the implementation block
@property (assign,nonatomic) unsigned long long departureStyle;                                           //@synthesize departureStyle=_departureStyle - In the implementation block
@property (nonatomic,retain) NSTimeZone * departureTimeZone;                                              //@synthesize departureTimeZone=_departureTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL isShowingMultipleDepartures; 
@property (nonatomic,readonly) NSArray * displayableDepartures; 
@property (assign,getter=isShowingNoConnectionEmDash,nonatomic) BOOL showNoConnectionEmDash;              //@synthesize showNoConnectionEmDash=_showNoConnectionEmDash - In the implementation block
@property (assign,getter=isShowingIncidentIcon,nonatomic) BOOL showIncidentIcon;                          //@synthesize showIncidentIcon=_showIncidentIcon - In the implementation block
@property (nonatomic,copy) NSString * incidentTitle;                                                      //@synthesize incidentTitle=_incidentTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDeparturesCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useCompressedGutter;                                                    //@synthesize useCompressedGutter=_useCompressedGutter - In the implementation block
@property (assign,nonatomic) BOOL useCompressedLeading;                                                   //@synthesize useCompressedLeading=_useCompressedLeading - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustSeparatorInsetToMargin;                                     //@synthesize shouldAdjustSeparatorInsetToMargin=_shouldAdjustSeparatorInsetToMargin - In the implementation block
@property (assign,nonatomic) BOOL centerPrimaryLabel;                                                     //@synthesize centerPrimaryLabel=_centerPrimaryLabel - In the implementation block
@property (assign,nonatomic) BOOL centerDepartureLabel;                                                   //@synthesize centerDepartureLabel=_centerDepartureLabel - In the implementation block
@property (nonatomic,retain) UIButton * incidentButton;                                                   //@synthesize incidentButton=_incidentButton - In the implementation block
@property (assign,getter=isIncidentButtonHidden,nonatomic) BOOL incidentButtonHidden;                     //@synthesize incidentButtonHidden=_incidentButtonHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(id)_singleCountdownSubtext;
+(BOOL)_shouldScaleSingleCountdownValue;
+(id)defaultSecondaryFont;
+(id)_departureSubtextAttributes;
+(id)_singleCountdownFont;
+(id)_primaryFont;
+(double)maxLineImageWidthforWidth:(double)arg1 compressed:(BOOL)arg2 ;
+(double)defaultLabelMargin;
+(id)_multipleCountdownFont;
+(BOOL)_needsUpdateMaxLabelWidths;
+(id)_nowString;
+(double)defaultLineImageViewSize;
+(id)_departureSubtextFont;
+(double)_minTextWidth:(BOOL)arg1 ;
+(double)_maxSingleDepartureLabelWidth;
+(id)_nowStringAttributes;
+(void)_calculateMaxLabelWidths;
+(double)_maxSingleDepartureSubtextLabelWidth;
+(id)_multipleCountdownDepartureAttributes;
+(id)strongSecondaryFont;
+(id)_singleCountdownDepartureAttributes;
+(id)_timestampFont;
+(id)timestampSecondaryFont;
+(double)labelMarginWithLineImageViewWidth:(double)arg1 ;
+(void)useCompressedGutter:(out BOOL*)arg1 compressedLeading:(out BOOL*)arg2 forImageWidth:(double)arg3 inWidth:(double)arg4 compressed:(BOOL)arg5 ;
-(void)setDelegate:(id<MKTransitDeparturesCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<MKTransitDeparturesCellDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_commonInit;
-(BOOL)isOpaque;
-(void)layoutMarginsDidChange;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDepartures:(NSArray *)arg1 ;
-(NSArray *)departures;
-(NSTimeZone *)departureTimeZone;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(double)labelMargin;
-(NSString *)incidentTitle;
-(void)setIncidentTitle:(NSString *)arg1 ;
-(double)_adjustedSeparatorInsetToMargin:(double)arg1 ;
-(BOOL)shouldAdjustSeparatorInsetToMargin;
-(void)setShouldAdjustSeparatorInsetToMargin:(BOOL)arg1 ;
-(BOOL)centerPrimaryLabel;
-(void)_addDepartureLabelTrailingConstraintIfNeeded;
-(void)_removeIncidentButton;
-(void)_updateCountdownConstraintsForString:(id)arg1 ;
-(void)setCenterDepartureLabel:(BOOL)arg1 ;
-(void)setLineImage:(id)arg1 forWidth:(double)arg2 compressed:(BOOL)arg3 center:(BOOL)arg4 centeringWidth:(double)arg5 ;
-(BOOL)isShowingMultipleDepartures;
-(id)currentSecondaryHeightConstraintValue;
-(void)_incidentButtonPressed;
-(void)_addAnimationLabelWithText:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(id)currentPrimaryHeightConstraintValue;
-(unsigned long long)_displayableDeparturesCount;
-(void)_enumerateMinutesUntilDepartureTimesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_departureLabelStyle;
-(void)setShowNoConnectionEnDash:(BOOL)arg1 ;
-(BOOL)_pointIsInCustomGestureBounds:(CGPoint)arg1 ;
-(unsigned long long)departureStyle;
-(void)_addHeightConstraintWithPrimaryHeight:(double)arg1 secondaryHeight:(double)arg2 ;
-(void)setDepartureTimeZone:(NSTimeZone *)arg1 ;
-(double)_departureLabelToTopScaleValueWithString:(id)arg1 ;
-(void)_setLineImageColumnCentered:(BOOL)arg1 withImageWidth:(double)arg2 centeringWidth:(double)arg3 ;
-(void)setPrimaryText:(id)arg1 ;
-(void)_updateDepartureLabelToTopConstraintWithString:(id)arg1 ;
-(void)refreshDeparturesDisplay;
-(void)setSecondaryText:(id)arg1 ;
-(BOOL)isIncidentButtonHidden;
-(void)setCenterPrimaryLabel:(BOOL)arg1 ;
-(void)setLineImageViewSize:(double)arg1 ;
-(void)setIncidentButtonHidden:(BOOL)arg1 ;
-(void)setIsShowingMultipleDepartures:(BOOL)arg1 animated:(BOOL)arg2 primaryHeightConstraintValue:(id)arg3 secondaryHeightConstraintValue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_removeIncidentIcon;
-(NSDate *)countdownReferenceDate;
-(void)setUseCompressedGutter:(BOOL)arg1 ;
-(UIButton *)incidentButton;
-(void)setDepartureStyle:(unsigned long long)arg1 ;
-(void)setIncidentButton:(UIButton *)arg1 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)_updateIncidentConstraints;
-(void)setUseCompressedLeading:(BOOL)arg1 ;
-(void)_addCountdownConstraintsIfNeeded;
-(BOOL)_isRTL;
-(BOOL)centerDepartureLabel;
-(void)_addIncidentIcon;
-(void)_updateLabelFonts;
-(BOOL)isShowingIncidentIcon;
-(void)setShowNoConnectionEmDash:(BOOL)arg1 ;
-(void)centerContentIfNeccessaryForWidth:(double)arg1 ;
-(void)setCountdownReferenceDate:(NSDate *)arg1 ;
-(void)_addEmDashAttributes:(id)arg1 ;
-(void)_addTimeStampConstraintsIfNeeded;
-(void)_departureText:(out id*)arg1 subtext:(out id*)arg2 forAnimationLabel:(BOOL)arg3 ;
-(void)setShowIncidentIcon:(BOOL)arg1 ;
-(void)_addIncidentButton;
-(BOOL)isShowingNoConnectionEmDash;
-(double)lineImageViewSize;
-(BOOL)useCompressedGutter;
-(NSArray *)displayableDepartures;
-(BOOL)useCompressedLeading;
-(id)_incidentIcon;
-(void)_handleTap:(id)arg1 ;
@end

