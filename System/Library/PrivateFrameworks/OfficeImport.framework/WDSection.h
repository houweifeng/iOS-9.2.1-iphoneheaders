/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument, WDText;

@interface WDSection : NSObject {

	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDDocument* mDocument;
	WDText* mText;
	WDText* mEvenPageHeader;
	WDText* mOddPageHeader;
	WDText* mFirstPageHeader;
	WDText* mEvenPageFooter;
	WDText* mOddPageFooter;
	WDText* mFirstPageFooter;
	SCD_Struct_WD108 mOriginalProperties;
	SCD_Struct_WD108 mTrackedProperties;

}
-(void)dealloc;
-(id)description;
-(id)text;
-(long long)topMargin;
-(void)setRightMargin:(long long)arg1 ;
-(id)leftBorder;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(long long)rightMargin;
-(unsigned short)columnCount;
-(void)setColumnCount:(unsigned short)arg1 ;
-(id)rightBorder;
-(long long)leftMargin;
-(long long)headerMargin;
-(long long)bottomMargin;
-(BOOL)isPageWidthOverridden;
-(long long)pageWidth;
-(BOOL)isPageHeightOverridden;
-(long long)pageHeight;
-(BOOL)isBreakTypeOverridden;
-(int)breakType;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(id)firstPageHeader;
-(id)oddPageHeader;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isBottomBorderOverridden;
-(id)bottomBorder;
-(BOOL)isTitlePageOverridden;
-(BOOL)titlePage;
-(void)setTopMargin:(long long)arg1 ;
-(void)setLeftMargin:(long long)arg1 ;
-(void)setPageHeight:(long long)arg1 ;
-(id)evenPageHeader;
-(id)firstPageFooter;
-(id)oddPageFooter;
-(id)evenPageFooter;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)topBorder;
-(void)setBottomMargin:(long long)arg1 ;
-(void)setTextDirection:(int)arg1 ;
-(void)setHeaderMargin:(long long)arg1 ;
-(void)setFooterMargin:(long long)arg1 ;
-(long long)footerMargin;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(void)setBreakType:(int)arg1 ;
-(void)setPageWidth:(long long)arg1 ;
-(void)setPageOrientation:(int)arg1 ;
-(void)setGutterMargin:(long long)arg1 ;
-(void)setRtlGutter:(BOOL)arg1 ;
-(void)setBorderDepth:(int)arg1 ;
-(void)setBorderDisplay:(int)arg1 ;
-(void)setBorderOffset:(int)arg1 ;
-(void)setLineNumberStart:(short)arg1 ;
-(void)setLineNumberIncrement:(unsigned short)arg1 ;
-(void)setLineNumberDistance:(short)arg1 ;
-(void)setLineNumberRestart:(int)arg1 ;
-(void)setPageNumberFormat:(int)arg1 ;
-(void)setPageNumberStart:(unsigned short)arg1 ;
-(void)setPageNumberRestart:(BOOL)arg1 ;
-(void)setChapterNumberSeparator:(int)arg1 ;
-(void)setColumnsEqualWidth:(BOOL)arg1 ;
-(void)setBidi:(BOOL)arg1 ;
-(int)resolveMode;
-(BOOL)isColumnCountOverridden;
-(void)appendColumnWidth:(long long)arg1 ;
-(void)appendColumnSpace:(long long)arg1 ;
-(void)setColumnSpace:(long long)arg1 ;
-(void)setVerticalJustification:(int)arg1 ;
-(void)setTitlePage:(BOOL)arg1 ;
-(void)setFormattingChanged:(BOOL)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setFormattingChangeDate:(id)arg1 ;
-(BOOL)isPageOrientationOverridden;
-(int)pageOrientation;
-(BOOL)isHeaderMarginOverridden;
-(BOOL)isFooterMarginOverridden;
-(BOOL)isGutterMarginOverridden;
-(long long)gutterMargin;
-(BOOL)isRtlGutterOverridden;
-(BOOL)rtlGutter;
-(BOOL)isBorderDepthOverridden;
-(int)borderDepth;
-(BOOL)isBorderDisplayOverridden;
-(int)borderDisplay;
-(BOOL)isBorderOffsetOverridden;
-(int)borderOffset;
-(BOOL)isLineNumberStartOverridden;
-(short)lineNumberStart;
-(BOOL)isLineNumberIncrementOverridden;
-(unsigned short)lineNumberIncrement;
-(BOOL)isLineNumberDistanceOverridden;
-(short)lineNumberDistance;
-(BOOL)isLineNumberRestartOverridden;
-(int)lineNumberRestart;
-(BOOL)isPageNumberFormatOverridden;
-(int)pageNumberFormat;
-(BOOL)isPageNumberStartOverridden;
-(unsigned short)pageNumberStart;
-(BOOL)isPageNumberRestartOverridden;
-(BOOL)pageNumberRestart;
-(BOOL)isChapterNumberSeparatorOverridden;
-(int)chapterNumberSeparator;
-(BOOL)isColumnsEqualWidthOverridden;
-(BOOL)columnsEqualWidth;
-(long long)columnWidthAt:(unsigned)arg1 ;
-(long long)columnSpaceAt:(unsigned)arg1 ;
-(BOOL)isColumnSpaceOverridden;
-(long long)columnSpace;
-(BOOL)isVerticalJustificationOverridden;
-(int)verticalJustification;
-(BOOL)isBidiOverridden;
-(BOOL)bidi;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)formattingChanged;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(BOOL)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(BOOL)isTextDirectionOverridden;
-(int)textDirection;
-(void)setPageScale:(unsigned)arg1 ;
-(unsigned)pageScale;
-(BOOL)isPageScaleOverridden;
-(BOOL)isLastColumnWidthDefined;
-(BOOL)isColumnWidthDefinedAt:(unsigned)arg1 ;
@end

