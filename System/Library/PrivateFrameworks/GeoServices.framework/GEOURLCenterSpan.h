/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOURLCenterSpan : PBCodable <NSCopying> {

	double _latitude;
	double _latitudeDelta;
	double _longitude;
	double _longitudeDelta;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                     //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                    //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeDelta; 
@property (assign,nonatomic) double latitudeDelta;                //@synthesize latitudeDelta=_latitudeDelta - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeDelta; 
@property (assign,nonatomic) double longitudeDelta;               //@synthesize longitudeDelta=_longitudeDelta - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(BOOL)hasLongitude;
-(BOOL)hasLatitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLatitudeDelta:(BOOL)arg1 ;
-(double)longitudeDelta;
-(void)setLatitudeDelta:(double)arg1 ;
-(void)setLongitudeDelta:(double)arg1 ;
-(BOOL)hasLatitudeDelta;
-(BOOL)hasLongitudeDelta;
-(double)latitudeDelta;
-(void)setHasLongitudeDelta:(BOOL)arg1 ;
-(double)latitude;
-(double)longitude;
-(BOOL)readFrom:(id)arg1 ;
@end
