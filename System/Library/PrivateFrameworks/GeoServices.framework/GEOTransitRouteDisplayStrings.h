/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying> {

	NSString* _detailTimeFormatted;
	GEOFormattedString* _duration;
	GEOFormattedString* _durationList;
	GEOFormattedString* _planningDescription;
	GEOFormattedString* _serviceGap;

}

@property (nonatomic,readonly) BOOL hasDetailTimeFormatted; 
@property (nonatomic,retain) NSString * detailTimeFormatted;                        //@synthesize detailTimeFormatted=_detailTimeFormatted - In the implementation block
@property (nonatomic,readonly) BOOL hasPlanningDescription; 
@property (nonatomic,retain) GEOFormattedString * planningDescription;              //@synthesize planningDescription=_planningDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasDurationList; 
@property (nonatomic,retain) GEOFormattedString * durationList;                     //@synthesize durationList=_durationList - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceGap; 
@property (nonatomic,retain) GEOFormattedString * serviceGap;                       //@synthesize serviceGap=_serviceGap - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOFormattedString *)duration;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServiceGap:(GEOFormattedString *)arg1 ;
-(BOOL)hasServiceGap;
-(GEOFormattedString *)durationList;
-(GEOFormattedString *)planningDescription;
-(void)setDurationList:(GEOFormattedString *)arg1 ;
-(BOOL)hasDurationList;
-(void)setPlanningDescription:(GEOFormattedString *)arg1 ;
-(void)setDetailTimeFormatted:(NSString *)arg1 ;
-(BOOL)hasPlanningDescription;
-(NSString *)detailTimeFormatted;
-(GEOFormattedString *)serviceGap;
-(BOOL)hasDetailTimeFormatted;
-(BOOL)hasDuration;
-(BOOL)readFrom:(id)arg1 ;
@end

