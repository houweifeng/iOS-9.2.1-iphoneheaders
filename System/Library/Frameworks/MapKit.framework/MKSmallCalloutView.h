/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CalloutViewControllerProtocol.h>

@protocol _MKCalloutAccessoryView;
@class UILabel, UIView, _MKSmallCalloutPassthroughButton, MKCalloutBackgroundView, UILayoutGuide, NSMutableArray, NSString;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView*<_MKCalloutAccessoryView> _leftView;
	UIView*<_MKCalloutAccessoryView> _rightView;
	UIView*<_MKCalloutAccessoryView> _externalLeftView;
	UIView*<_MKCalloutAccessoryView> _externalRightView;
	UIView*<_MKCalloutAccessoryView> _detailView;
	CGSize _preferredContentSize;
	double _maxWidth;
	BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	MKCalloutBackgroundView* _calloutBackgroundView;
	SCD_Struct_MK14 _mapDisplayStyle;
	UIView* _leftSpacerView;
	UIView* _rightSpacerView;
	UILayoutGuide* _titleBaselineToDetailViewTopGuide;
	UILayoutGuide* _detailViewBottomToBottomGuide;
	NSMutableArray* _lastConstraints;
	BOOL _initialDetailViewPositioning;
	BOOL _initialLeftViewPositioning;
	BOOL _initialRightViewPositioning;

}

@property (nonatomic,readonly) CGSize _preferredContentSize;                               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,retain) MKCalloutBackgroundView * calloutBackgroundView;              //@synthesize calloutBackgroundView=_calloutBackgroundView - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK14 mapDisplayStyle;                              //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                          //@synthesize maxWidth=_maxWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(CGSize)_preferredContentSize;
-(void)updateConstraints;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)_updatePreferredContentSize;
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(void)setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(SCD_Struct_MK14)mapDisplayStyle;
-(UIView *)detailView;
-(BOOL)_shouldCenterDetailView;
-(void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg1 ;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)beginMapsTransitionMovingSideways;
-(void)_updateAccessoryViewStyles;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(MKCalloutBackgroundView *)calloutBackgroundView;
-(void)setDetailView:(UIView *)arg1 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)calloutSubtitle;
-(id)_maskedContainerView;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)_subtitleLabel;
@end

