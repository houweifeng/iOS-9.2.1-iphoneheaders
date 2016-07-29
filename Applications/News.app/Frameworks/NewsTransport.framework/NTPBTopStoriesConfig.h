/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying> {

	long long _cutoffTime;
	long long _maximumArticleCount;
	NSString* _channelId;
	BOOL _pinningEnabled;
	BOOL _promotingEnabled;
	SCD_Struct_NT14 _has;

}

@property (assign,nonatomic) BOOL hasPinningEnabled; 
@property (assign,nonatomic) BOOL pinningEnabled;                        //@synthesize pinningEnabled=_pinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPromotingEnabled; 
@property (assign,nonatomic) BOOL promotingEnabled;                      //@synthesize promotingEnabled=_promotingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                       //@synthesize channelId=_channelId - In the implementation block
@property (assign,nonatomic) BOOL hasMaximumArticleCount; 
@property (assign,nonatomic) long long maximumArticleCount;              //@synthesize maximumArticleCount=_maximumArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasCutoffTime; 
@property (assign,nonatomic) long long cutoffTime;                       //@synthesize cutoffTime=_cutoffTime - In the implementation block
-(void)setPinningEnabled:(BOOL)arg1 ;
-(void)setHasPinningEnabled:(BOOL)arg1 ;
-(BOOL)hasPinningEnabled;
-(void)setPromotingEnabled:(BOOL)arg1 ;
-(void)setHasPromotingEnabled:(BOOL)arg1 ;
-(BOOL)hasPromotingEnabled;
-(BOOL)hasChannelId;
-(void)setMaximumArticleCount:(long long)arg1 ;
-(void)setHasMaximumArticleCount:(BOOL)arg1 ;
-(BOOL)hasMaximumArticleCount;
-(void)setCutoffTime:(long long)arg1 ;
-(void)setHasCutoffTime:(BOOL)arg1 ;
-(BOOL)hasCutoffTime;
-(BOOL)pinningEnabled;
-(BOOL)promotingEnabled;
-(long long)maximumArticleCount;
-(long long)cutoffTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
