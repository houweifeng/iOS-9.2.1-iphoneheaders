/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol GEOTransitDepartureSequence <NSObject>
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) BOOL isLowFrequency; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@required
-(NSString *)direction;
-(id<GEOTransitLine>)line;
-(NSArray *)operatingHours;
-(NSString *)headsign;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
-(id)firstDepartureAfterDate:(id)arg1;
-(BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)departuresValidForDate:(id)arg1;
-(double)frequencyForSortingAtDate:(id)arg1;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
-(BOOL)hasFrequencyAtDate:(id)arg1;
-(id)firstDepartureValidForDate:(id)arg1;
-(id)firstDepartureOnOrAfterDate:(id)arg1;
-(id)frequencyToDescribeAtDate:(id)arg1;
-(BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
-(BOOL)isLowFrequency;

@end
