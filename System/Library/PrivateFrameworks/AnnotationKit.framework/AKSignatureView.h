/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, AKRichBrushStroke, CHPointStrokeFIFO, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO, NSArray;

@interface AKSignatureView : UIView {

	NSMutableArray* _strokes;
	CGColorRef _cgColor;
	CGPoint _lastPoint;
	id _trackingTouchID;
	BOOL _isAddingPointWithoutSmoothing;
	UIColor* _strokeColor;
	double _minPressure;
	double _maxPressure;
	double _minThickness;
	double _maxThickness;
	AKRichBrushStroke* _currentBrushStroke;
	double _currentWeight;
	unsigned long long _totalPointsAdded;
	double _strokeStartTime;
	CHPointStrokeFIFO* _strokeFIFO;
	CHBoxcarFilterPointFIFO* _boxcarFIFO;
	CHQuadCurvePointFIFO* _interpolatingFIFO;
	CGPoint _strokeStartLocation;
	CGPoint _strokeLastLocation;
	 _lastVectorPoint;
	CGRect _aggregateInvalid;
	CGRect _unionDrawingRect;

}

@property (nonatomic,retain) UIColor * strokeColor;                                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double minPressure;                                    //@synthesize minPressure=_minPressure - In the implementation block
@property (assign,nonatomic) double maxPressure;                                    //@synthesize maxPressure=_maxPressure - In the implementation block
@property (assign,nonatomic) double minThickness;                                   //@synthesize minThickness=_minThickness - In the implementation block
@property (assign,nonatomic) double maxThickness;                                   //@synthesize maxThickness=_maxThickness - In the implementation block
@property (nonatomic,retain) NSArray * strokes;                                     //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) CGRect strokesBounds; 
@property (nonatomic,retain) AKRichBrushStroke * currentBrushStroke;                //@synthesize currentBrushStroke=_currentBrushStroke - In the implementation block
@property (assign,nonatomic) double currentWeight;                                  //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign) unsigned long long totalPointsAdded;                             //@synthesize totalPointsAdded=_totalPointsAdded - In the implementation block
@property (assign) CGPoint strokeStartLocation;                                     //@synthesize strokeStartLocation=_strokeStartLocation - In the implementation block
@property (assign) CGPoint strokeLastLocation;                                      //@synthesize strokeLastLocation=_strokeLastLocation - In the implementation block
@property (assign) double strokeStartTime;                                          //@synthesize strokeStartTime=_strokeStartTime - In the implementation block
@property (assign) BOOL isAddingPointWithoutSmoothing;                              //@synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing - In the implementation block
@property (assign)  lastVectorPoint;                                                //@synthesize lastVectorPoint=_lastVectorPoint - In the implementation block
@property (nonatomic,retain) CHPointStrokeFIFO * strokeFIFO;                        //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) CHBoxcarFilterPointFIFO * boxcarFIFO;                  //@synthesize boxcarFIFO=_boxcarFIFO - In the implementation block
@property (nonatomic,retain) CHQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (assign,nonatomic) CGRect aggregateInvalid;                               //@synthesize aggregateInvalid=_aggregateInvalid - In the implementation block
@property (assign,nonatomic) CGRect unionDrawingRect;                               //@synthesize unionDrawingRect=_unionDrawingRect - In the implementation block
@property (nonatomic,readonly) double interfaceScale; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)clear;
-(void)setInterpolatingFIFO:(CHQuadCurvePointFIFO *)arg1 ;
-(CHQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setStrokeFIFO:(CHPointStrokeFIFO *)arg1 ;
-(CHPointStrokeFIFO *)strokeFIFO;
-(NSArray *)strokes;
-(void)setStrokes:(NSArray *)arg1 ;
-(double)minPressure;
-(double)maxPressure;
-(double)minThickness;
-(double)maxThickness;
-(void)setMinPressure:(double)arg1 ;
-(void)setMaxPressure:(double)arg1 ;
-(void)setMinThickness:(double)arg1 ;
-(void)setMaxThickness:(double)arg1 ;
-(CGRect)strokesBounds;
-(CGPathRef)copyStrokedInterpolatedPath;
-(void)setCurrentWeight:(double)arg1 ;
-()lastVectorPoint;
-(double)interfaceScale;
-(unsigned long long)totalPointsAdded;
-(void)setTotalPointsAdded:(unsigned long long)arg1 ;
-(void)setLastVectorPoint:;
-(void)deferredInvalidate:(id)arg1 ;
-(double)_windowBackingScaleFactor;
-(void)setBoxcarFIFO:(CHBoxcarFilterPointFIFO *)arg1 ;
-(void)setStrokeStartTime:(double)arg1 ;
-(void)setStrokeLastLocation:(CGPoint)arg1 ;
-(CGPoint)strokeLastLocation;
-(void)setStrokeStartLocation:(CGPoint)arg1 ;
-(void)setIsAddingPointWithoutSmoothing:(BOOL)arg1 ;
-(double)strokeStartTime;
-(CGPoint)strokeStartLocation;
-(double)currentWeight;
-(void)continueStrokeWithoutSmoothing:;
-(BOOL)ak_forceAvailableForTouch:(id)arg1 ;
-(double)weightForValue:(double)arg1 ;
-(double)weightForTouch:(id)arg1 ;
-(void)startStroke:;
-(void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2 ;
-(void)continueStroke:;
-(void)terminateStroke;
-(AKRichBrushStroke *)currentBrushStroke;
-(void)setCurrentBrushStroke:(AKRichBrushStroke *)arg1 ;
-(BOOL)isAddingPointWithoutSmoothing;
-(CHBoxcarFilterPointFIFO *)boxcarFIFO;
-(CGRect)aggregateInvalid;
-(void)setAggregateInvalid:(CGRect)arg1 ;
-(CGRect)unionDrawingRect;
-(void)setUnionDrawingRect:(CGRect)arg1 ;
-(void)teardown;
@end

