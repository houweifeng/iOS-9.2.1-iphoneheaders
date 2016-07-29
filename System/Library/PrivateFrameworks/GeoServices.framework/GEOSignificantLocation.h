/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	SCD_Struct_GE49 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex;                     //@synthesize locationIndex=_locationIndex - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket;              //@synthesize numberOfVisitsBucket=_numberOfVisitsBucket - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLocation;
-(double)confidence;
-(BOOL)hasIdentifier;
-(BOOL)hasLocationIndex;
-(void)setHasConfidence:(BOOL)arg1 ;
-(unsigned)numberOfVisitsBucket;
-(void)setConfidence:(double)arg1 ;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucket;
-(BOOL)hasConfidence;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucket:(BOOL)arg1 ;
-(void)setLocationIndex:(unsigned)arg1 ;
-(unsigned)locationIndex;
-(BOOL)readFrom:(id)arg1 ;
@end

