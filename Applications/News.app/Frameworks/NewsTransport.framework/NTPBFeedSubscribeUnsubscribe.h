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

@class NSString, NSData, NSMutableArray;

@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying> {

	int _displayRank;
	int _feedCellHostType;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	int _feedViewPresentationReason;
	NSString* _searchString;
	int _subscribeUnsubscribeLocation;
	NSMutableArray* _subscribedFeedIds;
	int _userAction;
	SCD_Struct_NT12 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                    //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                      //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                 //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasSubscribeUnsubscribeLocation; 
@property (assign,nonatomic) int subscribeUnsubscribeLocation;                  //@synthesize subscribeUnsubscribeLocation=_subscribeUnsubscribeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasFeedViewPresentationReason; 
@property (assign,nonatomic) int feedViewPresentationReason;                    //@synthesize feedViewPresentationReason=_feedViewPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                               //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                              //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                       //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                   //@synthesize displayRank=_displayRank - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                           //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedFeedIds;                //@synthesize subscribedFeedIds=_subscribedFeedIds - In the implementation block
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(int)feedCellSection;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(int)feedCellHostType;
-(void)setFeedCellHostType:(int)arg1 ;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(BOOL)hasFeedCellHostType;
-(void)setDisplayRank:(int)arg1 ;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(BOOL)hasDisplayRank;
-(int)displayRank;
-(int)feedViewPresentationReason;
-(void)setFeedViewPresentationReason:(int)arg1 ;
-(void)setHasFeedViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedViewPresentationReason;
-(void)addSubscribedFeedIds:(id)arg1 ;
-(int)subscribeUnsubscribeLocation;
-(void)setSubscribeUnsubscribeLocation:(int)arg1 ;
-(void)setHasSubscribeUnsubscribeLocation:(BOOL)arg1 ;
-(BOOL)hasSubscribeUnsubscribeLocation;
-(void)clearSubscribedFeedIds;
-(unsigned long long)subscribedFeedIdsCount;
-(id)subscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)subscribedFeedIds;
-(void)setSubscribedFeedIds:(NSMutableArray *)arg1 ;
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
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(BOOL)readFrom:(id)arg1 ;
@end

