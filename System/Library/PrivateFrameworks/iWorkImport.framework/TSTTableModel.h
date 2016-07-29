/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTTableHiddenRowColumnProviding.h>
#import <iWorkImport/TSTTableInternalGeometryProviding.h>
#import <iWorkImport/TSTTableStrokeProviding.h>
#import <iWorkImport/TSTCustomStrokeProviding.h>
#import <iWorkImport/TSTTableMergeRangeProviding.h>
#import <iWorkImport/TSDMixing.h>

@class TSDStroke, TSTTableDataStore, NSString, TSTHiddenStateFormulaOwner, TSTSortRuleReferenceTracker, TSTTableStylePreset, TSCEOwnerFormulaMap, TSTImportWarningSetByCoordinateMap, TSCECalculationEngine, TSTCellDictionary, TSCECellCoordinateVector, TSTConditionalStyleFormulaOwner, TSTMergeOwner, TSWPStorage, TSTTableFilterSet, TSTTableSortOrder, TSTColumnRowUIDMap, TSTHiddenStateIndexSet, TSTStrokeSidecar, TSKDocumentRoot, TSTTableStyle, TSTCellStyle, TSWPParagraphStyle, TSWPShapeStyle, TSTCell, TSDFill, NSArray;

@interface TSTTableModel : TSPObject <TSTTableHiddenRowColumnProviding, TSTTableInternalGeometryProviding, TSTTableStrokeProviding, TSTCustomStrokeProviding, TSTTableMergeRangeProviding, TSDMixing> {

	TSTTableDataStore* mDataStore;
	CFUUIDRef mTableID;
	CFUUIDRef mFromTableID;
	BOOL mWasCut;
	unsigned short mNumberOfRows;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfHeaderRows;
	unsigned short mNumberOfHeaderColumns;
	unsigned short mNumberOfFooterRows;
	BOOL mHeaderRowsFrozen;
	BOOL mHeaderColumnsFrozen;
	unsigned short mNumberOfHiddenRows;
	unsigned short mNumberOfHiddenColumns;
	unsigned short mNumberOfUserHiddenRows;
	unsigned short mNumberOfUserHiddenColumns;
	unsigned short mNumberOfFilteredRows;
	double mDefaultRowHeight;
	double mDefaultColumnWidth;
	NSString* mTableName;
	BOOL mTableNameEnabled;
	double mTableNameHeight;
	BOOL mTableNameBorderEnabled;
	BOOL mRepeatingHeaderRowsEnabled;
	BOOL mRepeatingHeaderColumnsEnabled;
	TSTHiddenStateFormulaOwner* mHiddenStateFormulaOwnerForRows;
	TSTHiddenStateFormulaOwner* mHiddenStateFormulaOwnerForColumns;
	TSTSortRuleReferenceTracker* mSortRuleReferenceTracker;
	unsigned long long mPresetIDForUpgrade;
	TSTTableStylePreset* mTableStylePreset;
	BOOL mStyleApplyClearsAll;
	SCD_Struct_TS535 mStyles;
	TSTDefaultCellBlock mDefaultCells;
	TSCEOwnerFormulaMap* mFormulasForUndo;
	TSTImportWarningSetByCoordinateMap* mWarningSetsForUndo;
	TSCECalculationEngine* mCalcEngine;
	TSTCellDictionary* mCellsPendingWrite;
	opaque_pthread_mutex_t mCellsToInvalidateAfterRecalcLock;
	TSCECellCoordinateVector* mCellsToInvalidateAfterRecalc;
	TSCECellCoordinateVector* mCellsToInvalidateNonoverflowingAfterRecalc;
	TSTConditionalStyleFormulaOwner* mConditionalStyleFormulaOwner;
	TSTMergeOwner* mMergeOwner;
	TSWPStorage* mDeprecatedProvider;
	BOOL mWasUnarchivedFromAProvidedTable;
	TSTTableFilterSet* mFilterSet;
	TSTTableSortOrder* mSortOrder;
	TSTColumnRowUIDMap* mColumnRowUIDMap;
	TSTHiddenStateIndexSet* mHiddenRows;
	TSTHiddenStateIndexSet* mUserHiddenRows;
	TSTHiddenStateIndexSet* mHiddenColumns;
	TSTStrokeSidecar* mStrokeSidecar;

}

@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (assign,nonatomic) TSCECalculationEngine * calcEngine; 
@property (nonatomic,retain) TSCEOwnerFormulaMap * formulasForUndo; 
@property (nonatomic,retain) TSTImportWarningSetByCoordinateMap * warningSetsForUndo; 
@property (nonatomic,readonly) CFUUIDRef tableID; 
@property (nonatomic,readonly) CFUUIDRef fromTableID; 
@property (assign,nonatomic) BOOL wasCut; 
@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID; 
@property (nonatomic,retain) NSString * tableName; 
@property (assign,nonatomic) BOOL tableNameEnabled; 
@property (assign,nonatomic) double tableNameHeight; 
@property (assign,nonatomic) BOOL tableNameBorderEnabled; 
@property (nonatomic,readonly) TSDStroke * tableNameBorderStroke; 
@property (assign,nonatomic) BOOL repeatingHeaderRowsEnabled; 
@property (assign,nonatomic) BOOL repeatingHeaderColumnsEnabled; 
@property (assign,nonatomic) BOOL styleApplyClearsAll; 
@property (nonatomic,readonly) BOOL hasTableBorder; 
@property (nonatomic,readonly) BOOL hasAlternatingRows; 
@property (nonatomic,readonly) int tableWritingDirection; 
@property (assign,nonatomic) unsigned short numberOfRows; 
@property (assign,nonatomic) unsigned short numberOfColumns; 
@property (assign,nonatomic) unsigned short numberOfHeaderRows; 
@property (assign,nonatomic) unsigned short numberOfFooterRows; 
@property (assign,nonatomic) unsigned short numberOfHeaderColumns; 
@property (nonatomic,readonly) unsigned short numberOfHiddenRows; 
@property (nonatomic,readonly) unsigned short numberOfHiddenColumns; 
@property (nonatomic,readonly) unsigned short numberOfUserHiddenRows; 
@property (nonatomic,readonly) unsigned short numberOfUserHiddenColumns; 
@property (nonatomic,readonly) unsigned short numberOfVisibleBodyRows; 
@property (nonatomic,readonly) unsigned short numberOfVisibleBodyColumns; 
@property (assign,nonatomic) BOOL headerRowsFrozen; 
@property (assign,nonatomic) BOOL headerColumnsFrozen; 
@property (nonatomic,retain) TSTTableStylePreset * tableStylePreset; 
@property (nonatomic,readonly) TSTTableStyle * tableStyle; 
@property (nonatomic,readonly) TSTCellStyle * bodyCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerRowCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerColumnCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * footerRowCellStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * bodyTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerColumnTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * footerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * tableNameStyle; 
@property (nonatomic,readonly) TSWPShapeStyle * tableNameShapeStyle; 
@property (nonatomic,readonly) TSTCell * defaultBodyCell; 
@property (nonatomic,readonly) TSTCell * defaultHeaderRowCell; 
@property (nonatomic,readonly) TSTCell * defaultHeaderColumnCell; 
@property (nonatomic,readonly) TSTCell * defaultFooterRowCell; 
@property (nonatomic,readonly) TSDFill * backgroundFill; 
@property (nonatomic,readonly) TSDFill * bodyFill; 
@property (nonatomic,readonly) TSDFill * headerColumnsFill; 
@property (nonatomic,readonly) TSDFill * headerRowsFill; 
@property (nonatomic,readonly) TSDFill * footerRowsFill; 
@property (nonatomic,retain) TSTConditionalStyleFormulaOwner * conditionalStyleFormulaOwner; 
@property (nonatomic,readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForRows; 
@property (nonatomic,readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForColumns; 
@property (nonatomic,readonly) TSTSortRuleReferenceTracker * sortRuleReferenceTracker; 
@property (nonatomic,readonly) TSTMergeOwner * mergeOwner; 
@property (nonatomic,copy) TSTTableFilterSet * filterSet; 
@property (assign,nonatomic) BOOL wasUnarchivedFromAProvidedTable; 
@property (nonatomic,readonly) TSTCellDictionary * cellsPendingWrite; 
@property (nonatomic,readonly) TSCECellCoordinateVector * cellsToInvalidateAfterRecalc; 
@property (nonatomic,readonly) TSCECellCoordinateVector * cellsToInvalidateNonoverflowingAfterRecalc; 
@property (nonatomic,copy) TSTTableSortOrder * sortOrder; 
@property (nonatomic,retain,readonly) TSTStrokeSidecar * strokeSidecar; 
@property (assign) NSArray * rowHeights; 
@property (assign) NSArray * columnWidths; 
@property (nonatomic,retain) TSTColumnRowUIDMap * columnRowUIDMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * defaultVerticalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * bodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * headerColumnBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowSeparatorStroke; 
+(BOOL)needsObjectUUID;
+(unsigned long long)tableAreaForCellID:(SCD_Struct_TS315)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalRows:(unsigned short)arg5 ;
+(TSUColumnRowRect)cellRangeForTableArea:(unsigned long long)arg1 givenTableSize:(SCD_Struct_TS537)arg2 numberOfHeaderRows:(unsigned short)arg3 numberOfFooterRows:(unsigned short)arg4 numberOfHeaderColumns:(unsigned short)arg5 ;
+(CFDictionaryRef)newIDMapForPastedTablesInDrawables:(id)arg1 calculationEngine:(id)arg2 ;
+(void)chooseUniqueNameForTables:(id)arg1 inContainer:(id)arg2 forPaste:(BOOL)arg3 ;
+(void)load;
-(void)p_gatherReorganizeValuesForColumn:(unsigned char)arg1 inRows:(id)arg2 outValues:(TSTCellReorganizeValue*)arg3 ;
-(id)mappingForSortWithRules:(id)arg1 inRows:(id)arg2 ;
-(void)rearrangeWithMapping:(id)arg1 ;
-(void)p_clearDataListEntriesInRange:(TSUColumnRowRect)arg1 ignoreSizeChecks:(BOOL)arg2 ;
-(void)setTableStyle:(TSTTableStyle *)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(UUIDData<TSP::UUIDData>)tableUID;
-(unsigned short)numberOfFooterRows;
-(void)setNumberOfFooterRows:(unsigned short)arg1 ;
-(id)rowIndexesForUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)columnIndexesForUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)rowUIDsForRowRange:(NSRange)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)columnUIDsForColumnRange:(NSRange)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)rowUIDsForRowIndexes:(id)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)columnUIDsForColumnIndexes:(id)arg1 ;
-(TSUColumnRowRect)bodyRange;
-(UUIDData<TSP::UUIDData>)rowUIDForRowIndex:(unsigned short)arg1 ;
-(unsigned short)rowIndexForRowUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(UUIDData<TSP::UUIDData>)columnUIDForColumnIndex:(unsigned char)arg1 ;
-(unsigned char)columnIndexForColumnUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(TSUColumnRowRect)expandCellRangeToCoverMergedCells:(TSUColumnRowRect)arg1 ;
-(void)upgradeFromPreUFF;
-(void)upgradeDuringDocumentUpgradeIfNeeded;
-(void)registerAllFormulasWithCalculationEngine:(id)arg1 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(TSCECalculationEngine *)calcEngine;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSTTableStylePreset *)tableStylePreset;
-(void)setTableStylePreset:(TSTTableStylePreset *)arg1 ;
-(void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)p_releaseExistingDefaultStyles;
-(TSTCellStyle *)bodyCellStyle;
-(TSTCellStyle *)headerRowCellStyle;
-(TSTCellStyle *)headerColumnCellStyle;
-(TSTCellStyle *)footerRowCellStyle;
-(TSWPParagraphStyle *)headerRowTextStyle;
-(TSWPParagraphStyle *)headerColumnTextStyle;
-(TSWPParagraphStyle *)footerRowTextStyle;
-(TSWPParagraphStyle *)tableNameStyle;
-(TSWPShapeStyle *)tableNameShapeStyle;
-(id)newCell;
-(id)unnamedTableString;
-(void)resetStyles:(id)arg1 ;
-(void)setupDefaultCells;
-(void)setupHiddenStateIndexSets;
-(id)initWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 styles:(id)arg4 stylePreset:(id)arg5 tableInfo:(id)arg6 ;
-(CFUUIDRef)fromTableID;
-(BOOL)repeatingHeaderRowsEnabled;
-(BOOL)repeatingHeaderColumnsEnabled;
-(BOOL)headerRowsFrozen;
-(BOOL)headerColumnsFrozen;
-(TSUColumnRowRect)headerRowRange;
-(TSUColumnRowRect)headerColumnRange;
-(TSUColumnRowRect)footerRowRange;
-(BOOL)tableNameEnabled;
-(BOOL)tableNameBorderEnabled;
-(void)setTableNameBorderEnabled:(BOOL)arg1 ;
-(double)tableNameHeight;
-(void)setTableNameHeight:(double)arg1 ;
-(BOOL)styleApplyClearsAll;
-(void)setStyleApplyClearsAll:(BOOL)arg1 ;
-(unsigned char)hidingActionForRow:(unsigned short)arg1 ;
-(unsigned char)hidingActionForColumn:(unsigned char)arg1 ;
-(TSTTableFilterSet *)filterSet;
-(TSTMergeOwner *)mergeOwner;
-(unsigned long long)tableAreaForCellID:(SCD_Struct_TS315)arg1 ;
-(void)filterSetUpdated;
-(void)setFilterSetType:(int)arg1 ;
-(void)dirtyFilterState;
-(void)setStorageParentToInfo:(id)arg1 ;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 needsNewName:(BOOL)arg3 avoidNames:(id)arg4 ;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 needsNewName:(BOOL)arg3 ;
-(unsigned short)numberOfHeaderRows;
-(unsigned short)numberOfHeaderColumns;
-(TSUColumnRowRect)actualHeaderColumnRange;
-(TSUColumnRowRect)topCornerRange;
-(TSUColumnRowRect)bottomCornerRange;
-(id)defaultCellForTableArea:(unsigned long long)arg1 ;
-(id)cellBorderAtCellID:(SCD_Struct_TS315)arg1 ;
-(BOOL)hasFormulaByID:(unsigned)arg1 atCellID:(SCD_Struct_TS315)arg2 ;
-(TSTConditionalStyleFormulaOwner *)conditionalStyleFormulaOwner;
-(TSTCellUID)cellUIDforCellID:(const SCD_Struct_TS315*)arg1 ;
-(void)p_fetchCellHoldingReadLock:(void*)arg1 returnCode:(void*)arg2 ;
-(id)defaultCellStyleForTableArea:(unsigned long long)arg1 ;
-(id)defaultTextStyleForTableArea:(unsigned long long)arg1 ;
-(unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1 ;
-(unsigned char)visibleColumnAfterColumn:(unsigned char)arg1 ;
-(unsigned short)visibleRowBeforeRow:(unsigned short)arg1 ;
-(unsigned short)visibleRowAfterRow:(unsigned short)arg1 ;
-(int)insertRowsInRange:(NSRange)arg1 uids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 metadata:(id)arg3 unsetFilterHidingAction:(BOOL)arg4 ;
-(TSTColumnRowUIDMap *)columnRowUIDMap;
-(BOOL)isRowHidden:(unsigned short)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)isRowHidden:(unsigned short)arg1 ;
-(void)removeRowsAtIndex:(unsigned short)arg1 count:(unsigned short)arg2 ;
-(void)removeColumnsAtIndex:(unsigned char)arg1 count:(unsigned short)arg2 ;
-(unsigned short)numberRowsHiddenInCellRange:(TSUColumnRowRect)arg1 ;
-(unsigned short)numberColumnsHiddenInCellRange:(TSUColumnRowRect)arg1 ;
-(TSUColumnRowRect)bodyRowRange;
-(TSUColumnRowRect)bodyColumnRange;
-(id)expandCellRegionToCoverMergedCells:(id)arg1 ;
-(void)defaultStrokesForCellID:(SCD_Struct_TS315)arg1 outTopStroke:(id*)arg2 outLeftStroke:(id*)arg3 outBottomStroke:(id*)arg4 outRightStroke:(id*)arg5 ;
-(void)defaultStrokesForCellID:(SCD_Struct_TS315)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalColumns:(unsigned short)arg5 totalRows:(unsigned short)arg6 tableArea:(unsigned long long)arg7 outTopStroke:(id*)arg8 outLeftStroke:(id*)arg9 outBottomStroke:(id*)arg10 outRightStroke:(id*)arg11 ;
-(TSDStroke *)headerRowSeparatorStroke;
-(TSDStroke *)bodyRowStroke;
-(TSDStroke *)footerRowSeparatorStroke;
-(TSDStroke *)headerColumnSeparatorStroke;
-(TSDStroke *)bodyColumnStroke;
-(TSDStroke *)headerRowBodyRowStroke;
-(TSDStroke *)headerRowBodyColumnStroke;
-(TSDStroke *)headerColumnBodyRowStroke;
-(TSDStroke *)headerColumnBodyColumnStroke;
-(TSDStroke *)footerRowBodyRowStroke;
-(TSDStroke *)footerRowBodyColumnStroke;
-(TSDStroke *)defaultHorizontalBorderStroke;
-(TSDStroke *)defaultVerticalBorderStroke;
-(void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(TSTSimpleRange)arg4 ;
-(void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(TSTSimpleRange)arg4 ;
-(void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(TSTSimpleRange)arg4 ;
-(void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(TSTSimpleRange)arg4 ;
-(id)strokeLayerForLeftSideOfColumn:(unsigned char)arg1 ;
-(id)strokeLayerForRightSideOfColumn:(unsigned char)arg1 ;
-(id)strokeLayerForTopOfRow:(unsigned short)arg1 ;
-(id)strokeLayerForBottomOfRow:(unsigned short)arg1 ;
-(TSTHiddenStateFormulaOwner *)hiddenStateFormulaOwnerForRows;
-(TSTHiddenStateFormulaOwner *)hiddenStateFormulaOwnerForColumns;
-(TSTSortRuleReferenceTracker *)sortRuleReferenceTracker;
-(void)setTableID:(CFUUIDRef)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(const TSUUuidMap*)arg1 calcEngine:(id)arg2 ;
-(void)setTableNameStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setTableNameShapeStyle:(TSWPShapeStyle *)arg1 ;
-(void)updateTableRowColumnStylesWithBlock:(/*^block*/id)arg1 ;
-(id)allRichTextPayloadStorages;
-(SCD_Struct_TS315)cellIDForCellUID:(const TSTCellUID*)arg1 ;
-(id)mutableRowIndexesForUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)rowUIDs;
-(id)mutableColumnIndexesForUIDs:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)columnUIDs;
-(id)UIDSetForIndexes:(id)arg1 asRows:(BOOL)arg2 ;
-(id)mutableIndexesForUIDSet:(id)arg1 asRows:(BOOL)arg2 ;
-(id)mutableIndexesForUIDSet:(id)arg1 asRows:(BOOL)arg2 notFoundUIDs:(id)arg3 ;
-(BOOL)writeCellIDsInCellUIDList:(id)arg1 toVector:(vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >*)arg2 ;
-(TSDStroke *)tableNameBorderStroke;
-(BOOL)hasAlternatingRows;
-(id)initWithContext:(id)arg1 fromSourceModel:(id)arg2 region:(id)arg3 tableInfo:(id)arg4 waitForCalcEngine:(BOOL)arg5 ;
-(void)setTableNameEnabled:(BOOL)arg1 ;
-(void)setBodyCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderRowCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderColumnCellStyle:(TSTCellStyle *)arg1 ;
-(void)setFooterRowCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderRowTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setHeaderColumnTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setFooterRowTextStyle:(TSWPParagraphStyle *)arg1 ;
-(unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1 ;
-(unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1 ;
-(unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1 ;
-(unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1 ;
-(BOOL)anyRowsHiddenInCellRange:(TSUColumnRowRect)arg1 ;
-(BOOL)anyColumnsHiddenInCellRange:(TSUColumnRowRect)arg1 ;
-(TSDStroke *)defaultHorizontalBorderStrokeEvenIfNotVisible;
-(TSDStroke *)bodyRowStrokeEvenIfNotVisible;
-(TSDStroke *)headerColumnBorderStroke;
-(TSDStroke *)headerRowBorderStroke;
-(TSDStroke *)footerRowBorderStroke;
-(id)allMergeRanges;
-(id)mergeRangesForCellRange:(TSUColumnRowRect)arg1 ;
-(id)mergeRangesForCellRegion:(id)arg1 ;
-(void)setDrawableIsBeingCopied:(BOOL)arg1 ;
-(void)bakeFormulas;
-(void)setRepeatingHeaderRowsEnabled:(BOOL)arg1 ;
-(void)setRepeatingHeaderColumnsEnabled:(BOOL)arg1 ;
-(void)setNumberOfHeaderRows:(unsigned short)arg1 ;
-(void)setNumberOfHeaderColumns:(unsigned short)arg1 ;
-(void)setHeaderRowsFrozen:(BOOL)arg1 ;
-(void)setHeaderColumnsFrozen:(BOOL)arg1 ;
-(void)setColumnRowUIDMap:(TSTColumnRowUIDMap *)arg1 ;
-(BOOL)hasTableBorder;
-(int)tableWritingDirection;
-(void)resetSortRuleReferenceTrackerForInsert;
-(void)setFilterSet:(TSTTableFilterSet *)arg1 ;
-(id)duplicateFilterSet;
-(id)duplicateFilterSetInUidForm;
-(BOOL)needsFilterFormulaRewriteForImport;
-(void)setNeedsFilterFormulaRewriteForImport:(BOOL)arg1 ;
-(void)mutateFormulaFiltersUsingBlock:(/*^block*/id)arg1 ;
-(void)enableFilterSet:(BOOL)arg1 ;
-(BOOL)hasActiveFilters;
-(BOOL)hasFilterRulesInColumns:(id)arg1 ;
-(BOOL)canTranspose;
-(void)clearFromTableID;
-(BOOL)wasCut;
-(void)setWasCut:(BOOL)arg1 ;
-(TSTCell *)defaultBodyCell;
-(TSTCell *)defaultFooterRowCell;
-(TSTCell *)defaultHeaderRowCell;
-(TSTCell *)defaultHeaderColumnCell;
-(BOOL)useBandedFill;
-(id)bandedFillObject;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 ;
-(TSUColumnRowRect)cellRangeForTableArea:(unsigned long long)arg1 ;
-(id)tableAreasForCellRange:(TSUColumnRowRect)arg1 ;
-(int)defaultCell:(id)arg1 forTableArea:(unsigned long long)arg2 ;
-(unsigned long long)tableAreaForRow:(unsigned short)arg1 ;
-(unsigned long long)tableAreaForColumn:(unsigned char)arg1 ;
-(void)p_performCommentStorageDOLC:(id)arg1 ;
-(id)cellAtCellID:(SCD_Struct_TS315)arg1 ;
-(id)cellMapForRegion:(id)arg1 uidBased:(BOOL)arg2 ;
-(BOOL)hasCommentStorageAtCellID:(SCD_Struct_TS315)arg1 ;
-(id)columnNameForCellID:(SCD_Struct_TS315)arg1 cellRangeContainingName:(TSUColumnRowRect*)arg2 restrictToBodyRange:(BOOL)arg3 ;
-(id)rowNameForCellID:(SCD_Struct_TS315)arg1 cellRangeContainingName:(TSUColumnRowRect*)arg2 restrictToBodyRange:(BOOL)arg3 ;
-(void)setHeight:(double)arg1 ofRow:(unsigned short)arg2 ;
-(void)setWidth:(double)arg1 ofColumn:(unsigned char)arg2 ;
-(NSArray *)rowHeights;
-(void)setRowHeights:(NSArray *)arg1 ;
-(void)insertRowsAtIndex:(unsigned short)arg1 count:(unsigned short)arg2 addBefore:(BOOL)arg3 ;
-(int)insertRowsInRange:(NSRange)arg1 uids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 metadata:(id)arg3 ;
-(int)insertColumnsInRange:(NSRange)arg1 uids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg2 metadata:(id)arg3 ;
-(void)insertColumnsAtIndex:(unsigned char)arg1 count:(unsigned short)arg2 addBefore:(BOOL)arg3 ;
-(void)removeColumnsAtIndexes:(id)arg1 ;
-(BOOL)isColumnHidden:(unsigned char)arg1 forAction:(unsigned char)arg2 ;
-(id)hiddenColumnsInCellRange:(TSUColumnRowRect)arg1 ;
-(id)visibleColumnsInCellRange:(TSUColumnRowRect)arg1 ;
-(id)visibleColumnsInColumnRange:(id)arg1 ;
-(id)hiddenRowsInCellRange:(TSUColumnRowRect)arg1 ;
-(id)userHiddenRowsInCellRange:(TSUColumnRowRect)arg1 ;
-(id)visibleRowsInCellRange:(TSUColumnRowRect)arg1 ;
-(id)userVisibleRowsInCellRange:(TSUColumnRowRect)arg1 ;
-(id)visibleRowsInRowRange:(id)arg1 ;
-(BOOL)anyRowsHiddenInCellRange:(TSUColumnRowRect)arg1 forAction:(unsigned char)arg2 ;
-(BOOL)isCellRangeHidden:(TSUColumnRowRect)arg1 ;
-(unsigned short)numberOfVisibleBodyRows;
-(unsigned short)numberOfVisibleBodyColumns;
-(BOOL)hasMergeRanges;
-(id)mergedGridIndicesForDirection:(long long)arg1 ;
-(id)regionForValueCellsInRange:(TSUColumnRowRect)arg1 ;
-(id)grabAllMergeRanges;
-(TSDFill *)backgroundFill;
-(TSDFill *)bodyFill;
-(TSDFill *)headerColumnsFill;
-(TSDFill *)headerRowsFill;
-(TSDFill *)footerRowsFill;
-(int)maxStrokeOrder;
-(void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3 ;
-(void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3 ;
-(void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3 ;
-(void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3 ;
-(id)cellRegionWithConditionalStyleMatchingCell:(SCD_Struct_TS315)arg1 ;
-(void)remapTableUIDsUsingTableIDHistoryWithCalcEngine:(id)arg1 ;
-(void)addPasteboardCustomFormatsToDocumentAndUpdateCellsInRegion:(id)arg1 ;
-(SCD_Struct_TS318*)referenceToHiddenStateFromRow:(unsigned short)arg1 toRow:(unsigned short)arg2 ;
-(SCD_Struct_TS318*)referenceToHiddenStateFromColumn:(unsigned char)arg1 toColumn:(unsigned char)arg2 ;
-(BOOL)hasFormulas;
-(BOOL)cellWasModifiedInCurrentRecalcCycle:(SCD_Struct_TS315)arg1 ;
-(void)moveCalcEngineReferencesFromSourceTable:(CFUUIDRef)arg1 sourceRange:(TSUColumnRowRect)arg2 sourceOffset:(SCD_Struct_TS271)arg3 ;
-(void)validateStyles;
-(void)private_validateMergeCellsPedantically;
-(TSUColumnRowRect)minPopulatedCellRange;
-(id)prunedCellUIDListFromCellUIDList:(id)arg1 allowMergeFragment:(BOOL)arg2 addingPrunedIndicesToIndexSet:(id)arg3 ;
-(id)cellUIDListFromCellRegion:(id)arg1 ;
-(id)cellRegionFromCellUIDList:(id)arg1 ;
-(TSUColumnRowRect)cellRangeForUIDRange:(const TSTCellUIDRange*)arg1 ;
-(TSTCellUIDRange*)cellUIDRangeForCellRange:(TSUColumnRowRect)arg1 ;
-(id)cellRegionForUIDRange:(const TSTCellUIDRange*)arg1 ;
-(unsigned short)numberOfHiddenColumns;
-(unsigned short)numberOfUserHiddenRows;
-(unsigned short)numberOfUserHiddenColumns;
-(BOOL)wasUnarchivedFromAProvidedTable;
-(void)setWasUnarchivedFromAProvidedTable:(BOOL)arg1 ;
-(TSTCellDictionary *)cellsPendingWrite;
-(TSCECellCoordinateVector *)cellsToInvalidateAfterRecalc;
-(TSCECellCoordinateVector *)cellsToInvalidateNonoverflowingAfterRecalc;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(TSCEOwnerFormulaMap *)formulasForUndo;
-(void)setFormulasForUndo:(TSCEOwnerFormulaMap *)arg1 ;
-(TSTImportWarningSetByCoordinateMap *)warningSetsForUndo;
-(void)setWarningSetsForUndo:(TSTImportWarningSetByCoordinateMap *)arg1 ;
-(void)setConditionalStyleFormulaOwner:(TSTConditionalStyleFormulaOwner *)arg1 ;
-(TSTStrokeSidecar *)strokeSidecar;
-(void)dealloc;
-(id)init;
-(unsigned short)numberOfColumns;
-(unsigned short)numberOfRows;
-(void)setSortOrder:(TSTTableSortOrder *)arg1 ;
-(TSTTableSortOrder *)sortOrder;
-(TSUColumnRowRect)range;
-(void)setNumberOfRows:(unsigned short)arg1 ;
-(void)validate;
-(void)setNumberOfColumns:(unsigned short)arg1 ;
-(CFUUIDRef)tableID;
-(NSString *)tableName;
-(NSArray *)columnWidths;
-(unsigned short)numberOfHiddenRows;
-(void)removeRowsAtIndexes:(id)arg1 ;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(id)dataStore;
-(BOOL)isColumnHidden:(unsigned char)arg1 ;
-(TSTTableStyle *)tableStyle;
-(TSKDocumentRoot *)documentRoot;
-(void)setBodyTextStyle:(TSWPParagraphStyle *)arg1 ;
-(TSWPParagraphStyle *)bodyTextStyle;
@end

