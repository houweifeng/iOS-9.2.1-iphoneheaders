/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation, NSDate, NSString;

@interface GEORouteHypothesisOld : NSObject {

	GEOLocation* _lastLocation;
	NSDate* _suggestedDepartureDate;
	NSDate* _estimatedArrivalDate;
	unsigned long long _currentTrafficDensity;
	unsigned long long _historicTrafficDensity;
	BOOL _hasTrafficIncidentOnRoute;
	int _routeIncidentType;
	int _routeIncidentSignificance;
	NSString* _routeIncidentStreetName;
	unsigned long long _travelState;
	double _travelStateScore;

}

@property (nonatomic,retain) GEOLocation * lastLocation;                               //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedDepartureDate;                        //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (nonatomic,readonly) NSDate * estimatedArrivalDate;                          //@synthesize estimatedArrivalDate=_estimatedArrivalDate - In the implementation block
@property (nonatomic,readonly) unsigned long long currentTrafficDensity;               //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,readonly) unsigned long long historicTrafficDensity;              //@synthesize historicTrafficDensity=_historicTrafficDensity - In the implementation block
@property (nonatomic,readonly) BOOL hasTrafficIncidentOnRoute;                         //@synthesize hasTrafficIncidentOnRoute=_hasTrafficIncidentOnRoute - In the implementation block
@property (nonatomic,readonly) int routeIncidentType;                                  //@synthesize routeIncidentType=_routeIncidentType - In the implementation block
@property (nonatomic,readonly) int routeIncidentSignificance;                          //@synthesize routeIncidentSignificance=_routeIncidentSignificance - In the implementation block
@property (nonatomic,readonly) NSString * routeIncidentStreetName;                     //@synthesize routeIncidentStreetName=_routeIncidentStreetName - In the implementation block
@property (nonatomic,readonly) unsigned long long travelState;                         //@synthesize travelState=_travelState - In the implementation block
@property (nonatomic,readonly) double travelStateScore;                                //@synthesize travelStateScore=_travelStateScore - In the implementation block
-(void)dealloc;
-(id)description;
-(NSDate *)suggestedDepartureDate;
-(void)updateTrafficIncidents:(id)arg1 ;
-(double)travelStateScore;
-(void)updateTravelState:(id)arg1 ;
-(void)updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(unsigned long long)currentTrafficDensity;
-(unsigned long long)travelState;
-(void)updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3 ;
-(NSString *)routeIncidentStreetName;
-(NSDate *)estimatedArrivalDate;
-(int)routeIncidentSignificance;
-(int)routeIncidentType;
-(unsigned long long)historicTrafficDensity;
-(BOOL)hasTrafficIncidentOnRoute;
-(void)setLastLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)lastLocation;
@end

