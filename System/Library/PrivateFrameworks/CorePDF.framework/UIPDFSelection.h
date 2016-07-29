/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage;

@interface UIPDFSelection : NSObject {

	UIPDFPage* _page;
	CGPDFSelectionRef _cgSelection;
	BOOL _dirty;
	CFStringRef _string;
	long long _cachedStartIndex;
	long long _cachedEndIndex;
	SCD_Struct_CP15 stringRange;

}

@property (assign,nonatomic) SCD_Struct_CP15 stringRange; 
-(void)dealloc;
-(id)description;
-(id)initWithPage:(id)arg1 cgSelection:(CGPDFSelectionRef)arg2 ;
-(CGPDFSelectionRef)CGSelection;
-(void)extendToParagraph;
-(CGRect)bounds;
-(id)init;
-(BOOL)isEmpty;
-(id)string;
-(SCD_Struct_CP15)extent;
-(CGAffineTransform)transform;
-(id)page;
-(unsigned long long)numberOfRectangles;
-(BOOL)getBounds:(CGRect*)arg1 transform:(CGAffineTransform*)arg2 index:(unsigned long long)arg3 ;
-(id)attributedStringAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)endIndex;
-(SCD_Struct_UI5)rectangleAtIndex:(unsigned long long)arg1 scale:(double)arg2 inset:(double)arg3 ;
-(void)setStringRange:(SCD_Struct_CP15)arg1 ;
-(id)initWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(id)initWithSelection:(id)arg1 ;
-(BOOL)isNonEmpty;
-(id)selectionExtendedToLineBoundaries;
-(id)containingTextLine;
-(BOOL)isWord;
-(id)htmlAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)extendAtStart:(unsigned long long)arg1 ;
-(unsigned long long)extendAtEnd:(unsigned long long)arg1 ;
-(void)copyToPasteboard;
-(double)baseLineAtIndex:(unsigned long long)arg1 ;
-(id)initWithPage:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(SCD_Struct_CP15)stringRange;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(id)archive;
-(unsigned long long)startIndex;
@end

