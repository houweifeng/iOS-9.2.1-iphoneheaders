/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITableView, NSArray, UITableViewRowData, NSMutableIndexSet, NSMutableArray;

@interface _UITableViewUpdateSupport : NSObject {

	long long oldSection;
	long long newSection;
	long long oldGlobalRow;
	long long newGlobalRow;
	UITableView* tableView;
	NSRange visibleRows;
	NSArray* updateItems;
	UITableViewRowData* oldRowData;
	UITableViewRowData* newRowData;
	NSRange oldRowRange;
	NSRange newRowRange;
	NSMutableIndexSet* rows;
	NSMutableIndexSet* movedRows;
	NSMutableIndexSet* movedSections;
	CGRect oldTableViewVisibleBounds;
	CGRect newTableViewVisibleBounds;
	CGRect tableViewVisibleBoundsUnion;
	double tableViewVisibleBoundsOffset;
	long long oldSectionCount;
	long long newSectionCount;
	long long* oldSectionMap;
	long long* newSectionMap;
	long long oldGlobalRowCount;
	long long newGlobalRowCount;
	long long* oldGlobalRowMap;
	long long* newGlobalRowMap;
	id* animatedCells;
	id* animatedHeaders;
	id* animatedFooters;
	long long globalReorderingRow;
	id _context;
	NSMutableArray* viewAnimations;
	NSMutableArray* deletedSections;
	NSMutableArray* insertedSections;
	NSMutableArray* gaps;

}
-(NSRange)_visibleRowRangePlusAdjoining;
-(double)_startOfRowAfterRow:(long long)arg1 withRowData:(id)arg2 ;
-(double)_startOfRowAfterHeaderInSection:(long long)arg1 withRowData:(id)arg2 ;
-(double)_startOfRowAfterFooterInSection:(long long)arg1 withRowData:(id)arg2 ;
-(void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2 ;
-(void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(BOOL)_isReloadSectionUpdate;
-(id)_imageViewForView:(id)arg1 ;
-(void)_validateAnimatedCells;
-(void)_computeVisibleBounds;
-(void)_faultInRealHeightsOfNeededCells;
-(void)_computeSectionUpdates;
-(void)_computeRowUpdates;
-(void)_setupAnimationStructures;
-(void)_computeGaps;
-(void)_computeAutomaticAnimationTypes;
-(void)_setupAnimationsForExistingVisibleCells;
-(void)_setupAnimationForReorderingRow;
-(void)_setupAnimationsForNewlyInsertedCells;
-(void)_setupAnimationsForInsertedHeadersAndFooters;
-(void)_setupAnimationsForDeletedCells;
-(void)_setupAnimationsForDeletedHeadersAndFooters;
-(void)_setupAnimationsForExistingOffscreenCells;
-(void)_setupAnimationsForExistingHeadersAndFooters;
-(void)_setupAnimationForTableHeader;
-(void)_setupAnimationForTableFooter;
-(void)dealloc;
-(id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(NSRange)arg5 newRowRange:(NSRange)arg6 context:(id)arg7 ;
-(void)_setupAnimations;
@end

