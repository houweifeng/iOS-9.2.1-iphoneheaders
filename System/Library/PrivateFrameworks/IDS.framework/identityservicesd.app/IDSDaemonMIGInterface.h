/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSDaemonMIGInterface : NSObject {

	NSObject*<OS_xpc_object> _server;
	int _notifyToken;
	id _delegate;
	BOOL _shuttingDown;

}

@property (assign) id<IDSDaemonMIGInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
-(void)setDelegate:(id<IDSDaemonMIGInterfaceDelegate>)arg1 ;
-(id<IDSDaemonMIGInterfaceDelegate>)delegate;
@end

