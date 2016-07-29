/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPlace, NSString, GEOMapRegion;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {

	GEOPlace* _place;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) double areaInMeters; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
-(void)dealloc;
-(NSString *)name;
-(GEOMapRegion *)mapRegion;
-(id)initWithPlace:(id)arg1 ;
-(int)placeType;
-(double)areaInMeters;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(SCD_Struct_GE16)coordinate;
@end

