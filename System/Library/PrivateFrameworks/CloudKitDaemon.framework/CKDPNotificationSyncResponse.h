/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying> {

	NSData* _changeID;
	NSMutableArray* _pushMessages;
	BOOL _moreAvailable;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasChangeID; 
@property (nonatomic,retain) NSData * changeID;                          //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * pushMessages;              //@synthesize pushMessages=_pushMessages - In the implementation block
@property (assign,nonatomic) BOOL hasMoreAvailable; 
@property (assign,nonatomic) BOOL moreAvailable;                         //@synthesize moreAvailable=_moreAvailable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addPushMessage:(id)arg1 ;
-(void)setChangeID:(NSData *)arg1 ;
-(unsigned long long)pushMessagesCount;
-(void)clearPushMessages;
-(id)pushMessageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChangeID;
-(void)setMoreAvailable:(BOOL)arg1 ;
-(void)setHasMoreAvailable:(BOOL)arg1 ;
-(BOOL)hasMoreAvailable;
-(NSData *)changeID;
-(NSMutableArray *)pushMessages;
-(void)setPushMessages:(NSMutableArray *)arg1 ;
-(BOOL)moreAvailable;
-(BOOL)readFrom:(id)arg1 ;
@end

