/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRegion.h>

@class NSString, GEOMapRegion;

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) GEOMapRegion * geoMapRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mutableObjectProtocol;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(Class)immutableObjectClass;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)transferToImmutableWithError:(out id*)arg1 ;
-(GEOMapRegion *)geoMapRegion;
-(void)setGeoMapRegion:(GEOMapRegion *)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
@end
