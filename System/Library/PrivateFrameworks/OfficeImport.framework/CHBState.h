/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CHDChart;

@interface CHBState : NSObject {

	CHDChart* mChart;
	CFArrayRef mXlChartDataSeriesCollection;
	int mXlSeriesCount;
	int mXlCurrentSeriesIndex;
	BOOL mHasPrimaryMixedArea;
	BOOL mHasPrimaryMixedColumn;
	BOOL mHasPrimaryMixedLine;
	BOOL mHasSecondaryMixedArea;
	BOOL mHasSecondaryMixedColumn;
	BOOL mHasSecondaryMixedLine;

}
-(void)dealloc;
-(id)init;
-(id)resources;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(int)xlSeriesCount;
-(XlChartDataSeries*)xlChartDataSeriesAtIndex:(int)arg1 ;
-(void)setXlCurrentSeriesIndex:(int)arg1 ;
-(void)deleteXlChartDataSeriesCollection;
-(void)readAndCacheXlChartDataSeries;
-(BOOL)hasPrimaryMixedArea;
-(BOOL)hasSecondaryMixedArea;
-(BOOL)hasPrimaryMixedColumn;
-(BOOL)hasSecondaryMixedColumn;
-(BOOL)hasPrimaryMixedLine;
-(XlChartDataSeries*)xlCurrentChartDataSeries;
-(int)xlCurrentChartDataSeriesIndex;
-(void)setHasPrimaryMixedArea:(BOOL)arg1 ;
-(void)setHasPrimaryMixedColumn:(BOOL)arg1 ;
-(void)setHasPrimaryMixedLine:(BOOL)arg1 ;
-(void)setHasSecondaryMixedArea:(BOOL)arg1 ;
-(void)setHasSecondaryMixedColumn:(BOOL)arg1 ;
-(BOOL)hasSecondaryMixedLine;
-(void)setHasSecondaryMixedLine:(BOOL)arg1 ;
-(BOOL)isMixedChart;
-(unsigned)chartGroupIndexForType:(int)arg1 isForPrimary:(BOOL)arg2 ;
@end

