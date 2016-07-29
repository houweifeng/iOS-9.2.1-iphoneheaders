/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporter.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class KNSlideNode, NSMutableArray, KNOffscreenController, KNPdfHyperlinkController, NSString, NSOrderedSet, NSArray;

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate> {

	KNSlideNode* mCurrentSlideNode;
	NSMutableArray* mCurrentSlidesOnPage;
	unsigned long long mCurrentBuildIndex;
	KNOffscreenController* mOffscreenController;
	KNPdfHyperlinkController* mHyperlinkController;
	int mPrintLayout;
	BOOL mPrintingBuilds;
	BOOL mPrintingBackgrounds;
	BOOL mPrintingBorders;
	BOOL mPrintingSlideNumbers;
	BOOL mPrintingDate;
	BOOL mPrintingSkippedSlides;
	BOOL mPrintingSelectedSlides;
	BOOL mPrintingPageMargins;
	BOOL mPrintingDraftQuality;
	unsigned long long mSlidesPerPage;
	unsigned long long mCurrentPage;
	NSString* mPrintTitle;
	double mPageMargin;
	NSOrderedSet* mSelectedSlideNodes;
	id mPrintView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) KNOffscreenController * offscreenController; 
@property (assign,nonatomic) unsigned long long slidesPerPage; 
@property (nonatomic,readonly) NSArray * slidesForPrinting; 
@property (nonatomic,retain) KNSlideNode * currentSlideNode; 
@property (nonatomic,readonly) unsigned long long currentSlideNumber; 
@property (nonatomic,readonly) unsigned long long currentBuildIndex; 
@property (nonatomic,copy) NSOrderedSet * selectedSlideNodes; 
@property (nonatomic,readonly) unsigned long long rangeStart; 
@property (nonatomic,readonly) unsigned long long rangeEnd; 
@property (assign,nonatomic) int printLayout; 
@property (assign,getter=isPrintingBuilds,nonatomic) BOOL printingBuilds; 
@property (assign,getter=isPrintingBackgrounds,nonatomic) BOOL printingBackgrounds; 
@property (assign,getter=isPrintingBorders,nonatomic) BOOL printingBorders; 
@property (assign,getter=isPrintingSlideNumbers,nonatomic) BOOL printingSlideNumbers; 
@property (assign,getter=isPrintingDate,nonatomic) BOOL printingDate; 
@property (assign,getter=isPrintingSkippedSlides,nonatomic) BOOL printingSkippedSlides; 
@property (assign,getter=isPrintingSelectedSlides,nonatomic) BOOL printingSelectedSlides; 
@property (assign,getter=isPrintingPageMargins,nonatomic) BOOL printingPageMargins; 
@property (assign,getter=isPrintingDraftQuality,nonatomic) BOOL printingDraftQuality; 
@property (nonatomic,readonly) double heightOfPrintedText; 
@property (nonatomic,readonly) double spaceForSlideNumbers; 
@property (assign,nonatomic) double pageMargin; 
@property (nonatomic,copy) NSString * printTitle; 
@property (nonatomic,readonly) BOOL usesViewForDrawing; 
@property (assign,nonatomic) id printView; 
-(BOOL)isPrintingCanvas;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_slideNumberForSlideNode:(id)arg1 ;
-(id)documentRoot;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(CGRect)boundsRect;
-(id)currentInfos;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned long long)arg1 ;
-(double)progressForCurrentPage;
-(KNSlideNode *)currentSlideNode;
-(NSArray *)slidesForPrinting;
-(void)setCurrentSlideNode:(KNSlideNode *)arg1 ;
-(unsigned long long)slidesPerPage;
-(BOOL)isPrintingBuilds;
-(BOOL)isPrintingSlideNumbers;
-(BOOL)drawImageForSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 slideSize:(CGSize)arg3 intoRect:(CGRect)arg4 context:(CGContextRef)arg5 createPage:(BOOL)arg6 ;
-(void)drawSlideNumberForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(CGRect)arg3 context:(CGContextRef)arg4 position:(int)arg5 ;
-(void)drawBorderForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)drawDateForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isPrintingPageMargins;
-(double)heightOfPrintedText;
-(void)addAnchorPointForSlide:(id)arg1 context:(CGContextRef)arg2 ;
-(unsigned long long)currentSlideNumber;
-(BOOL)isPrintingDate;
-(BOOL)isPrintingBackgrounds;
-(BOOL)isPrintingSkippedSlides;
-(id)slideIndexesToPrint;
-(BOOL)isPrintingBorders;
-(BOOL)isPrintingDraftQuality;
-(void)setPrintingBuilds:(BOOL)arg1 ;
-(void)setPrintingSkippedSlides:(BOOL)arg1 ;
-(void)setPrintingDraftQuality:(BOOL)arg1 ;
-(void)setPrintingBackgrounds:(BOOL)arg1 ;
-(id)quickLookSlideNodes;
-(double)spaceForSlideNumbers;
-(void)drawNSStringDateForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)usesViewForDrawing;
-(void)drawInView:(id)arg1 rect:(CGRect)arg2 ;
-(long long)pageIndexFromQuickLookSlideNode:(id)arg1 ;
-(KNOffscreenController *)offscreenController;
-(void)setOffscreenController:(KNOffscreenController *)arg1 ;
-(unsigned long long)currentBuildIndex;
-(int)printLayout;
-(void)setPrintLayout:(int)arg1 ;
-(void)setPrintingBorders:(BOOL)arg1 ;
-(void)setPrintingSlideNumbers:(BOOL)arg1 ;
-(void)setPrintingDate:(BOOL)arg1 ;
-(BOOL)isPrintingSelectedSlides;
-(void)setPrintingSelectedSlides:(BOOL)arg1 ;
-(void)setSlidesPerPage:(unsigned long long)arg1 ;
-(void)setPrintingPageMargins:(BOOL)arg1 ;
-(double)pageMargin;
-(void)setPageMargin:(double)arg1 ;
-(id)printView;
-(void)setPrintView:(id)arg1 ;
-(NSString *)printTitle;
-(void)setPrintTitle:(NSString *)arg1 ;
-(NSOrderedSet *)selectedSlideNodes;
-(void)setSelectedSlideNodes:(NSOrderedSet *)arg1 ;
-(void)enableRenderAllContent;
-(unsigned long long)rangeStart;
-(unsigned long long)rangeEnd;
-(void)dealloc;
-(unsigned long long)pageCount;
-(void)setOptions:(id)arg1 ;
-(void)setup;
-(void)teardown;
@end

