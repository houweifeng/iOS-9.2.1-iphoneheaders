/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AOSNotifySession : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcConnectionCreationQueue;              //@synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)fmipDeviceId;
-(void)didChangeFMFAccountInfo:(id)arg1 ;
-(void)locationAuthorizationForShareMyLocationWithCompletion:(/*^block*/id)arg1 ;
-(void)willDeleteiCloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)startListeningOnTopic:(id)arg1 ;
-(void)_destroyXPCConnection;
-(id)currentXPCConnection;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(id)fmipAccount;
-(NSObject*<OS_dispatch_queue>)xpcConnectionCreationQueue;
-(void)setXpcConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)fmfDeviceId;
-(void)retrieveFMFAccountUsingCallback:(/*^block*/id)arg1 ;
-(BOOL)performMigration;
-(id)storeAccount;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)iCloudAccount;
@end

