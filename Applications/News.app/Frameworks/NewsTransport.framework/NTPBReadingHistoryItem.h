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

@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying> {

	NSString* _articleID;
	unsigned _flags;
	NTPBDate* _lastVisitedDate;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                    //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastVisitedDate; 
@property (nonatomic,retain) NTPBDate * lastVisitedDate;              //@synthesize lastVisitedDate=_lastVisitedDate - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                          //@synthesize flags=_flags - In the implementation block
-(void)setArticleID:(NSString *)arg1 ;
-(BOOL)hasArticleID;
-(NSString *)articleID;
-(void)setLastVisitedDate:(NTPBDate *)arg1 ;
-(BOOL)hasLastVisitedDate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(NTPBDate *)lastVisitedDate;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(BOOL)readFrom:(id)arg1 ;
@end

