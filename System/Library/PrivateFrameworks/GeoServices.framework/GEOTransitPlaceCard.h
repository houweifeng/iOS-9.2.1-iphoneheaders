/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOTransitDepartureSequenceUsage;

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {

	NSString* _incidentType;
	int _transitCategory;
	GEOTransitDepartureSequenceUsage* _transitDepartureSequenceUsage;
	NSString* _transitSystemName;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasTransitCategory; 
@property (assign,nonatomic) int transitCategory;                                                           //@synthesize transitCategory=_transitCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName;                                                  //@synthesize transitSystemName=_transitSystemName - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitDepartureSequenceUsage; 
@property (nonatomic,retain) GEOTransitDepartureSequenceUsage * transitDepartureSequenceUsage;              //@synthesize transitDepartureSequenceUsage=_transitDepartureSequenceUsage - In the implementation block
@property (nonatomic,readonly) BOOL hasIncidentType; 
@property (nonatomic,retain) NSString * incidentType;                                                       //@synthesize incidentType=_incidentType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)incidentType;
-(BOOL)hasTransitSystemName;
-(int)transitCategory;
-(NSString *)transitSystemName;
-(void)setTransitDepartureSequenceUsage:(GEOTransitDepartureSequenceUsage *)arg1 ;
-(BOOL)hasTransitDepartureSequenceUsage;
-(void)setTransitCategory:(int)arg1 ;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(void)setHasTransitCategory:(BOOL)arg1 ;
-(BOOL)hasIncidentType;
-(void)setIncidentType:(NSString *)arg1 ;
-(BOOL)hasTransitCategory;
-(GEOTransitDepartureSequenceUsage *)transitDepartureSequenceUsage;
-(BOOL)readFrom:(id)arg1 ;
@end

