/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;
@class NSObject, NSUUID;

@interface NWNetworkAgentRegistration : NSObject {

	int _registrationSocket;
	unsigned _waitingMessageID;
	unsigned _responseMessageID;
	unsigned _responseError;
	Class _networkAgentClass;
	NSObject*<NWNetworkAgent> _networkAgent;
	NSUUID* _registeredUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_semaphore> _readSemaphore;

}

@property (getter=isRegistered,readonly) BOOL registered; 
@property (retain) Class networkAgentClass;                                     //@synthesize networkAgentClass=_networkAgentClass - In the implementation block
@property (retain) NSObject*<NWNetworkAgent> networkAgent;                      //@synthesize networkAgent=_networkAgent - In the implementation block
@property (retain) NSUUID * registeredUUID;                                     //@synthesize registeredUUID=_registeredUUID - In the implementation block
@property (assign) int registrationSocket;                                      //@synthesize registrationSocket=_registrationSocket - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> readSource;                    //@synthesize readSource=_readSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> readSemaphore;              //@synthesize readSemaphore=_readSemaphore - In the implementation block
@property (assign) unsigned waitingMessageID;                                   //@synthesize waitingMessageID=_waitingMessageID - In the implementation block
@property (assign) unsigned responseMessageID;                                  //@synthesize responseMessageID=_responseMessageID - In the implementation block
@property (assign) unsigned responseError;                                      //@synthesize responseError=_responseError - In the implementation block
+(id)sharedAssertionRegistration;
+(BOOL)addActiveAssertionToNetworkAgent:(id)arg1 ;
+(BOOL)removeActiveAssertionFromNetworkAgent:(id)arg1 ;
-(BOOL)isRegistered;
-(void)dealloc;
-(unsigned)responseError;
-(NSUUID *)registeredUUID;
-(unsigned)responseMessageID;
-(id)initWithNetworkAgentClass:(Class)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)readSemaphore;
-(BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg1 ;
-(void)setReadSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)waitForMessageResponse;
-(BOOL)registerNetworkAgent:(id)arg1 ;
-(void)setReadSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_source>)readSource;
-(int)registrationSocket;
-(void)setResponseMessageID:(unsigned)arg1 ;
-(BOOL)unregisterNetworkAgent;
-(void)setRegistrationSocket:(int)arg1 ;
-(unsigned)waitingMessageID;
-(void)setWaitingMessageID:(unsigned)arg1 ;
-(BOOL)updateNetworkAgent:(id)arg1 ;
-(void)setNetworkAgent:(NSObject*<NWNetworkAgent>)arg1 ;
-(void)setNetworkAgentClass:(Class)arg1 ;
-(BOOL)addNetworkAgentToInterfaceNamed:(id)arg1 ;
-(void)setRegisteredUUID:(NSUUID *)arg1 ;
-(NSObject*<NWNetworkAgent>)networkAgent;
-(Class)networkAgentClass;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResponseError:(unsigned)arg1 ;
@end

