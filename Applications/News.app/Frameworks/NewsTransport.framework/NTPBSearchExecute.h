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

@class NSMutableArray, NSString;

@interface NTPBSearchExecute : PBCodable <NSCopying> {

	NSMutableArray* _channelResultFeedIds;
	int _searchExecutionMethod;
	int _searchLocation;
	NSString* _searchString;
	NSString* _storeFrontId;
	NSString* _topResultFeedId;
	NSMutableArray* _topicResultFeedIds;
	int _totalResults;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                            //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL hasSearchLocation; 
@property (assign,nonatomic) int searchLocation;                                 //@synthesize searchLocation=_searchLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSearchExecutionMethod; 
@property (assign,nonatomic) int searchExecutionMethod;                          //@synthesize searchExecutionMethod=_searchExecutionMethod - In the implementation block
@property (assign,nonatomic) BOOL hasTotalResults; 
@property (assign,nonatomic) int totalResults;                                   //@synthesize totalResults=_totalResults - In the implementation block
@property (nonatomic,readonly) BOOL hasTopResultFeedId; 
@property (nonatomic,retain) NSString * topResultFeedId;                         //@synthesize topResultFeedId=_topResultFeedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicResultFeedIds;                //@synthesize topicResultFeedIds=_topicResultFeedIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelResultFeedIds;              //@synthesize channelResultFeedIds=_channelResultFeedIds - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontId; 
@property (nonatomic,retain) NSString * storeFrontId;                            //@synthesize storeFrontId=_storeFrontId - In the implementation block
-(void)addTopicResultFeedIds:(id)arg1 ;
-(void)addChannelResultFeedIds:(id)arg1 ;
-(void)setTopResultFeedId:(NSString *)arg1 ;
-(void)setStoreFrontId:(NSString *)arg1 ;
-(void)setHasSearchLocation:(BOOL)arg1 ;
-(int)searchExecutionMethod;
-(void)setSearchExecutionMethod:(int)arg1 ;
-(void)setHasSearchExecutionMethod:(BOOL)arg1 ;
-(BOOL)hasSearchExecutionMethod;
-(void)setTotalResults:(int)arg1 ;
-(void)setHasTotalResults:(BOOL)arg1 ;
-(BOOL)hasTotalResults;
-(BOOL)hasTopResultFeedId;
-(void)clearTopicResultFeedIds;
-(unsigned long long)topicResultFeedIdsCount;
-(id)topicResultFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearChannelResultFeedIds;
-(unsigned long long)channelResultFeedIdsCount;
-(id)channelResultFeedIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStoreFrontId;
-(int)totalResults;
-(NSString *)topResultFeedId;
-(NSMutableArray *)topicResultFeedIds;
-(void)setTopicResultFeedIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)channelResultFeedIds;
-(void)setChannelResultFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSearchString;
-(void)setSearchLocation:(int)arg1 ;
-(BOOL)hasSearchLocation;
-(int)searchLocation;
-(NSString *)storeFrontId;
-(BOOL)readFrom:(id)arg1 ;
@end
