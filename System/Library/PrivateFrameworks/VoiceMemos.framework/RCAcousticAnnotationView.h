/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIView.h>

@class RCUIConfiguration, RCLayoutMetrics;

@interface RCAcousticAnnotationView : UIView {

	CGGradientRef _decibelMarkerBackgroundGradient;
	RCUIConfiguration* _UIConfiguration;
	RCLayoutMetrics* _layoutMetrics;
	double _gradientAlpha;

}

@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;              //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) double gradientAlpha;                           //@synthesize gradientAlpha=_gradientAlpha - In the implementation block
+(double)requiredWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(RCLayoutMetrics *)layoutMetrics;
-(CGRect)annotationBoundaryRect;
-(void)setGradientAlpha:(double)arg1 ;
-(void)_reloadGradient;
-(id)_decibelMarkersAttributes;
-(id)_zeroMarkerAttributes;
-(double)gradientAlpha;
@end

