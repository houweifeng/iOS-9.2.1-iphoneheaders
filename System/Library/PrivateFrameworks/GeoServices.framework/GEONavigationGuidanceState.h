/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _guidanceLevel;
	int _navigationState;
	int _trackedTransportType;
	BOOL _shouldSuppressCellularDataAlerts;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasTrackedTransportType; 
@property (assign,nonatomic) int trackedTransportType;                              //@synthesize trackedTransportType=_trackedTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationState; 
@property (assign,nonatomic) int navigationState;                                   //@synthesize navigationState=_navigationState - In the implementation block
@property (assign,nonatomic) BOOL hasGuidanceLevel; 
@property (assign,nonatomic) int guidanceLevel;                                     //@synthesize guidanceLevel=_guidanceLevel - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) BOOL shouldSuppressCellularDataAlerts;                 //@synthesize shouldSuppressCellularDataAlerts=_shouldSuppressCellularDataAlerts - In the implementation block
+(BOOL)_currentLocationInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2 ;
+(int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3 ;
+(int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3 ignoreTimeCriterion:(BOOL)arg4 ;
+(BOOL)_currentLocationInsideTurnByTurnRegionForRoute:(id)arg1 location:(id)arg2 ;
+(BOOL)_currentTimeInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2 ;
-(id)initWithGuidanceLevel:(int)arg1 ;
-(id)initWithTransportType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)guidanceLevel;
-(BOOL)shouldSuppressCellularDataAlerts;
-(int)navigationState;
-(void)setNavigationState:(int)arg1 ;
-(void)setGuidanceLevel:(int)arg1 ;
-(BOOL)hasNavigationState;
-(void)setHasGuidanceLevel:(BOOL)arg1 ;
-(void)setTrackedTransportType:(int)arg1 ;
-(BOOL)hasTrackedTransportType;
-(void)setHasShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(BOOL)hasGuidanceLevel;
-(void)setHasTrackedTransportType:(BOOL)arg1 ;
-(void)setHasNavigationState:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressCellularDataAlerts;
-(int)trackedTransportType;
-(void)setShouldSuppressCellularDataAlerts:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

