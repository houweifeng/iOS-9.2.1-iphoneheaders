/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFServiceConnectionState.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSLock, MailXPCServices;

@interface MFXPCConnection : NSObject <MFServiceConnectionState> {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _messageQueue;
	int _cancelFlag;
	NSLock* _errorHandlerLock;
	/*^block*/id _errorHandler;
	MailXPCServices* _serviceManager;

}

@property (assign,nonatomic) MailXPCServices * serviceManager;              //@synthesize serviceManager=_serviceManager - In the implementation block
@property (copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)handleError:(id)arg1 ;
-(BOOL)shouldCancel;
-(void)setServiceManager:(MailXPCServices *)arg1 ;
-(MailXPCServices *)serviceManager;
-(id)initWithConnection:(id)arg1 ;
@end

