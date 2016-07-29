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

@interface NTPBArticleLocale : PBCodable <NSCopying> {

	NSString* _intlKey;
	NSMutableArray* _moreFromPublisherArticleIds;
	NSMutableArray* _relatedArticleIds;

}

@property (nonatomic,readonly) BOOL hasIntlKey; 
@property (nonatomic,retain) NSString * intlKey;                                        //@synthesize intlKey=_intlKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedArticleIds;                        //@synthesize relatedArticleIds=_relatedArticleIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreFromPublisherArticleIds;              //@synthesize moreFromPublisherArticleIds=_moreFromPublisherArticleIds - In the implementation block
-(void)setIntlKey:(NSString *)arg1 ;
-(BOOL)hasIntlKey;
-(NSString *)intlKey;
-(void)setRelatedArticleIds:(NSMutableArray *)arg1 ;
-(void)setMoreFromPublisherArticleIds:(NSMutableArray *)arg1 ;
-(void)addRelatedArticleIds:(id)arg1 ;
-(void)addMoreFromPublisherArticleIds:(id)arg1 ;
-(void)clearRelatedArticleIds;
-(unsigned long long)relatedArticleIdsCount;
-(id)relatedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearMoreFromPublisherArticleIds;
-(unsigned long long)moreFromPublisherArticleIdsCount;
-(id)moreFromPublisherArticleIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)relatedArticleIds;
-(NSMutableArray *)moreFromPublisherArticleIds;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

