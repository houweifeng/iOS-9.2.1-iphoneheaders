/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@protocol MNGuidanceManeuverViewTextureProvider, MNGuidanceManeuverViewDelegate;
@class MKJunction, UIColor, UIBezierPath, NSArray;

@interface MNGuidanceManeuverView : UIView {

	BOOL _disallowMutation;
	BOOL _alerting;
	BOOL _disallowManeuversWithoutArt;
	MKJunction* _junction;
	int _maneuver;
	int _drivingSide;
	id<MNGuidanceManeuverViewTextureProvider> _textureProvider;
	int _framing;
	UIColor* _arrowColor;
	UIColor* _accentColor;
	UIBezierPath* _arrowPath;
	UIBezierPath* _arrowStrokePath;
	UIBezierPath* _intersectionFillPath;
	UIBezierPath* _intersectionStrokePath;
	NSArray* _arrivalCircles;
	double _visibleWidth;
	double _accentStrokeAlpha;
	double _accentFillAlpha;
	id<MNGuidanceManeuverViewDelegate> _delegate;
	SCD_Struct_MN6 _arrowMetrics;

}

@property (assign,nonatomic) int maneuver;                                                    //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) int displayManeuver; 
@property (assign,nonatomic) int drivingSide;                                                 //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,retain) MKJunction * junction;                                           //@synthesize junction=_junction - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN7 arrowMetrics;                                     //@synthesize arrowMetrics=_arrowMetrics - In the implementation block
@property (assign,nonatomic) int framing;                                                     //@synthesize framing=_framing - In the implementation block
@property (nonatomic,retain) UIColor * arrowColor;                                            //@synthesize arrowColor=_arrowColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                           //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) double accentFillAlpha;                                          //@synthesize accentFillAlpha=_accentFillAlpha - In the implementation block
@property (assign,nonatomic) double accentStrokeAlpha;                                        //@synthesize accentStrokeAlpha=_accentStrokeAlpha - In the implementation block
@property (assign,nonatomic) BOOL disallowManeuversWithoutArt;                                //@synthesize disallowManeuversWithoutArt=_disallowManeuversWithoutArt - In the implementation block
@property (assign,nonatomic,__weak) id<MNGuidanceManeuverViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_updateDrawingPaths;
-(void)setDisallowManeuversWithoutArt:(BOOL)arg1 ;
-(void)drawArrow:(id)arg1 stroke:(id)arg2 ;
-(void)setAccentStrokeAlpha:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textureProvider:(id)arg2 ;
-(void)setArrowMetrics:(SCD_Struct_MN7)arg1 ;
-(double)accentStrokeAlpha;
-(void)setAccentColor:(UIColor *)arg1 ;
-(void)disallowMutation;
-(BOOL)disallowManeuversWithoutArt;
-(void)_drawDefaultPaths;
-(void)_updateDrawingPathsForArrival;
-(void)setAccentFillAlpha:(double)arg1 ;
-(void)_updateDrawingPathsFromJunction;
-(void)drawIntersectionStroke:(id)arg1 forFill:(id)arg2 ;
-(void)drawArrow:(id)arg1 stroke:(id)arg2 withVisibleWidth:(double)arg3 intersectionFillPath:(id)arg4 intersectionStrokePath:(id)arg5 referenceSize:(CGSize)arg6 ;
-(CGAffineTransform)transformForDrawingPathsWithFrame:(CGRect)arg1 relativeToReferenceSize:(CGSize)arg2 ;
-(void)setJunction:(MKJunction *)arg1 ;
-(BOOL)_maneuverIsDrawnByDrawRect;
-(void)setFraming:(int)arg1 ;
-(void)drawIntersectionFill:(id)arg1 ;
-(UIColor *)accentColor;
-(int)displayManeuver;
-(SCD_Struct_MN7)arrowMetrics;
-(void)_invalidateDrawingPaths;
-(void)_drawArrival;
-(int)framing;
-(double)accentFillAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<MNGuidanceManeuverViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<MNGuidanceManeuverViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(int)maneuver;
-(MKJunction *)junction;
-(void)setManeuver:(int)arg1 ;
-(id)imageRepresentation;
-(UIColor *)arrowColor;
-(void)setArrowColor:(UIColor *)arg1 ;
@end

