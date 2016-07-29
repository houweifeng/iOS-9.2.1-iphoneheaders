/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOInstructionSet;

@interface GEOTransitClusterInfo : PBCodable <NSCopying> {

	SCD_Struct_GE52* _routeDetailsPrimaryArtworkIndexs;
	SCD_Struct_GE52* _steppingArtworkIndexs;
	GEOInstructionSet* _instructions;
	unsigned _routeDetailsSecondaryArtworkIndex;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions;                                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) unsigned long long routeDetailsPrimaryArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsPrimaryArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long steppingArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* steppingArtworkIndexs; 
@property (assign,nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex; 
@property (assign,nonatomic) unsigned routeDetailsSecondaryArtworkIndex;                              //@synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearRouteDetailsPrimaryArtworkIndexs;
-(void)setRouteDetailsPrimaryArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addRouteDetailsPrimaryArtworkIndex:(unsigned)arg1 ;
-(void)addSteppingArtworkIndex:(unsigned)arg1 ;
-(unsigned*)steppingArtworkIndexs;
-(void)setSteppingArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)routeDetailsPrimaryArtworkIndexs;
-(unsigned)steppingArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRouteDetailsSecondaryArtworkIndex;
-(unsigned)routeDetailsSecondaryArtworkIndex;
-(unsigned)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)clearSteppingArtworkIndexs;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(unsigned long long)routeDetailsPrimaryArtworkIndexsCount;
-(BOOL)hasInstructions;
-(void)setHasRouteDetailsSecondaryArtworkIndex:(BOOL)arg1 ;
-(unsigned long long)steppingArtworkIndexsCount;
-(GEOInstructionSet *)instructions;
-(void)setRouteDetailsSecondaryArtworkIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
