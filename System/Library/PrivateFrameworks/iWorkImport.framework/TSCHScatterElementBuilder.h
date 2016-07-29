/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHLineAreaScatterElementBuilder.h>

@interface TSCHScatterElementBuilder : TSCHLineAreaScatterElementBuilder
-(unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const CGPath*)arg4 outSelectionKnobLocations:(id*)arg5 ;
-(void)p_addTopStroke:(SCD_Struct_TS501*)arg1 toPath:(CGPathRef)arg2 withPointsArray:(SCD_Struct_TS499*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5 ;
-(void)p_addKnobsForPoint:(CGPoint)arg1 strokedUnitSymbolRect:(CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 includePoint:(BOOL)arg5 ;
-(BOOL)needsSeparateHitTestingPaths;
@end

