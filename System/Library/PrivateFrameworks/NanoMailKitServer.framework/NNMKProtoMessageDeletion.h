/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoMessageDeletion : PBCodable <NSCopying> {

	unsigned _deletionState;
	NSString* _messageId;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasDeletionState; 
@property (assign,nonatomic) unsigned deletionState;              //@synthesize deletionState=_deletionState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(BOOL)hasMessageId;
-(void)setDeletionState:(unsigned)arg1 ;
-(void)setHasDeletionState:(BOOL)arg1 ;
-(BOOL)hasDeletionState;
-(unsigned)deletionState;
-(BOOL)readFrom:(id)arg1 ;
@end

