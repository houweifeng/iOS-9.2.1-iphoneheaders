/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSDSmartPathSource.h>

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	CGPoint mPoint;
	CGSize mNaturalSize;

}

@property (assign) int type; 
@property (assign) CGPoint point; 
@property (assign) CGSize naturalSize; 
+(id)rightSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)doubleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)starWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3 ;
+(id)leftSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)plusWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(id)initWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3 ;
-(CGPoint)p_getControlKnobPointForArrow;
-(CGPoint)p_getControlKnobPointForStarPoints;
-(CGPoint)p_getControlKnobPointForStarInnerRadius;
-(CGPoint)p_getControlKnobPointForPlus;
-(void)setPointValue:(id)arg1 ;
-(CGPathRef)p_newArrowPath;
-(CGPathRef)p_newStarPath;
-(CGPathRef)p_newPlusPath;
-(BOOL)p_isRightFacingArrow;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(CGPoint)minPointValue;
-(CGPoint)maxPointValue;
-(unsigned long long)numberOfControlKnobs;
-(CGSize)scaleFactorForInscribedRectangle;
-(void)p_setControlKnobPointForArrow:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForStarPoints:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForStarInnerRadius:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForPlus:(CGPoint)arg1 ;
-(BOOL)p_isFlippedDoubleArrow;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
@end

