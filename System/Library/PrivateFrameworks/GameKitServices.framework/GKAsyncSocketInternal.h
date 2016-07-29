/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/GKAsyncSocket.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableData, NSString;

@interface GKAsyncSocketInternal : GKAsyncSocket {

	NSObject*<OS_dispatch_source> _receiveSource;
	NSObject*<OS_dispatch_source> _sendSource;
	BOOL _sendSourceSuspended;
	BOOL _invalidated;
	int _connectionSocket;
	NSMutableData* _dataToSend;
	/*^block*/id _receiveDataHandler;
	/*^block*/id _connectedHandler;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _socketName;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setTargetQueue:(id)arg1 ;
-(id)targetQueue;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(/*^block*/id)arg1 ;
-(void)setSocketName:(id)arg1 ;
-(void)tcpConnectSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(id)socketName;
-(void)tcpAttachSocketDescriptor:(int)arg1 ;
-(/*^block*/id)receiveDataHandler;
-(/*^block*/id)connectedHandler;
-(void)receiveData;
-(void)sendData;
-(BOOL)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(/*^block*/id)arg2 sendEventHandler:(/*^block*/id)arg3 ;
-(void)closeConnectionNow;
-(void)setReceiveDataHandler:(/*^block*/id)arg1 ;
@end

