/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TNPageControllerDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TNDocumentRoot, TNPageCoordinateDictionary, TSUPointerKeyDictionary, TNSheet, NSMutableDictionary, NSObject, TNPrintProperties;

@interface TNPageController : NSObject {

	TNDocumentRoot* mDocumentRoot;
	TNPageCoordinateDictionary* mPageLayoutCache;
	TSUPointerKeyDictionary* mHintCacheDictionary;
	TSUPointerKeyDictionary* mSheetPageCountCache;
	TNSheet* mSheet;
	SCD_Struct_TS315 mMaxPageCoordinate;
	BOOL mMaxPageCoordinateValid;
	NSMutableDictionary* mCachedAutoFitContentScaleDictionary;
	TNPageCoordinateDictionary* mHeaderLayerCache;
	TNPageCoordinateDictionary* mFooterLayerCache;
	long long mCachedPageCountDuringDynamicContentScaleChange;
	long long mPriorPageCount;
	long long mSubsequentPageCount;
	BOOL mPageCountsValid;
	BOOL mComputingPageCounts;
	BOOL mInDynamicContentScaleChange;
	double mHeaderTextHeight;
	double mFooterTextHeight;
	NSObject*<TNPageControllerDelegate> mDelegate;
	TNPrintProperties* _printProperties;
	double mUserViewScale;

}

@property (assign,nonatomic) TNDocumentRoot * documentRoot; 
@property (assign,nonatomic) NSObject*<TNPageControllerDelegate> delegate; 
@property (assign,nonatomic) TNSheet * sheet; 
@property (readonly) CGSize pageSize; 
@property (readonly) CGRect contentFrame; 
@property (readonly) TNPrintProperties * printProperties;                               //@synthesize printProperties=_printProperties - In the implementation block
@property (getter=isPortrait,readonly) BOOL portrait; 
@property (readonly) unsigned long long numPages; 
@property (readonly) double contentScale; 
@property (assign,nonatomic) double userViewScale; 
@property (assign,nonatomic) double headerTextHeight; 
@property (assign,nonatomic) double footerTextHeight; 
@property (nonatomic,readonly) BOOL inDynamicContentScaleChange; 
@property (readonly) CGSize pageSizeWithGutter; 
+(double)p_contentScaleAutoFitForSheet:(id)arg1 ;
+(id)p_cachedAutoFitContentScaleDictionary;
+(double)autoFitContentScaleForSheet:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)isPagePlaceholderAtPageCoordinate:(SCD_Struct_TS315)arg1 ;
-(id)pageLayoutGeometryForPrintingAtPageCoordinate:(SCD_Struct_TS315)arg1 ;
-(id)pageLayoutGeometryForPageCoordinate:(SCD_Struct_TS315)arg1 ;
-(SCD_Struct_TS315)pageCoordinateForPageIndex:(unsigned long long)arg1 ;
-(void)registerPageLayout:(id)arg1 atPageCoordinate:(SCD_Struct_TS315)arg2 ;
-(void)layoutAtPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 ;
-(TNPrintProperties *)printProperties;
-(void)i_invalidatePageLayoutCache;
-(void)i_invalidateHintCache;
-(unsigned long long)pageNumberForPageCoordinate:(SCD_Struct_TS315)arg1 ;
-(CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out SCD_Struct_TS315*)arg2 ;
-(void)syncPositionOfLayout:(id)arg1 atCoordinate:(SCD_Struct_TS315)arg2 ;
-(double)userViewScale;
-(void)setHeaderTextHeight:(double)arg1 ;
-(void)setFooterTextHeight:(double)arg1 ;
-(void)p_willBeginDynamicContentScaleChange:(id)arg1 ;
-(void)p_didEndDynamicContentScaleChange:(id)arg1 ;
-(void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1 ;
-(void)updateUserViewScale;
-(void)p_clearHintCache;
-(void)p_computePriorPageCountForCurrentSheet;
-(void)p_computeSubsequentPageCountForCurrentSheet;
-(BOOL)p_shouldSkipFormSheets;
-(long long)p_updateCachedPageCountForCurrentSheet;
-(long long)p_pageCountForSheet:(id)arg1 ;
-(double)headerTextHeight;
-(double)footerTextHeight;
-(void)p_measureHeadersAndFooters;
-(void)updateViewScale;
-(double)p_printViewDefaultUserViewScale;
-(void)setUserViewScale:(double)arg1 ;
-(void)invalidatePageLayoutGeometries;
-(TSCERangeCoordinate)pageRangeForContentWithUpperBound:(SCD_Struct_TS315)arg1 ;
-(TSCERangeCoordinate)pageRangeForInfo:(id)arg1 upperBound:(SCD_Struct_TS315)arg2 ;
-(SCD_Struct_TS315)p_pageCoordinateForPageLayoutAtDevicePoint:(CGPoint)arg1 ;
-(SCD_Struct_TS315)pageCoordinateForMaxVisiblePage;
-(TSCERangeCoordinate)pageRangeForContent;
-(long long)p_priorPageCount;
-(SCD_Struct_TS315)pageCoordinateForDrawableAtUnscaledPoint:(CGPoint)arg1 ;
-(void)p_updateVisiblePageRange:(TSCERangeCoordinate)arg1 forLayoutController:(id)arg2 ;
-(CGSize)pageSizeWithGutter;
-(void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(SCD_Struct_TS315)arg3 ;
-(void)removeLayoutsFromPages;
-(void)invalidateDrawableLayouts;
-(void)p_invalidatePageCounts;
-(BOOL)p_headersOrFootersContainPageNumberRelatedAttachments;
-(TSCERangeCoordinate)pageRangeWithPlaceholdersWithUpperBound:(SCD_Struct_TS315)arg1 ;
-(id)p_pageLayoutAtCoordinate:(SCD_Struct_TS315)arg1 ;
-(void)p_enumerateOverPageRange:(TSCERangeCoordinate)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)p_hintCacheForInfo:(id)arg1 ;
-(id)p_layoutForInfo:(id)arg1 atCoordinate:(SCD_Struct_TS315)arg2 parentLayout:(id)arg3 ;
-(id)p_pageInfoForPageAtIndex:(unsigned long long)arg1 ;
-(TSCERangeCoordinate)pageRangeForPageIndex:(unsigned long long)arg1 ;
-(void)p_layoutInfo:(id)arg1 intoPageRange:(TSCERangeCoordinate)arg2 ;
-(void)canvasViewScaleDidChange:(double)arg1 ;
-(void)updateContentScale;
-(void)updatePrintMargins;
-(CGSize)contentSizeForCanvasLayer;
-(void)layoutInPageRange:(TSCERangeCoordinate)arg1 forLayoutController:(id)arg2 ;
-(SCD_Struct_TS315)pageCoordinateForPageLayoutAtUnscaledPoint:(CGPoint)arg1 ;
-(CGRect)printingLayoutRectForPageIndex:(unsigned long long)arg1 ;
-(void)willExitPrintView;
-(void)invalidatePageLayout;
-(id)i_layerForHeaderType:(int)arg1 fragment:(int)arg2 atPageCoordinate:(SCD_Struct_TS315)arg3 ;
-(void)i_setLayer:(id)arg1 forHeaderType:(int)arg2 fragment:(int)arg3 atPageCoordinate:(SCD_Struct_TS315)arg4 ;
-(id)pageInfoForPageIndex:(unsigned long long)arg1 ;
-(BOOL)inDynamicContentScaleChange;
-(BOOL)isPortrait;
-(CGRect)contentFrame;
-(void)setDelegate:(NSObject*<TNPageControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<TNPageControllerDelegate>)delegate;
-(unsigned long long)pageCount;
-(double)contentScale;
-(unsigned long long)numPages;
-(CGSize)pageSize;
-(void)setSheet:(TNSheet *)arg1 ;
-(TNSheet *)sheet;
-(TNDocumentRoot *)documentRoot;
-(void)setDocumentRoot:(TNDocumentRoot *)arg1 ;
@end
