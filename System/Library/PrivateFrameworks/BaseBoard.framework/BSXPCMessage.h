/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface BSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _message;
	/*^block*/id _replyHandler;
	NSObject*<OS_dispatch_queue> _replyQueue;
	int _invalidated;
	int _replied;

}
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 replyHandler:(/*^block*/id)arg4 replyQueue:(id)arg5 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(const char*)messageTypeKey;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 ;
+(id)messageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)initWithMessagePacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
-(id)initWithMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(void)dealloc;
-(void)forcefullyInvokeReplyHandler:(id)arg1 ;
-(void)sendToConnection:(id)arg1 ;
@end

