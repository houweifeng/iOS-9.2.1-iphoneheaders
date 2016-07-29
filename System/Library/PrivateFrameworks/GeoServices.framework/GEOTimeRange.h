/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeRange : PBCodable <NSCopying> {

	unsigned _from;
	unsigned _to;
	BOOL _allDay;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasFrom; 
@property (assign,nonatomic) unsigned from;               //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) BOOL hasTo; 
@property (assign,nonatomic) unsigned to;                 //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) BOOL hasAllDay; 
@property (assign,nonatomic) BOOL allDay;                 //@synthesize allDay=_allDay - In the implementation block
-(id)initWithPlaceDataTimeRange:(SCD_Struct_GE51*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)allDay;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)hasAllDay;
-(void)setHasTo:(BOOL)arg1 ;
-(void)setHasAllDay:(BOOL)arg1 ;
-(void)setHasFrom:(BOOL)arg1 ;
-(unsigned)from;
-(unsigned)to;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFrom:(unsigned)arg1 ;
-(void)setTo:(unsigned)arg1 ;
-(BOOL)hasTo;
-(BOOL)hasFrom;
@end
