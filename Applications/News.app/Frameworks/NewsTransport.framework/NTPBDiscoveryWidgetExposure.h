/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBDiscoveryWidgetExposure : PBCodable <NSCopying> {

	int _discoveryWidgetExposureViewType;
	NSString* _feedId;
	int _feedType;
	SCD_Struct_NT10 _has;

}

@property (assign,nonatomic) BOOL hasDiscoveryWidgetExposureViewType; 
@property (assign,nonatomic) int discoveryWidgetExposureViewType;                  //@synthesize discoveryWidgetExposureViewType=_discoveryWidgetExposureViewType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                         //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                    //@synthesize feedId=_feedId - In the implementation block
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(int)discoveryWidgetExposureViewType;
-(void)setDiscoveryWidgetExposureViewType:(int)arg1 ;
-(void)setHasDiscoveryWidgetExposureViewType:(BOOL)arg1 ;
-(BOOL)hasDiscoveryWidgetExposureViewType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(BOOL)readFrom:(id)arg1 ;
@end

