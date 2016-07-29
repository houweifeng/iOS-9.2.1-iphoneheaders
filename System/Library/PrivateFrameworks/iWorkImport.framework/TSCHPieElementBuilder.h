/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHElementBuilder.h>

@interface TSCHPieElementBuilder : TSCHElementBuilder
-(unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRect:(CGRect*)arg6 outNewStrings:(id*)arg7 ;
-(CGPathRef)newElementPathInBody:(id)arg1 forSeries:(id)arg2 outTransform:(CGAffineTransform*)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outWedgeCenterPoint:(CGPoint*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewElementPaths:(const CGPath*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(/*function pointer*/void**)arg4 ;
-(BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(CGAffineTransform*)arg3 outLine:(SCD_Struct_TS502*)arg4 ;
@end

