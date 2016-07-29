/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairDataMessage.h>

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
+(id)resumeMessageWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4 ;
+(id)cancelMessageWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4 ;
-(unsigned char)type;
-(unsigned long long)byteOffset;
-(unsigned char)cancelReason;
-(unsigned char)command;
@end

