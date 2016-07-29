/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartResizer.h>

@interface TSCH3DChartPieResizer : TSCH3DChartResizer {

	tvec2<bool> mDirections;

}
+(tvec2<float>)adjustLabelWrapSize:(const tvec2<float>*)arg1 ;
+(float)perspectiveness;
-(tvec3<float>)adjust:(tvec3<float>*)arg1 by:(float)arg2 ;
-(tvec2<bool>)canImprove;
-(tvec2<float>)updateResizerFromRequestedSize:(const tvec2<float>*)arg1 startingSize:(tvec2<float>*)arg2 ;
-(tvec2<float>)squareSize:(const tvec2<float>*)arg1 ;
-(tvec2<float>)updateDirectionsFromRequestedSize:(const tvec2<float>*)arg1 startingSize:(tvec2<float>*)arg2 ;
-(void)setScale:(tvec3<float>*)arg1 ;
@end

