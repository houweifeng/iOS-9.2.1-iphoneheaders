/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDTransformGradient.h>
#import <iWorkImport/TSDGradientStopContainer.h>

@class NSString, NSArray, TSUColor;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer>

@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (assign,nonatomic) CGSize baseNaturalSize; 
@property (assign,nonatomic) unsigned long long gradientType; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) BOOL isAdvancedGradient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * gradientStops; 
@property (nonatomic,retain) TSUColor * firstColor; 
@property (nonatomic,retain) TSUColor * lastColor; 
-(void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2 ;
-(void)insertGradientStop:(id)arg1 ;
-(id)insertStopAtFraction:(double)arg1 ;
-(void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2 ;
-(id)insertStopAtFraction:(double)arg1 withColor:(id)arg2 ;
-(void)removeStop:(id)arg1 ;
-(id)removeStopAtIndex:(unsigned long long)arg1 ;
-(void)reverseStopOrder;
-(void)evenlyDistributeStops;
-(void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2 ;
-(void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2 ;
-(void)setGradientStops:(NSArray *)arg1 ;
-(void)setLastColor:(TSUColor *)arg1 ;
-(void)setGradientAngleInDegrees:(double)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 inShapeWithNaturalSize:(CGSize)arg2 ;
-(void)setEndPoint:(CGPoint)arg1 inShapeWithNaturalSize:(CGSize)arg2 ;
-(void)upgradeIfNecessaryWithBaseNaturalSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGradientType:(unsigned long long)arg1 ;
-(void)setFirstColor:(TSUColor *)arg1 ;
@end

