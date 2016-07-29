/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartResizerHelper, TSCH3DChartBoundsLayout;

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartResizerHelper* mResizerHelper;
	TSCH3DChartBoundsLayout* mBoundsLayout;

}

@property (nonatomic,readonly) TSCH3DChartResizerHelper * resizerHelper; 
@property (nonatomic,readonly) TSCH3DChartBoundsLayout * boundsLayout; 
-(TSCH3DChartBoundsLayout *)boundsLayout;
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS432)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(id)boundsLayoutByResizingToLayoutSize:(const tvec2<float>*)arg1 ;
-(TSCH3DChartResizerHelper *)resizerHelper;
-(void)dealloc;
@end

