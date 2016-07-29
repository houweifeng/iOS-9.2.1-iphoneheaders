/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData;

@interface TRPacketEvent : NSObject <NSSecureCoding> {

	unsigned _packetEventType;
	unsigned _version;
	NSDictionary* _payloadDictionary;

}

@property (nonatomic,readonly) NSData * networkRepresentation; 
@property (assign,nonatomic) unsigned packetEventType;                        //@synthesize packetEventType=_packetEventType - In the implementation block
@property (nonatomic,readonly) NSDictionary * payloadDictionary;              //@synthesize payloadDictionary=_payloadDictionary - In the implementation block
@property (nonatomic,readonly) unsigned version;                              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)_packetClassForPacketEventType:(unsigned)arg1 ;
+(unsigned)_packetEventType;
+(id)packetWithNetworkRepresentation:(id)arg1 ;
+(unsigned long long)networkRepresentationHeaderLength;
+(unsigned long long)payloadSizeWithNetworkRepresentationHeader:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)version;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(void)setPacketEventType:(unsigned)arg1 ;
-(NSData *)networkRepresentation;
-(id)_networkRepresentationForEventType:(unsigned)arg1 version:(unsigned)arg2 payloadDictionary:(id)arg3 ;
-(unsigned)packetEventType;
-(NSDictionary *)payloadDictionary;
@end

