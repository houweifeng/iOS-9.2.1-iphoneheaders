/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@class OITSUColor;

@interface CMBordersProperty : CMProperty {

	OITSUColor* mBorderColor;
	OITSUColor* mBorderTopColor;
	OITSUColor* mBorderLeftColor;
	OITSUColor* mBorderBottomColor;
	OITSUColor* mBorderRightColor;
	int mBorderStyle[5];
	int mBorderWidth[5];
	int mCustomWidth;

}
+(BOOL)isStroked:(id)arg1 ;
-(id)init;
-(id)styleString;
-(id)cssStringForName:(id)arg1 ;
-(id)initWithOADStroke:(id)arg1 ;
-(void)adjustValues;
-(id)cssString;
-(id)widthString;
-(id)colorString;
-(id)stringFromStyleEnum:(int)arg1 ;
-(id)stringFromWidthEnum:(int)arg1 ;
-(id)stringFromColor:(id)arg1 ;
-(BOOL)isNoneAtLocation:(int)arg1 ;
-(void)setNoneAtLocation:(int)arg1 ;
-(void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3 ;
@end

