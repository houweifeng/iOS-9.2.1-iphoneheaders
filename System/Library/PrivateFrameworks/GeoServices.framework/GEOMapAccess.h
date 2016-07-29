/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOMapAccess : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	id<GEOMapAccessRestrictions> _restrictions;
	/*^block*/id _tileErrorHandler;
	unsigned _zoomLevel;

}

@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
@property (assign,nonatomic) id<GEOMapAccessRestrictions> restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy) id tileErrorHandler;                                      //@synthesize tileErrorHandler=_tileErrorHandler - In the implementation block
@property (assign,nonatomic) unsigned zoomLevel;                                     //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) unsigned minZoomLevel; 
@property (nonatomic,readonly) unsigned maxZoomLevel; 
@property (nonatomic,readonly) unsigned maxTransitZoomLevel; 
+(BOOL)supportsTransitMap;
+(BOOL)supportsRealisticMap;
+(id)transitMap;
+(id)realisticMap;
-(void)dealloc;
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(id)callbackQueue;
-(void)setCallbackQueue:(id)arg1 ;
-(void)setZoomLevel:(unsigned)arg1 ;
-(unsigned)minZoomLevel;
-(unsigned)maxZoomLevel;
-(id)_findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)buildMapEdgeFrom:(const SCD_Struct_GE191*)arg1 edgeHandler:(/*^block*/id)arg2 ;
-(id)buildMapEdgeTransitFrom:(const TransitEdgePiece*)arg1 edgeHandler:(/*^block*/id)arg2 ;
-(id)findRoadTilesWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 tileHander:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_transitPointForTransitMapNode:(shared_ptr<geo::MapNodeTransit>*)arg1 ;
-(unsigned)maxTransitZoomLevel;
-(id)findClosestNamedFeaturesAtCoordinate:(SCD_Struct_GE16)arg1 roadHandler:(/*^block*/id)arg2 pointHandler:(/*^block*/id)arg3 polygonHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)tileErrorHandler;
-(id)_findTransitPointsWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findClosestRoadAtCoordinate:(SCD_Struct_GE16)arg1 roadHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findTransitPointsWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitNodesWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 nodeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(id)findTransitStationsWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 stationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findRoadsWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setTileErrorHandler:(id)arg1 ;
-(id<GEOMapAccessRestrictions>)restrictions;
-(id)findTransitStationWithID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 stationHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitLinksWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 linkHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitEdgesWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitNodeWithID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 nodeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallWithID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 hallHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStopWithID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 stopHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointWithParentID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 type:(unsigned long long)arg3 pointHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findRoadEdgesWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 edgeHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitStopsWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 stopHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitHallsWithin:(double)arg1 of:(SCD_Struct_GE16)arg2 hallHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)findTransitPointWithID:(unsigned long long)arg1 near:(SCD_Struct_GE16)arg2 pointHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned)zoomLevel;
@end

