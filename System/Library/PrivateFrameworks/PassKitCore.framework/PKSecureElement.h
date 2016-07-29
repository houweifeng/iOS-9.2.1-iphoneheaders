/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFHardwareEventListener.h>
#import <libobjc.A.dylib/NFRemoteAdminEventListener.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSHashTable, NFSecureElement, NSString;

@interface PKSecureElement : NSObject <NFHardwareEventListener, NFRemoteAdminEventListener> {

	BOOL _deletingAllApplets;
	NSObject*<OS_dispatch_source> _deletingAllAppletsTimer;
	NSObject*<OS_dispatch_queue> _deletingAllAppletsTimerConcurrentQueue;
	NSObject*<OS_dispatch_queue> _deletingAllAppletsPropertyConcurrentQueue;
	NSObject*<OS_dispatch_queue> _observerConcurrentQueue;
	NSHashTable* _observers;
	NFSecureElement* _secureElement;

}

@property (nonatomic,readonly) BOOL isProductionSigned; 
@property (nonatomic,readonly) BOOL isInRestrictedMode; 
@property (nonatomic,readonly) BOOL isDeletingAllApplets; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,readonly) NSString * rsaCertificiate; 
@property (nonatomic,readonly) NSString * eccCertificate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)secureElementIdentifier;
-(void)dealloc;
-(id)init;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)connectToServerWithPushTopic:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stateInformationWithAuthenticationData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)eccCertificate;
-(NSString *)rsaCertificiate;
-(BOOL)setRegistrationInformation:(id)arg1 ;
-(void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isDeletingAllApplets;
-(void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signDigest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)initializeSecureElementAndQueueServerConnection:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)secureElement:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(void)remoteAdminCleanupProgress:(double)arg1 ;
-(void)pairingStateWithCompletion:(/*^block*/id)arg1 ;
-(void)allAppletsWithCompletion:(/*^block*/id)arg1 ;
-(void)appletWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markAllAppletsForDeletionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)queueConnectionToSeverWithPushTopic:(id)arg1 ;
-(BOOL)queueConnectionToSeverForAppletIdentifiers:(id)arg1 ;
-(void)initializeSecureElementWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isProductionSigned;
-(NSString *)secureElementIdentifier;
-(BOOL)isInRestrictedMode;
@end

