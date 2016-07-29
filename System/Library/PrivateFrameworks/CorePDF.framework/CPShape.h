/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPShape : CPGraphicObject <CPDisposable> {

	unsigned pdfObjectID;
	CGPathRef path;
	BOOL isUprightRectangle;
	int windingRule;
	double lineWidth;
	double miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObject* fillObject;
	CGPDFObject* strokeObject;
	CGAffineTransform paintTransform;
	BOOL boundsComputed;
	BOOL renderedBoundsComputed;

}
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(CGPathRef)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(id)string;
-(BOOL)isVisible;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(id)attributes;
-(void)addShape:(id)arg1 ;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(BOOL)isUprightRectangle;
-(BOOL)hasSamePathAs:(id)arg1 ;
-(BOOL)isStrokeFor:(id)arg1 ;
-(CGPDFObject*)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObject*)strokeObject;
-(BOOL)canCombineWith:(id)arg1 ;
-(void)setFillObject:(CGPDFObject*)arg1 ;
-(void)setStrokeObject:(CGPDFObject*)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
-(int)lineCap;
-(void)dispose;
-(BOOL)hasFill;
-(BOOL)hasStroke;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(void)finalize;
-(int)lineJoin;
@end
