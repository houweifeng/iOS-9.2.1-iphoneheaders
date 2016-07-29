/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage {

	unsigned long long _offset;
	unsigned char _versionNumber;
	BOOL _encrypted;
	BOOL _fileXfer;
	unsigned short _streamID;
	unsigned short _priority;
	unsigned _sequenceNumber;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned char versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
@property (nonatomic,readonly) BOOL encrypted;                           //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                    //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) unsigned short priority;                  //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL fileXfer;                            //@synthesize fileXfer=_fileXfer - In the implementation block
@property (nonatomic,retain,readonly) NSData * data; 
-(unsigned char)versionNumber;
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(unsigned short)priority;
-(unsigned)sequenceNumber;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersion:(unsigned char)arg1 encrypted:(BOOL)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned)arg5 fileXfer:(BOOL)arg6 data:(id)arg7 ;
-(BOOL)fileXfer;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned char)command;
-(BOOL)encrypted;
@end

