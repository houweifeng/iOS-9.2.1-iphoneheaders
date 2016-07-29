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

@class NSString, NSMutableArray, NSData;

@interface NNMKProtoMessage : PBCodable <NSCopying> {

	NSString* _accountId;
	NSMutableArray* _bccs;
	NSMutableArray* _ccs;
	NSString* _conversationId;
	NSData* _dateReceived;
	NSData* _dateSent;
	NSString* _from;
	NSString* _messageId;
	NSString* _messageIdHeader;
	unsigned _status;
	NSString* _subject;
	NSMutableArray* _tos;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                    //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;                    //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationId; 
@property (nonatomic,retain) NSString * conversationId;               //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,readonly) BOOL hasSubject; 
@property (nonatomic,retain) NSString * subject;                      //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasFrom; 
@property (nonatomic,retain) NSString * from;                         //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) NSMutableArray * tos;                    //@synthesize tos=_tos - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccs;                    //@synthesize ccs=_ccs - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSent; 
@property (nonatomic,retain) NSData * dateSent;                       //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,readonly) BOOL hasDateReceived; 
@property (nonatomic,retain) NSData * dateReceived;                   //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageIdHeader; 
@property (nonatomic,retain) NSString * messageIdHeader;              //@synthesize messageIdHeader=_messageIdHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * bccs;                   //@synthesize bccs=_bccs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(BOOL)hasAccountId;
-(NSString *)accountId;
-(NSData *)dateReceived;
-(NSString *)conversationId;
-(NSData *)dateSent;
-(void)setConversationId:(NSString *)arg1 ;
-(void)setDateReceived:(NSData *)arg1 ;
-(void)setDateSent:(NSData *)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(BOOL)hasConversationId;
-(BOOL)hasMessageId;
-(void)addTo:(id)arg1 ;
-(void)addCc:(id)arg1 ;
-(unsigned long long)tosCount;
-(void)clearTos;
-(id)toAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccsCount;
-(void)clearCcs;
-(id)ccAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSubject;
-(NSMutableArray *)tos;
-(void)setTos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ccs;
-(void)setCcs:(NSMutableArray *)arg1 ;
-(void)addBcc:(id)arg1 ;
-(void)setMessageIdHeader:(NSString *)arg1 ;
-(unsigned long long)bccsCount;
-(void)clearBccs;
-(id)bccAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDateSent;
-(BOOL)hasDateReceived;
-(BOOL)hasMessageIdHeader;
-(NSString *)messageIdHeader;
-(NSMutableArray *)bccs;
-(void)setBccs:(NSMutableArray *)arg1 ;
-(NSString *)from;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFrom:(NSString *)arg1 ;
-(BOOL)hasFrom;
@end

