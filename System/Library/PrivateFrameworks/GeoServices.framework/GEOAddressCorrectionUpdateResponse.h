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

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {

	unsigned _retryScheduleInDays;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasRetryScheduleInDays; 
@property (assign,nonatomic) unsigned retryScheduleInDays;              //@synthesize retryScheduleInDays=_retryScheduleInDays - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRetryScheduleInDays:(BOOL)arg1 ;
-(void)setRetryScheduleInDays:(unsigned)arg1 ;
-(BOOL)hasRetryScheduleInDays;
-(unsigned)retryScheduleInDays;
-(BOOL)readFrom:(id)arg1 ;
@end

