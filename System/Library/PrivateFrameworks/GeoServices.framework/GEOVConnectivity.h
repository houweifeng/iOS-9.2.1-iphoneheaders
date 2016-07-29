/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVConnectivity : PBCodable <NSCopying> {

	NSMutableArray* _junctions;

}

@property (nonatomic,retain) NSMutableArray * junctions;              //@synthesize junctions=_junctions - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)junctions;
-(unsigned long long)junctionsCount;
-(id)junctionAtIndex:(unsigned long long)arg1 ;
-(void)setJunctions:(NSMutableArray *)arg1 ;
-(void)clearJunctions;
-(void)addJunction:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

