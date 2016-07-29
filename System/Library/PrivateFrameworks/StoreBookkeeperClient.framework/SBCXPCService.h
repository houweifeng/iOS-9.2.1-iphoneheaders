/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, SBCClientConfiguration, NSMutableDictionary, SBCXPCServiceInterface;

@interface SBCXPCService : NSObject {

	BOOL _isConnecting;
	NSObject*<OS_dispatch_queue> _queue;
	id _serviceProxy;
	id _applicationWillTerminateObserver;
	NSXPCConnection* _xpcConnection;
	SBCClientConfiguration* _clientConfiguration;
	NSMutableDictionary* _pendingReplyBlockCompletionHandlers;
	SBCXPCServiceInterface* _XPCServiceInterface;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (readonly) id serviceProxy;                                                        //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (__weak,readonly) id applicationWillTerminateObserver;                             //@synthesize applicationWillTerminateObserver=_applicationWillTerminateObserver - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;                                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) SBCClientConfiguration * clientConfiguration;                           //@synthesize clientConfiguration=_clientConfiguration - In the implementation block
@property (readonly) NSMutableDictionary * pendingReplyBlockCompletionHandlers;              //@synthesize pendingReplyBlockCompletionHandlers=_pendingReplyBlockCompletionHandlers - In the implementation block
@property (readonly) SBCXPCServiceInterface * XPCServiceInterface;                           //@synthesize XPCServiceInterface=_XPCServiceInterface - In the implementation block
@property (readonly) BOOL isConnecting;                                                      //@synthesize isConnecting=_isConnecting - In the implementation block
+(Class)XPCServiceInterfaceClass;
+(id)newListener;
+(id)XPCInterfaceDebugDescription;
-(void)dealloc;
-(BOOL)isConnecting;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)closeServiceConnection;
-(void)_onQueueCloseServiceConnection;
-(id)serviceProxy;
-(NSXPCConnection *)xpcConnection;
-(id)initWithClientConfiguration:(id)arg1 ;
-(void)didConnectToService;
-(void)sendMessage:(SEL)arg1 withClientCompletionHandler:(/*^block*/id)arg2 messageBlock:(/*^block*/id)arg3 ;
-(oneway void)setClientConfiguration:(SBCClientConfiguration *)arg1 ;
-(void)_openServiceConnection;
-(id)newServiceConnection;
-(SBCClientConfiguration *)clientConfiguration;
-(void)_onQueueInvalidateOutstandingRequests:(id)arg1 ;
-(id)_enqueueReplyBlockMessageWithSelector:(SEL)arg1 withClientCompletionHandler:(/*^block*/id)arg2 ;
-(id)_serviceProxy;
-(void)_dequeueReplyBlockMessageWithEnqueuedToken:(id)arg1 ;
-(void)_invalidateOutstandingRequests:(id)arg1 ;
-(id)applicationWillTerminateObserver;
-(NSMutableDictionary *)pendingReplyBlockCompletionHandlers;
-(SBCXPCServiceInterface *)XPCServiceInterface;
@end

