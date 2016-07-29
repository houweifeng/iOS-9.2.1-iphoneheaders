/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDProcessor.h>

@interface CHPChangeDirection : EDProcessor
-(id)getSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2 ;
-(void)cleanUpOldSeriesCollection:(id)arg1 ;
-(id)getGraphicPropertiesForSeriesWithIndex:(unsigned long long)arg1 fromCollection:(id)arg2 isVaryColors:(BOOL)arg3 forChart:(id)arg4 ;
-(id)createNewSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2 ;
-(void)mapSeriesCollection:(id)arg1 from:(id)arg2 forChart:(id)arg3 ;
-(void)addDataValue:(id)arg1 to:(id)arg2 withIndex:(unsigned long long)arg3 ;
-(void)mapSeriesValues:(id)arg1 to:(id)arg2 forIndex:(unsigned long long)arg3 byRow:(BOOL)arg4 forChart:(id)arg5 ;
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(void)changeChartDirection:(id)arg1 sheet:(id)arg2 ;
-(void)changeBarColumnDirection:(id)arg1 ;
@end

