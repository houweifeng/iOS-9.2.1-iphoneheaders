/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartSeries, TSCHChartValueAxis, TSCHChartAxis, TSWPParagraphStyle, TSDStroke, TSDShadow;

@interface TSCHLineAreaSeriesModelCache : NSObject {

	unsigned long long mSeriesIndex;
	TSCHChartSeries* mSeries;
	TSCHChartValueAxis* mValueAxis;
	TSCHChartAxis* mGroupAxis;
	TSWPParagraphStyle* mParagraphStyle;
	unsigned mLabelPosition;
	BOOL mShowLabelsInFront;
	int mSymbolType;
	TSDStroke* mSymbolStroke;
	TSDStroke* mSeriesStroke;
	TSDShadow* mSeriesShadow;
	double mDataPointSize;
	double mOpacity;
	int mLineType;
	id mSeriesFill;
	id mSymbolFill;
	BOOL mShowValueLabels;
	CGPathRef mUnitSymbolPath;

}

@property (readonly) unsigned long long seriesIndex; 
@property (readonly) TSCHChartSeries * series; 
@property (readonly) TSCHChartValueAxis * valueAxis; 
@property (readonly) TSCHChartAxis * groupAxis; 
@property (readonly) TSWPParagraphStyle * paragraphStyle; 
@property (readonly) unsigned labelPosition; 
@property (readonly) BOOL showLabelsInFront; 
@property (readonly) int symbolType; 
@property (readonly) TSDStroke * symbolStroke; 
@property (readonly) id symbolFill; 
@property (readonly) TSDStroke * seriesStroke; 
@property (readonly) id seriesFill; 
@property (readonly) double dataPointSize; 
@property (readonly) double opacity; 
@property (readonly) int lineType; 
@property (readonly) BOOL showValueLabels; 
@property (readonly) TSDShadow * seriesShadow; 
@property (readonly) CGPathRef unitSymbolPath; 
-(TSCHChartValueAxis *)valueAxis;
-(BOOL)showValueLabels;
-(id)seriesFill;
-(TSDStroke *)symbolStroke;
-(CGPathRef)unitSymbolPath;
-(TSDShadow *)seriesShadow;
-(BOOL)showLabelsInFront;
-(TSDStroke *)seriesStroke;
-(id)symbolFill;
-(TSCHChartAxis *)groupAxis;
-(double)dataPointSize;
-(id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2 ;
-(void)dealloc;
-(double)opacity;
-(TSWPParagraphStyle *)paragraphStyle;
-(TSCHChartSeries *)series;
-(int)symbolType;
-(int)lineType;
-(unsigned)labelPosition;
-(unsigned long long)seriesIndex;
@end

