/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxis.h>

@interface TSCHChartCategoryAxis : TSCHChartAxis {

	int mRangeContinuousCache;

}
+(unsigned char)styleOwnerPathType;
+(id)axisForInfo:(id)arg1 ;
-(id)g_genericToSpecificPropertyMap;
-(pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 ;
-(BOOL)isCategory;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(BOOL)isRangeContinuous;
-(id)p_getGenericToCategoryPropertyMapForMultiData;
-(id)p_getGenericToCategoryPropertyMapForNonMultiData;
-(id)p_getGenericToCategoryPropertyMap;
-(void)dealloc;
-(id)defaultProperties;
@end
