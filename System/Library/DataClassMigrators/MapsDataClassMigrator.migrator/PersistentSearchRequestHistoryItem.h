/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/HistoryPersistentItem.h>
#import <MapsDataClassMigrator/HistoryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface PersistentSearchRequestHistoryItem : PBCodable <HistoryPersistentItem, HistoryItem, NSCopying> {

	double _latitude;
	double _latitudeSpan;
	double _longitude;
	double _longitudeSpan;
	double _position;
	double _timestamp;
	NSString* _displayLocation;
	NSString* _displayQuery;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	NSString* _syncIdentifier;
	SCD_Struct_Pe7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayQuery; 
@property (nonatomic,retain) NSString * displayQuery;                        //@synthesize displayQuery=_displayQuery - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayLocation; 
@property (nonatomic,retain) NSString * displayLocation;                     //@synthesize displayLocation=_displayLocation - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeSpan; 
@property (assign,nonatomic) double latitudeSpan;                            //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeSpan; 
@property (assign,nonatomic) double longitudeSpan;                           //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                      //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithPersistedHistoryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(long long)type;
-(void)setHasLatitudeSpan:(BOOL)arg1 ;
-(BOOL)hasSyncIdentifier;
-(BOOL)hasLongitudeSpan;
-(void)setDisplayQuery:(NSString *)arg1 ;
-(void)setHasLongitudeSpan:(BOOL)arg1 ;
-(void)setLongitudeSpan:(double)arg1 ;
-(void)setDisplayLocation:(NSString *)arg1 ;
-(BOOL)hasDisplayLocation;
-(void)setLatitudeSpan:(double)arg1 ;
-(NSString *)displayQuery;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(NSString *)syncIdentifier;
-(BOOL)hasDisplayQuery;
-(double)latitudeSpan;
-(double)longitudeSpan;
-(BOOL)hasLatitudeSpan;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)timestamp;
-(GEOPlaceSearchRequest *)request;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(GEOPlaceSearchResponse *)response;
-(id)dictionaryRepresentation;
-(NSString *)displayLocation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasPosition;
-(void)setLatitude:(double)arg1 ;
-(BOOL)hasLongitude;
-(BOOL)hasLatitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(BOOL)hasRequest;
-(void)setRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasResponse;
-(void)setResponse:(GEOPlaceSearchResponse *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

