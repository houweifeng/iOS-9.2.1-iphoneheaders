/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisLayoutItem.h>

@class TSCHChartAxisSeriesLabelsLayoutItem, TSCHChartCategoryAxisLabelsLayoutItem;

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem {

	TSCHChartAxisSeriesLabelsLayoutItem* mSeriesLabels;
	TSCHChartCategoryAxisLabelsLayoutItem* mCategoryLabels;

}

@property (nonatomic,readonly) TSCHChartAxisSeriesLabelsLayoutItem * axisSeriesLabelsLayoutItem; 
@property (nonatomic,readonly) TSCHChartCategoryAxisLabelsLayoutItem * axisCategoryLabelsLayoutItem; 
-(TSCHChartCategoryAxisLabelsLayoutItem *)axisCategoryLabelsLayoutItem;
-(TSCHChartAxisSeriesLabelsLayoutItem *)axisSeriesLabelsLayoutItem;
-(id)renderersWithRep:(id)arg1 ;
-(void)buildSubTree;
-(void)p_layoutLabelsNow;
-(CGRect)protected_layoutSpaceRectForAllLabels;
-(void)dealloc;
@end

