/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class TSDBezierPath, TSDBrushStroke, TSDLineEnd;

@interface TSDShape : NSObject {

	struct {
		unsigned path : 1;
		unsigned pathBounds : 1;
		unsigned pathBoundsWithoutStroke : 1;
		unsigned pathIsOpen : 1;
		unsigned pathIsLineSegment : 1;
		unsigned alignmentFrame : 1;
		unsigned headAndTail : 1;
		unsigned headLineEnd : 1;
		unsigned tailLineEnd : 1;
		unsigned clippedPath : 1;
	}  mShapeInvalidFlags;
	CGPoint mHeadPoint;
	CGPoint mTailPoint;
	CGPoint mHeadLineEndPoint;
	CGPoint mTailLineEndPoint;
	double mHeadLineEndAngle;
	double mTailLineEndAngle;
	long long mHeadCutSegment;
	long long mTailCutSegment;
	double mHeadCutT;
	double mTailCutT;
	TSDBezierPath* mCachedClippedPath;
	TSDBezierPath* _path;
	TSDBrushStroke* _stroke;
	TSDLineEnd* _headLineEnd;
	TSDLineEnd* _tailLineEnd;

}

@property (nonatomic,retain) TSDBezierPath * path;                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) TSDBrushStroke * stroke;               //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,retain) TSDLineEnd * headLineEnd;              //@synthesize headLineEnd=_headLineEnd - In the implementation block
@property (nonatomic,retain) TSDLineEnd * tailLineEnd;              //@synthesize tailLineEnd=_tailLineEnd - In the implementation block
-(id)init;
-(TSDBezierPath *)path;
-(TSDBrushStroke *)stroke;
-(void)setPath:(TSDBezierPath *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)clippedPathForLineEnds;
-(void)p_drawLineEndForHead:(BOOL)arg1 withDelta:(CGPoint)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(CGPoint)headLineEndPoint;
-(CGPoint)tailLineEndPoint;
-(double)headLineEndAngle;
-(double)tailLineEndAngle;
-(double)lineEndScale;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(id)_newClippedPath;
-(void)p_invalidateClippedPath;
-(void)p_validateHeadAndTail;
-(void)p_computeAngle:(double*)arg1 point:(CGPoint*)arg2 cutSegment:(long long*)arg3 cutT:(double*)arg4 forLineEndAtHead:(BOOL)arg5 ;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(void)setHeadLineEnd:(TSDLineEnd *)arg1 ;
-(void)setTailLineEnd:(TSDLineEnd *)arg1 ;
-(void)setStroke:(TSDBrushStroke *)arg1 ;
@end

