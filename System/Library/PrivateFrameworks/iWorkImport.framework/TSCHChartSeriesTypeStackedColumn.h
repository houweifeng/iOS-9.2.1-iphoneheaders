/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartSeriesTypeColumn.h>

@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)elementBuilder;
-(id)genericToSpecificPropertyMap;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 ;
-(BOOL)supportsBarGap;
-(id)legalChartLabelPositions;
-(id)userInterfaceNameForLabelPosition:(id)arg1 ;
-(unsigned)adjustLabelPosition:(unsigned)arg1 forAxisValue:(double)arg2 intercept:(double)arg3 ;
-(double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5 ;
-(double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3 ;
-(unsigned long long)seriesIndexForDrawing:(id)arg1 ;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1 ;
-(id)init;
@end

