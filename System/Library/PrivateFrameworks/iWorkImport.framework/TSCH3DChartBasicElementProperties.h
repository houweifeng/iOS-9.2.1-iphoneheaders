/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartMutableElementProperties.h>

@class TSCH3DChartModelEnumerator;

@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties {

	TSCH3DChartModelEnumerator* mEnumerator;
	tvec2<int> mSize;

}

@property (nonatomic,readonly) tvec2<int> size; 
-(void)createResources;
-(GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(GeometryResource)boundsGeometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)normalsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(id)texcoordsForSeries:(id)arg1 index:(const tvec2<int>*)arg2 ;
-(void)resetWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS432)arg2 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

