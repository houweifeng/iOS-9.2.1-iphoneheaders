/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABShapeGeometry : NSObject
+(void)readAdjustValuesFromShapeProperties:(const EshShapeProperties*)arg1 toGeometry:(id)arg2 ;
+(void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties*)arg1 toGeometry:(id)arg2 ;
+(void)readLimoFromPath:(const EshPath*)arg1 toGeometry:(id)arg2 ;
+(void)readPathCommandsAndParamsFromPath:(const EshPath*)arg1 toGeometry:(id)arg2 ;
+(int)actualPathCommandForPathCommand:(int)arg1 index:(unsigned short)arg2 ;
+(OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)arg1 ;
+(void)readFromShape:(EshShape*)arg1 toShape:(id)arg2 ;
+(void)readFromFormulas:(const EshTablePropVal<EshFormula>*)arg1 toGeometry:(id)arg2 ;
+(void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect>*)arg1 toGeometry:(id)arg2 ;
+(EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)arg1 ;
+(void)appendAdjustPoint:(OADAdjustPoint)arg1 toPathParams:(EshPathParamTable*)arg2 ;
+(void)writeAdjustValuesFromGeometry:(id)arg1 toShapeProperties:(EshShapeProperties*)arg2 ;
+(void)writeCoordSpaceFromGeometry:(id)arg1 toShape:(EshShape*)arg2 ;
+(void)writeLimoFromGeometry:(id)arg1 toPath:(EshPath*)arg2 ;
+(void)writePathCommandsAndParamsFromGeometry:(id)arg1 toPath:(EshPath*)arg2 ;
+(void)writeFormulasFromGeometry:(id)arg1 toPath:(EshPath*)arg2 ;
+(void)writeTextBodyRectsFromGeometry:(id)arg1 toPath:(EshPath*)arg2 ;
+(void)readFromPathCommands:(const EshTablePropVal<EshPathCommand>*)arg1 pathParams:(const EshPathParamTable*)arg2 toGeometry:(id)arg3 ;
+(void)readFromLimo:(CsPoint<int>)arg1 toGeometry:(id)arg2 ;
+(void)writeFromShape:(id)arg1 toShape:(EshShape*)arg2 ;
@end

