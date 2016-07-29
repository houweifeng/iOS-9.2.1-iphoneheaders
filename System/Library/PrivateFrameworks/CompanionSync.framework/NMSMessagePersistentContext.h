/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	BOOL _sendAcked;
	BOOL _processAcked;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSDictionary* _userInfo;
	NSDictionary* _customIDSFlags;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * customIDSFlags;                      //@synthesize customIDSFlags=_customIDSFlags - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
@property (assign,nonatomic) BOOL sendAcked;                                     //@synthesize sendAcked=_sendAcked - In the implementation block
@property (assign,nonatomic) BOOL processAcked;                                  //@synthesize processAcked=_processAcked - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)date;
-(NSDictionary *)userInfo;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned short)messageID;
-(void)setCustomIDSFlags:(NSDictionary *)arg1 ;
-(void)setSendAcked:(BOOL)arg1 ;
-(NSDictionary *)customIDSFlags;
-(BOOL)processAcked;
-(void)setProcessAcked:(BOOL)arg1 ;
-(BOOL)sendAcked;
-(NSString *)idsIdentifier;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setFromRequest:(BOOL)arg1 ;
-(BOOL)isFromRequest;
@end

