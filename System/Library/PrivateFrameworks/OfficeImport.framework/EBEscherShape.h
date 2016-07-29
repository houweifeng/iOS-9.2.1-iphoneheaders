/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/ESDObject.h>

@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {

	NSData* mChartData;
	BOOL mShowLegend;
	CHDChart* mChart;

}
-(void)dealloc;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(BOOL)showLegend;
-(void)setShowLegend:(BOOL)arg1 ;
@end

