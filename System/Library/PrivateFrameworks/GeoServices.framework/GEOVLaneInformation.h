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

@interface GEOVLaneInformation : PBCodable <NSCopying> {

	unsigned _style;
	unsigned _validityMask;

}

@property (assign,nonatomic) unsigned style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned validityMask;              //@synthesize validityMask=_validityMask - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)validityMask;
-(void)setValidityMask:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

