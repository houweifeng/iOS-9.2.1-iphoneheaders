/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_io;
@class NSMutableDictionary, NSObject, NSData;

@interface NEPolicySession : NSObject <NEPrettyDescription> {

	unsigned _lastSendMessageID;
	int _controlSocket;
	long long _internalPriority;
	NSMutableDictionary* _policies;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_semaphore> _responseSemaphore;
	NSData* _lastReceivedResponse;
	NSObject*<OS_dispatch_io> _controlIO;

}

@property (assign) long long priority; 
@property (assign) long long internalPriority;                                      //@synthesize internalPriority=_internalPriority - In the implementation block
@property (retain) NSMutableDictionary * policies;                                  //@synthesize policies=_policies - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> ioQueue;                            //@synthesize ioQueue=_ioQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> responseSemaphore;              //@synthesize responseSemaphore=_responseSemaphore - In the implementation block
@property (retain) NSData * lastReceivedResponse;                                   //@synthesize lastReceivedResponse=_lastReceivedResponse - In the implementation block
@property (assign) unsigned lastSendMessageID;                                      //@synthesize lastSendMessageID=_lastSendMessageID - In the implementation block
@property (retain) NSObject*<OS_dispatch_io> controlIO;                             //@synthesize controlIO=_controlIO - In the implementation block
@property (assign) int controlSocket;                                               //@synthesize controlSocket=_controlSocket - In the implementation block
+(void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void*)arg4 ;
+(id)copyTLVForBytes:(const char*)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(BOOL)arg4 n:(int)arg5 ;
+(unsigned)messageIDForMessage:(id)arg1 ;
+(id)errorFromMessage:(id)arg1 ;
+(unsigned)policyIDFromMessage:(id)arg1 ;
-(unsigned long long)addPolicy:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)apply;
-(void)setPolicies:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)policies;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initWithSocket:(int)arg1 ;
-(int)dupSocket;
-(BOOL)lockSessionToCurrentProcess;
-(BOOL)registerServiceUUID:(id)arg1 ;
-(BOOL)unregisterServiceUUID:(id)arg1 ;
-(BOOL)removePolicyWithID:(unsigned long long)arg1 ;
-(BOOL)removeAllPolicies;
-(id)openControlIO;
-(NSObject*<OS_dispatch_io>)controlIO;
-(int)controlSocket;
-(id)priorityString;
-(long long)internalPriority;
-(unsigned)lastSendMessageID;
-(void)setLastSendMessageID:(unsigned)arg1 ;
-(void)setControlSocket:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)ioQueue;
-(void)setLastReceivedResponse:(NSData *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)responseSemaphore;
-(NSData *)lastReceivedResponse;
-(void)setResponseSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)createTLVMessage:(unsigned char)arg1 ;
-(id)copyReceivedResponseForMessageID:(unsigned)arg1 ;
-(void)setInternalPriority:(long long)arg1 ;
-(id)policyWithID:(unsigned long long)arg1 ;
-(void)setIoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setControlIO:(NSObject*<OS_dispatch_io>)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
@end
