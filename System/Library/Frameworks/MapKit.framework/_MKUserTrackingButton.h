/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/MKUserTrackingButtonTarget.h>

@class _MKUserTrackingButtonController, NSMutableDictionary, MKMapView, NSString;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {

	_MKUserTrackingButtonController* _controller;
	NSMutableDictionary* _customImages;
	NSMutableDictionary* _customLandscapeImagePhones;
	BOOL _selectsWhenTracking;
	BOOL _explicitlyEnabled;
	BOOL _internallyEnabled;
	BOOL _inMiniBar;

}

@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) BOOL selectsWhenTracking;              //@synthesize selectsWhenTracking=_selectsWhenTracking - In the implementation block
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) id<MKUserTrackingView> userTrackingView; 
@property (nonatomic,readonly) BOOL inMiniBar;                                                                                  //@synthesize inMiniBar=_inMiniBar - In the implementation block
@property (nonatomic,readonly) _MKUserTrackingButtonController * controller;                                                    //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithMapView:(id)arg1 ;
+(Class)_activityIndicatorClass;
+(id)buttonWithUserTrackingView:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(long long)_state;
-(CGRect)_selectedIndicatorBounds;
-(_MKUserTrackingButtonController *)controller;
-(void)_setState:(long long)arg1 ;
-(long long)_activityIndicatorStyle;
-(void)_updateForState:(long long)arg1 ;
-(void)_repositionViews;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setInternallyEnabled:(BOOL)arg1 ;
-(BOOL)inMiniBar;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(BOOL)_isHighlightedForState:(long long)arg1 ;
-(id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(BOOL)_selectsWhenTracking;
-(id<MKUserTrackingView>)userTrackingView;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(void)_setSkip:(BOOL)arg1 forUserTrackingMode:(long long)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end
