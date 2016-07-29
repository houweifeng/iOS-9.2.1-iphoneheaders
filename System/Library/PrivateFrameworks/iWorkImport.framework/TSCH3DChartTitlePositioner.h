/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DScene, TSCHChartInfo;

@interface TSCH3DChartTitlePositioner : NSObject {

	TSCH3DScene* mScene;
	TSCHChartInfo* mInfo;
	tvec2<float> mCachedCategoryAxisLabelsSize;
	tvec2<float> mCachedValueAxisLabelsSize;
	tvec2<float> mCachedSeriesLabelsSize;

}

@property (nonatomic,readonly) TSCHChartInfo * info; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)positionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(double)wrapWidthForSize:(CGSize)arg1 labelTransform:(const LabelTransform*)arg2 ;
-(id)initWithInfo:(id)arg1 scene:(id)arg2 ;
-(void)applyParagraphStyle:(id)arg1 onLabelTransform:(LabelTransform*)arg2 alignmentDimension:(int)arg3 ;
-(tvec2<float>)sizeOfCategoryAxisLabels;
-(tvec2<float>)sizeOfValueAxisLabels;
-(tvec2<float>)sizeOfSeriesLabels;
-(void)dealloc;
-(TSCHChartInfo *)info;
-(TSCH3DScene *)scene;
@end

