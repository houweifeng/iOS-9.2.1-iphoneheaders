/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCRelay : NSObject {

	BOOL _relayActive;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _relayConnection;

}

@property (assign) BOOL relayActive;                                                //@synthesize relayActive=_relayActive - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcConnection;                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> relayConnection;              //@synthesize relayConnection=_relayConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isDebugEnabled;
-(void)stopRelay;
-(void)startRelay;
-(void)setRelayActive:(BOOL)arg1 ;
-(void)resetRelayConnection;
-(NSObject*<OS_xpc_object>)relayConnection;
-(BOOL)relayActive;
-(void)setRelayConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)handlePeer:(id)arg1 forEvent:(id)arg2 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

