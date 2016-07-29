/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class MFLANContinuationContext;

@interface MFLANContinuationAgent : NSObject {

	BOOL _serverRunning;
	CFSocketRef _socket;
	CFRunLoopSourceRef _serverRunLoopSource;
	/*^block*/id _connectCallbackBlock;
	MFLANContinuationContext* _continuationContext;

}

@property (nonatomic,readonly) BOOL serverRunning;                                          //@synthesize serverRunning=_serverRunning - In the implementation block
@property (nonatomic,readonly) MFLANContinuationContext * continuationContext;              //@synthesize continuationContext=_continuationContext - In the implementation block
-(void)dealloc;
-(id)init;
-(id)startServerWithCompletion:(/*^block*/id)arg1 ;
-(MFLANContinuationContext *)continuationContext;
-(void)stopServer;
-(void)_cleanupRunLoopSource;
-(void)_cleanupSocket;
-(id)_getDeviceHostname;
-(void)_socketListenerRunLoop;
-(void)connectToServerWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)serverRunning;
@end
