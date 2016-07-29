/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOCompanionWalkStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	SCD_Struct_GE68* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	int _junctionType;
	NSMutableArray* _maneuverNames;
	int _maneuverType;
	NSMutableArray* _signposts;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE68* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) int maneuverType;                                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                          //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;                              //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) int junctionType;                                        //@synthesize junctionType=_junctionType - In the implementation block
-(int)transportType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SCD_Struct_GE68)junctionElementAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)signposts;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)maneuverNames;
-(unsigned long long)junctionElementsCount;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(void)addJunctionElement:(SCD_Struct_GE68)arg1 ;
-(void)setJunctionElements:(SCD_Struct_GE68*)arg1 count:(unsigned long long)arg2 ;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(void)addManeuverName:(id)arg1 ;
-(void)clearManeuverNames;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(int)junctionType;
-(BOOL)hasManeuverType;
-(void)addSignpost:(id)arg1 ;
-(void)setJunctionType:(int)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(void)clearJunctionElements;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)maneuverNamesCount;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(BOOL)hasJunctionType;
-(SCD_Struct_GE68*)junctionElements;
-(BOOL)readFrom:(id)arg1 ;
@end

