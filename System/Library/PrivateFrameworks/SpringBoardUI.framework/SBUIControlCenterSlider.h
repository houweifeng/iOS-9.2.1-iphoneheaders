/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/_UIDynamicSlider.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBUIControlCenterControl.h>

@class UIVisualEffectView, UIImage, NSString;

@interface SBUIControlCenterSlider : _UIDynamicSlider <_UISettingsKeyObserver, SBUIControlCenterControl> {

	double _valueImagePadding;
	BOOL _customTrackImage;
	UIVisualEffectView* _highlightEffectView;
	BOOL _highlightMinimumTrackImage;
	BOOL _shouldHighlightValueImagesWhileAdjusting;
	BOOL _adjusting;
	UIImage* _minValueMaskImage;
	UIImage* _maxValueMaskImage;
	UIImage* _trackMaskImage;
	UIEdgeInsets _trackCapInsets;

}

@property (assign,nonatomic) BOOL highlightMinimumTrackImage;                            //@synthesize highlightMinimumTrackImage=_highlightMinimumTrackImage - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightValueImagesWhileAdjusting;              //@synthesize shouldHighlightValueImagesWhileAdjusting=_shouldHighlightValueImagesWhileAdjusting - In the implementation block
@property (assign,getter=isAdjusting,nonatomic) BOOL adjusting;                          //@synthesize adjusting=_adjusting - In the implementation block
@property (retain) UIImage * minValueMaskImage;                                          //@synthesize minValueMaskImage=_minValueMaskImage - In the implementation block
@property (retain) UIImage * maxValueMaskImage;                                          //@synthesize maxValueMaskImage=_maxValueMaskImage - In the implementation block
@property (retain) UIImage * trackMaskImage;                                             //@synthesize trackMaskImage=_trackMaskImage - In the implementation block
@property (assign) UIEdgeInsets trackCapInsets;                                          //@synthesize trackCapInsets=_trackCapInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_createTrackImageForState:(long long)arg1 ;
+(id)_minTrackImageForState:(long long)arg1 ;
+(id)_maxTrackImage;
+(id)_knobImage;
+(id)_trackImage;
+(void)controlAppearanceDidChangeForState:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setMinimumValueImage:(id)arg1 ;
-(void)setMaximumValueImage:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setTrackImage:(id)arg1 ;
-(UIImage *)trackMaskImage;
-(void)setTrackMaskImage:(UIImage *)arg1 ;
-(void)setMinValueMaskImage:(UIImage *)arg1 ;
-(void)setMaxValueMaskImage:(UIImage *)arg1 ;
-(UIImage *)minValueMaskImage;
-(id)_valueImageForImage:(id)arg1 state:(long long)arg2 ;
-(UIImage *)maxValueMaskImage;
-(void)setAdjusting:(BOOL)arg1 ;
-(BOOL)shouldHighlightValueImagesWhileAdjusting;
-(void)_updateValueImageView:(id)arg1 fadeToImage:(id)arg2 ;
-(UIEdgeInsets)trackCapInsets;
-(void)_updateMinimumTrackImage;
-(void)_setTrackImage:(id)arg1 ;
-(void)setTrackCapInsets:(UIEdgeInsets)arg1 ;
-(void)_updateMaximumTrackImage;
-(void)_updateMinimumValueImage;
-(void)_updateMaximumValueImage;
-(double)_valueImageCenterTrackOffset;
-(double)_naturalTrackWidth;
-(double)_valueImagePadding;
-(double)leftValueImageOriginForBounds:(CGRect)arg1 andSize:(CGSize)arg2 ;
-(double)rightValueImageOriginForBounds:(CGRect)arg1 andSize:(CGSize)arg2 ;
-(void)_configureControlStates;
-(BOOL)highlightMinimumTrackImage;
-(void)setShouldHighlightValueImagesWhileAdjusting:(BOOL)arg1 ;
-(BOOL)isAdjusting;
-(void)_updateEffects;
-(void)setHighlightMinimumTrackImage:(BOOL)arg1 ;
-(void)controlAppearanceDidChangeForState:(long long)arg1 ;
-(void)controlConfigurationDidChangeForState:(long long)arg1 ;
@end

