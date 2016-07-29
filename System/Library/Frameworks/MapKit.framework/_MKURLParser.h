/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _GEOMapURLParser, NSString, GEOUserSessionEntity;

@interface _MKURLParser : NSObject {

	_GEOMapURLParser* parser;

}

@property (readonly) unsigned long long mapType; 
@property (readonly) unsigned long long transportType; 
@property (readonly) long long trackingMode; 
@property (readonly) BOOL exactPositionSpecified; 
@property (readonly) SCD_Struct_MK1 centerCoordinate; 
@property (readonly) SCD_Struct_MK1 span; 
@property (readonly) float zoomLevel; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * directionsSourceAddressString; 
@property (readonly) NSString * directionsDestinationAddressString; 
@property (readonly) NSString * searchQuery; 
@property (readonly) SCD_Struct_MK1 searchCoordinate; 
@property (readonly) SCD_Struct_MK2 searchRegion; 
@property (readonly) int searchProviderID; 
@property (readonly) unsigned long long searchUID; 
@property (readonly) NSString * contentProvider; 
@property (readonly) NSString * contentProviderID; 
@property (readonly) NSString * abRecordID; 
@property (readonly) NSString * abAddressID; 
@property (readonly) GEOUserSessionEntity * userSessionEntity; 
@property (readonly) double altitude; 
@property (readonly) double rotation; 
@property (readonly) double tilt; 
@property (readonly) double roll; 
+(BOOL)isValidMapURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)rotation;
-(double)altitude;
-(unsigned long long)transportType;
-(NSString *)contentProviderID;
-(NSString *)contentProvider;
-(SCD_Struct_MK1)span;
-(NSString *)directionsDestinationAddressString;
-(GEOUserSessionEntity *)userSessionEntity;
-(unsigned long long)mapType;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(NSString *)directionsSourceAddressString;
-(NSString *)abAddressID;
-(NSString *)abRecordID;
-(NSString *)addressString;
-(SCD_Struct_MK2)searchRegion;
-(long long)trackingMode;
-(double)tilt;
-(SCD_Struct_MK1)searchCoordinate;
-(NSString *)searchQuery;
-(SCD_Struct_MK1)centerCoordinate;
-(unsigned long long)searchUID;
-(BOOL)exactPositionSpecified;
-(int)searchProviderID;
-(double)roll;
-(float)zoomLevel;
@end
