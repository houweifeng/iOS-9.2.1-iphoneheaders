/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion {

	BOOL hasCentredParagraph;
	BOOL hasColumnBreak;
	double maxLeftPad;
	double maxRightPad;
	double maxRight;
	double minLeft;
	BOOL complete;

}

@property (assign) BOOL complete; 
-(int)outOrder;
-(int)inOrder;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)complete;
-(void)accept:(id)arg1 ;
-(CGRect)columnBounds;
-(double)leftPad;
-(double)rightPad;
-(double)selectionBottom;
-(void)setHasColumnBreak:(BOOL)arg1 ;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(double)bottomBaseline;
-(BOOL)hasCentredParagraph;
-(void)setHasCentredParagraph:(BOOL)arg1 ;
-(double)maxLeftPad;
-(void)setMaxLeftPad:(double)arg1 ;
-(double)maxRightPad;
-(void)setMaxRightPad:(double)arg1 ;
-(CGRect)paddedBounds;
@end

