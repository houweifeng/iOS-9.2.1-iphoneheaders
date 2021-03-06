/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UILabel.h>

@class MKMapView, NSTimer, NSString, UIColor;

@interface MKDebugLocationConsole : UILabel {

	MKMapView* _parentMapView;
	NSTimer* _updateTimer;
	unsigned long long _pageIndex;
	NSString* _customText;
	UIColor* _customTextColor;
	BOOL _customTextEnabled;

}

@property (assign,nonatomic) unsigned long long pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) BOOL customTextEnabled;                    //@synthesize customTextEnabled=_customTextEnabled - In the implementation block
-(void)update;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(CGRect)_debugViewFrameWithMapView:(id)arg1 ;
-(void)setCustomTextEnabled:(BOOL)arg1 ;
-(void)_updateCustomText;
-(void)_updateGPSInfo;
-(void)_consoleTapped:(id)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(void)_showNextPage;
-(void)_updateVehicleInfo;
-(void)updateCustomText:(id)arg1 textColor:(id)arg2 ;
-(BOOL)customTextEnabled;
-(void)updateFrameWithEdgeInsets:(UIEdgeInsets)arg1 ;
@end

