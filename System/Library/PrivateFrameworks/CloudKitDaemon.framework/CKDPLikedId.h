/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier, NSData, CKDPShareIdentifier;

@interface CKDPLikedId : PBCodable <NSCopying> {

	CKDPIdentifier* _commentIdentifier;
	NSData* _itemId;
	CKDPShareIdentifier* _shareIdentifier;

}

@property (nonatomic,readonly) BOOL hasShareIdentifier; 
@property (nonatomic,retain) CKDPShareIdentifier * shareIdentifier;              //@synthesize shareIdentifier=_shareIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCommentIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * commentIdentifier;                 //@synthesize commentIdentifier=_commentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasItemId; 
@property (nonatomic,retain) NSData * itemId;                                    //@synthesize itemId=_itemId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)itemId;
-(void)setItemId:(NSData *)arg1 ;
-(void)setShareIdentifier:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareIdentifier;
-(CKDPShareIdentifier *)shareIdentifier;
-(void)setCommentIdentifier:(CKDPIdentifier *)arg1 ;
-(BOOL)hasCommentIdentifier;
-(BOOL)hasItemId;
-(CKDPIdentifier *)commentIdentifier;
-(BOOL)readFrom:(id)arg1 ;
@end

