/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, NSMapTable, NSMutableDictionary, NSNumberFormatter;

@interface _MKScaleUnitsView : UIView {

	BOOL _useLightText;
	double _segmentLengthInPixels;
	double _unitsWidth;
	double _justUnitsWidth;
	NSDictionary* _legendAttributes;
	NSMutableArray* _strings;
	NSString* _legendBaseString;
	NSString* _unitsString;
	NSString* _unpaddedUnitsString;
	NSMapTable* _legendStringWidthCache;
	NSMutableDictionary* _legendStringForDistanceStringCache;
	NSNumberFormatter* _floatNumberFormatter;

}

@property (assign,nonatomic) BOOL useLightText; 
@property (assign,nonatomic) double segmentLengthInPixels; 
@property (nonatomic,readonly) double unitsWidth;                                   //@synthesize unitsWidth=_unitsWidth - In the implementation block
@property (nonatomic,retain) NSString * legendBaseString;                           //@synthesize legendBaseString=_legendBaseString - In the implementation block
@property (nonatomic,retain) NSString * unitsString;                                //@synthesize unitsString=_unitsString - In the implementation block
@property (nonatomic,copy) NSString * unpaddedUnitsString;                          //@synthesize unpaddedUnitsString=_unpaddedUnitsString - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * floatNumberFormatter;              //@synthesize floatNumberFormatter=_floatNumberFormatter - In the implementation block
-(id)init;
-(void)setUnits:(id)arg1 ;
-(void)setSegmentLengthInPixels:(double)arg1 ;
-(BOOL)useLightText;
-(void)setUseLightText:(BOOL)arg1 ;
-(void)setFloatNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)setUnpaddedUnitsString:(NSString *)arg1 ;
-(BOOL)canDisplaySegment:(unsigned long long)arg1 ;
-(NSNumberFormatter *)floatNumberFormatter;
-(void)setLegendBaseString:(NSString *)arg1 ;
-(NSString *)unitsString;
-(double)unitsWidth;
-(void)clearCaches:(id)arg1 ;
-(id)_legendStringForDistanceString:(id)arg1 appendUnits:(BOOL)arg2 index:(int)arg3 ;
-(id)_uncachedLegendStringsForDistanceString:(id)arg1 ;
-(NSString *)legendBaseString;
-(NSString *)unpaddedUnitsString;
-(void)_calculateLegend:(BOOL)arg1 ;
-(double)_widthForString:(id)arg1 attributes:(id)arg2 ;
-(void)setUnitsString:(NSString *)arg1 ;
@end

