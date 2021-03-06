/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject, NSFileHandle;

@interface NEPacketTunnelFlow : NSObject {

	BOOL _handlerSetup;
	long long _interfaceType;
	NEVirtualInterface_sRef _interface;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileHandle* _socket;
	/*^block*/id _packetHandler;

}

@property (readonly) long long interfaceType;                        //@synthesize interfaceType=_interfaceType - In the implementation block
@property (readonly) NEVirtualInterface_sRef interface;              //@synthesize interface=_interface - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL handlerSetup;                                //@synthesize handlerSetup=_handlerSetup - In the implementation block
@property (retain) NSFileHandle * socket;                            //@synthesize socket=_socket - In the implementation block
@property (copy) id packetHandler;                                   //@synthesize packetHandler=_packetHandler - In the implementation block
-(void)dealloc;
-(NEVirtualInterface_sRef)interface;
-(long long)interfaceType;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)setVirtualInterfaceSocket:(id)arg1 ;
-(void)closeVirtualInterface;
-(void)setSocket:(NSFileHandle *)arg1 ;
-(NSFileHandle *)socket;
-(void)setHandlerSetup:(BOOL)arg1 ;
-(void)setPacketHandler:(id)arg1 ;
-(id)packetHandler;
-(BOOL)handlerSetup;
-(id)initWithVirtualInterfaceType:(long long)arg1 ;
-(void)resetReadHandler;
-(void)readPacketsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)writePackets:(id)arg1 withProtocols:(id)arg2 ;
@end

