/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@protocol _MKResultViewDelegate;
@class NSArray, CLLocation, NSMutableArray, MKLocationManager, NSString, NSTimer, UILabel, UIColor, UIImageView, MKMapItem;

@interface _MKResultView : UIView <MKLocationManagerObserver> {

	NSArray* _mapItems;
	CLLocation* _referenceLocation;
	BOOL _alwaysUsesBusinessLayout;
	int _layoutType;
	id<_MKResultViewDelegate> delegate;
	BOOL _selected;
	BOOL _showsDistance;
	NSMutableArray* _resultConstraints;
	MKLocationManager* _locManager;
	NSString* _primaryLabelText;
	NSString* _secondaryLabelText;
	NSTimer* _refLocationTimer;
	BOOL _useSpotlightVibrancy;
	int _iconFormat;
	UILabel* _nameLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	id<_MKResultViewDelegate> _delegate;
	double _fallbackDistance;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	UIImageView* _imageView;

}

@property (assign,nonatomic,__weak) id<_MKResultViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double preferredHeight; 
@property (nonatomic,retain) UIColor * primaryTextColor;                             //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                           //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) NSString * primaryLabelText; 
@property (nonatomic,retain) NSString * secondaryLabelText; 
@property (nonatomic,retain) NSArray * mapItems; 
@property (nonatomic,retain) CLLocation * referenceLocation;                         //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsDistance; 
@property (assign,nonatomic) double fallbackDistance;                                //@synthesize fallbackDistance=_fallbackDistance - In the implementation block
@property (assign,nonatomic) BOOL alwaysUsesBusinessLayout;                          //@synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int iconFormat;                                         //@synthesize iconFormat=_iconFormat - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                               //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * tertiaryLabel;                                //@synthesize tertiaryLabel=_tertiaryLabel - In the implementation block
@property (assign,nonatomic) BOOL useSpotlightVibrancy;                              //@synthesize useSpotlightVibrancy=_useSpotlightVibrancy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_MKResultViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<_MKResultViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateConstraints;
-(UIImageView *)imageView;
-(void)setNeedsUpdateConstraints;
-(void)updateLayout;
-(double)preferredHeight;
-(BOOL)selected;
-(void)commonInit;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(CLLocation *)referenceLocation;
-(id)initWithMapItem:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)addLabelIfNecessary:(id)arg1 ;
-(BOOL)alwaysUsesBusinessLayout;
-(void)_fireReferenceLocationTimer;
-(void)setTertiaryLabel:(UILabel *)arg1 ;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(UILabel *)nameLabel;
-(void)setPrimaryLabelText:(NSString *)arg1 ;
-(id)_labelWithFontSize:(double)arg1 ;
-(void)setFallbackDistance:(double)arg1 ;
-(BOOL)useSpotlightVibrancy;
-(void)_cancelReferenceLocationTimer;
-(id)_defaultPrimaryLabel;
-(void)setAlwaysUsesBusinessLayout:(BOOL)arg1 ;
-(int)iconFormat;
-(void)_updateLayoutForBusinessOrCategory;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setIconFormat:(int)arg1 ;
-(void)_updateLayoutForAddress;
-(void)_updateFontSizing;
-(void)setUseSpotlightVibrancy:(BOOL)arg1 ;
-(unsigned long long)_maxNameLengthForEndingString:(id)arg1 ;
-(unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1 ;
-(id)_defaultSecondaryCategoryLabel;
-(id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 highlightsOnTouch:(BOOL)arg2 ;
-(void)setSecondaryLabelText:(NSString *)arg1 ;
-(void)setShowsDistance:(BOOL)arg1 ;
-(void)updateSubviews;
-(double)fallbackDistance;
-(NSString *)secondaryLabelText;
-(NSString *)primaryLabelText;
-(double)_expectedHeightForLabels;
-(void)_updatePrimaryColors;
-(void)updateImageView;
-(void)_updateColors;
-(UILabel *)tertiaryLabel;
-(void)_locationApprovalDidChange;
-(void)setMapItems:(NSArray *)arg1 ;
-(void)_updateSecondaryColors;
-(BOOL)showsDistance;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(CGSize)_imageSize;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(NSArray *)mapItems;
@end

