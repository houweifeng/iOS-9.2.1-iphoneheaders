/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, GEOMapRegion, NSDictionary;

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {

	BOOL _shiftLocationsIfNeeded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
@property (nonatomic,readonly) NSString * searchQuery; 
-(NSString *)searchQuery;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
@end

