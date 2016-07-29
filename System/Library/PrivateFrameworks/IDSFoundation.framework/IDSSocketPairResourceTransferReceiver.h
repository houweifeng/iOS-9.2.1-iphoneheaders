/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IDSSocketPairResourceTransferReceiver : NSObject {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	int _fileDescriptor;
	unsigned long long _totalBytesExpected;
	unsigned long long _totalBytesReceived;
	BOOL _done;
	BOOL _isResuming;
	BOOL _resumeResourceTransfers;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;

}

@property (nonatomic,readonly) unsigned long long totalBytesReceived;              //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
+(id)incomingFilePathForMessageUUID:(id)arg1 ;
+(id)incomingFilePath;
-(void)dealloc;
-(BOOL)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2 ;
-(BOOL)writeResourceData:(id)arg1 ;
-(id)initWithMessage:(id)arg1 resumeResourceTransfers:(BOOL)arg2 receiverError:(unsigned char*)arg3 ;
-(void)abortTransfer;
-(BOOL)appendMessage:(id)arg1 receiverError:(unsigned char*)arg2 ;
-(id)finalizedMessageDictionaryIfDone;
-(unsigned long long)totalBytesReceived;
@end

