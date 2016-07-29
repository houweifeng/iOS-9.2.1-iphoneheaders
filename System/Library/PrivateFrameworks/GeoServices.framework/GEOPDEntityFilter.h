/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDEntityFilter : PBCodable <NSCopying> {

	BOOL _includeSpokenNames;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasIncludeSpokenNames; 
@property (assign,nonatomic) BOOL includeSpokenNames;                 //@synthesize includeSpokenNames=_includeSpokenNames - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIncludeSpokenNames:(BOOL)arg1 ;
-(void)setHasIncludeSpokenNames:(BOOL)arg1 ;
-(BOOL)includeSpokenNames;
-(BOOL)hasIncludeSpokenNames;
-(BOOL)readFrom:(id)arg1 ;
@end
