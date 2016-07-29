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

@class NSString, NSMutableArray;

@interface NTPBAppSessionStart : PBCodable <NSCopying> {

	long long _lastAppSessionTimestamp;
	int _channelSubscriptionCount;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _topicSubscriptionCount;
	NSMutableArray* _visibleViews;
	SCD_Struct_NT8 _has;

}

@property (assign,nonatomic) BOOL hasLastAppSessionTimestamp; 
@property (assign,nonatomic) long long lastAppSessionTimestamp;                  //@synthesize lastAppSessionTimestamp=_lastAppSessionTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleViews;                      //@synthesize visibleViews=_visibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                       //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                         //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;              //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                            //@synthesize referringUrl=_referringUrl - In the implementation block
-(void)addVisibleViews:(id)arg1 ;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(void)setLastAppSessionTimestamp:(long long)arg1 ;
-(void)setHasLastAppSessionTimestamp:(BOOL)arg1 ;
-(BOOL)hasLastAppSessionTimestamp;
-(void)clearVisibleViews;
-(unsigned long long)visibleViewsCount;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasChannelSubscriptionCount;
-(void)setTopicSubscriptionCount:(int)arg1 ;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasTopicSubscriptionCount;
-(BOOL)hasReferringSourceApplication;
-(BOOL)hasReferringUrl;
-(long long)lastAppSessionTimestamp;
-(NSMutableArray *)visibleViews;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
-(int)channelSubscriptionCount;
-(int)topicSubscriptionCount;
-(NSString *)referringSourceApplication;
-(NSString *)referringUrl;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
