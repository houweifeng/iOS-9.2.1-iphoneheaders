/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {

	NSMutableArray* columns;
	CPZone* currentZone;
	NSMutableArray* allParagraphs;
	NSMutableArray* thinHorizontalShapes;
	NSMutableArray* otherShapes;
	NSMutableArray* images;
	NSMutableArray* paragraphWrappers;
	CGRect pageBounds;
	double maxParagraphDistance;

}

@property (assign) CGRect pageBounds; 
-(void)dealloc;
-(id)init;
-(void)setPageBounds:(CGRect)arg1 ;
-(void)makeColumnsFrom:(id)arg1 zone:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 isAbove:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 isBelow:(id)arg2 ;
-(id)paragraphAbove:(id)arg1 in:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(void)intersectionCallout:(id)arg1 ;
-(double)averageSpacing:(id)arg1 ;
-(BOOL)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(CGRect)arg3 ;
-(void)partitionShapes:(id)arg1 ;
-(void)callOuts;
-(BOOL)canSafelyAdd:(id)arg1 to:(id)arg2 ;
-(void)splitColumns:(id)arg1 ;
-(void)anchorImages;
-(BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3 ;
-(BOOL)cuttingShapeBetween:(id)arg1 and:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2 ;
-(id)paragraphBelow:(id)arg1 in:(id)arg2 ;
-(id)chunkAbove:(id)arg1 in:(id)arg2 ;
-(BOOL)column:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(CGRect)pageBounds;
-(id)columns;
@end

