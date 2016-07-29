/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPChunk, NSMutableArray;

@interface CPPage : CPChunk <CPDisposable> {

	int pageNumber;
	CGRect pageCropBox;
	BOOL hasZones;
	BOOL hasTextLines;
	BOOL isDirty;
	BOOL isStartOfSection;
	long long maxLayoutZOrder;
	CPChunk* background;
	float complexity;
	int rotation;
	NSMutableArray* shapesOnPage;
	NSMutableArray* imagesOnPage;
	NSMutableArray* graphicsOnPage;
	NSMutableArray* columnsOnPage;
	CPPDFContext* pdfContext;
	BOOL contextOwner;
	CGPDFPageRef pdfPage;
	NSMutableArray* textLinesOnPage;
	void* _layout;
	id hitTest;
	BOOL reconstructed;
	opaque_pthread_mutex_t mutex;

}
+(void)sortByReadingOrder:(id)arg1 ;
-(CGPDFLayoutRef)layout;
-(id)hitTest;
-(BOOL)populatePDFLayout:(CGPDFLayoutRef)arg1 ;
-(CPPDFClipBuffer*)clipBuffer;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addImage:(id)arg1 ;
-(void)setRotation:(int)arg1 ;
-(int)rotation;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(int)pageNumber;
-(void)setPageCropBox:(CGRect)arg1 ;
-(void)setPDFContext:(CPPDFContext*)arg1 ;
-(id)bodyZone;
-(void)addShape:(id)arg1 ;
-(id)graphicsOnPage;
-(void)layDownObjectsOnPage;
-(void)sortByReadingOrder;
-(CGRect)pageCropBox;
-(void)accept:(id)arg1 ;
-(id)imagesOnPage;
-(id)shapesOnPage;
-(unsigned)traverse:(id)arg1 ordinal:(unsigned)arg2 ;
-(unsigned)setReadingOrder:(id)arg1 from:(unsigned)arg2 ;
-(unsigned)setGraphicPositions:(id)arg1 from:(unsigned)arg2 ;
-(unsigned)setPositionsOf:(id)arg1 from:(unsigned)arg2 ;
-(unsigned)setCellPositionsOf:(id)arg1 from:(unsigned)arg2 ;
-(id)initWithPDFPage:(CGPDFPageRef)arg1 ;
-(CGPDFPageRef)pdfPage;
-(CPPDFContext*)PDFContext;
-(float)complexity;
-(void)setComplexity:(float)arg1 ;
-(void)setHasZones:(BOOL)arg1 ;
-(BOOL)hasZones;
-(BOOL)hasTextLines;
-(void)setHasTextLines:(BOOL)arg1 ;
-(BOOL)isStartOfSection;
-(void)setIsStartOfSection:(BOOL)arg1 ;
-(void)restoreBackGroundObjectToPage;
-(void)layDownObjectsOnPageOld;
-(id)textLinesOnPage;
-(id)columnsOnPage;
-(void)addColumns:(id)arg1 ;
-(void)reconstruct;
-(void)setPageNumber:(int)arg1 ;
-(void)dispose;
-(id)parent;
-(id)children;
-(void)finalize;
@end

