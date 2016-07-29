/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDFairPlaySAPSessionDelegate, OS_dispatch_queue;
#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSObject, NSUUID;

@interface HMDFairPlaySAPSession : NSObject {

	unsigned long long _state;
	id<HMDFairPlaySAPSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSUUID* _sessionIdentifier;
	FPSAPContextOpaque_Ref _session;
	NSObject*<OS_dispatch_queue> _clientQueue;
	FairPlayHWInfo_ _hardwareInfo;

}

@property (__weak,readonly) id<HMDFairPlaySAPSessionDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionIdentifier;                              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) FPSAPContextOpaque_Ref session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FairPlayHWInfo_ hardwareInfo;                            //@synthesize hardwareInfo=_hardwareInfo - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
-(void)dealloc;
-(id<HMDFairPlaySAPSessionDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)close;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_teardown;
-(FPSAPContextOpaque_Ref)session;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_closeWithError:(id)arg1 ;
-(void)_setupSAPSessionWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleServerCertificate:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleServerSAPExchangeData:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)openWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signatureForData:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)verifySignedData:(id)arg1 signature:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(FairPlayHWInfo_)hardwareInfo;
@end

