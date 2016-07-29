/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@class NSHashTable, PKXPCService, NSString;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {

	NSHashTable* _acquiredAssertions;
	PKXPCService* _remoteService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(id)initSharedInstance;
-(BOOL)assertionExistsOfType:(unsigned long long)arg1 ;
-(void)invalidateAssertion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_remoteObjectProxy;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

