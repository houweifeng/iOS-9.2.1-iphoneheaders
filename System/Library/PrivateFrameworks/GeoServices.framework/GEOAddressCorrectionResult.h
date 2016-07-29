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

@class NSString, NSMutableArray;

@interface GEOAddressCorrectionResult : PBCodable <NSCopying> {

	NSString* _addressID;
	NSMutableArray* _significantLocations;

}

@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID;                               //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,retain) NSMutableArray * significantLocations;              //@synthesize significantLocations=_significantLocations - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(unsigned long long)significantLocationsCount;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(NSString *)addressID;
-(BOOL)hasAddressID;
-(NSMutableArray *)significantLocations;
-(void)clearSignificantLocations;
-(void)addSignificantLocation:(id)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

