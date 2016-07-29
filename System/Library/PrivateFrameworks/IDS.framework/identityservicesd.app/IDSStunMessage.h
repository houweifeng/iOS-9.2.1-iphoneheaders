/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData;

@interface IDSStunMessage : NSObject {

	long long _type;
	unsigned short _len;
	NSData* _transactionID;
	IDSStunAttribute _attributes[20];
	int _numAttribute;

}

@property (nonatomic,readonly) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
-(BOOL)bindingRequestToBuffer:(char*)arg1 outputLength:(int*)arg2 transactionID:(char*)arg3 nominateCount:(int)arg4 userName:(char*)arg5 usernameLen:(int)arg6 sendTime:(unsigned short)arg7 ;
-(BOOL)getAttribute:(unsigned short)arg1 attribute:(IDSStunAttribute*)arg2 ;
-(BOOL)read:(char*)arg1 inputLength:(int)arg2 internal:(BOOL)arg3 ;
-(BOOL)quickRelayStunMessageToBuffer:(char*)arg1 outputLength:(int*)arg2 stunMessageDictionary:(id)arg3 ;
-(BOOL)bindingResponseToBuffer:(char*)arg1 outputLength:(int*)arg2 transactionID:(id)arg3 nominateCount:(int)arg4 echoTime:(unsigned short)arg5 delay:(unsigned short)arg6 ;
-(BOOL)read:(char*)arg1 inputLength:(int)arg2 ;
-(BOOL)allocationRequestWithDictionaryToBuffer:(id)arg1 outputBuffer:(char*)arg2 outputLength:(int*)arg3 lifeTime:(int)arg4 ;
-(BOOL)channelBindRequestWithDictionaryToBuffer:(id)arg1 outputBuffer:(char*)arg2 outputLength:(int*)arg3 channelNumber:(unsigned short)arg4 ;
-(BOOL)refreshRequestToBuffer:(char*)arg1 outputLength:(int*)arg2 lifeTime:(int)arg3 ;
-(BOOL)isMatchingResponse:(id)arg1 ;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 ;
-(void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2 ;
-(void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2 ;
-(void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2 ;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 internal:(BOOL)arg3 ;
-(void)dealloc;
-(long long)type;
-(id)initWithType:(unsigned short)arg1 ;
-(BOOL)hasAttribute:(unsigned short)arg1 ;
-(void)setTransactionID:(NSData *)arg1 ;
-(NSData *)transactionID;
-(BOOL)addAttribute:(IDSStunAttribute*)arg1 ;
@end

