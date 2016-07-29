/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMIDSMessageTransport <NSObject>
@required
+(void)messageElementsFromDictionary:(id)arg1 messageName:(id*)arg2 messageIdentifier:(id*)arg3 messagePayload:(id*)arg4 target:(id*)arg5 transactionID:(id*)arg6 isRequest:(BOOL*)arg7 isResponse:(BOOL*)arg8 isNotification:(BOOL*)arg9;
+(id)dictionaryForMessageName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 transactionID:(id)arg5 msgType:(unsigned long long)arg6;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 responseTimeout:(double)arg6 responseHandler:(/*^block*/id)arg7;

@end

