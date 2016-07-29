/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>
#import <libobjc.A.dylib/SFContinuityScannerClient.h>

@protocol SFContinuityScannerProtocolNSXPCProxyCreating;
@class NSMutableSet, NSHashTable, NSString;

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient> {

	id<SFContinuityScannerProtocol><NSXPCProxyCreating> _connectionProxy;
	NSMutableSet* _foundDevices;
	NSHashTable* _observers;

}

@property (retain) id<SFContinuityScannerProtocol><NSXPCProxyCreating> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (retain) NSMutableSet * foundDevices;                                                      //@synthesize foundDevices=_foundDevices - In the implementation block
@property (retain) NSHashTable * observers;                                                          //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setupXPCConnection;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setConnectionProxy:(id<SFContinuityScannerProtocol><NSXPCProxyCreating>)arg1 ;
-(id<SFContinuityScannerProtocol><NSXPCProxyCreating>)connectionProxy;
-(void)xpcManagerConnectionInterrupted;
-(void)setForceScanningEnabled:(BOOL)arg1 ;
-(void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)lostDeviceWithDevice:(id)arg1 ;
-(void)receivedAdvertisement:(id)arg1 ;
-(void)foundDeviceWithDevice:(id)arg1 ;
-(NSMutableSet *)foundDevices;
-(void)setFoundDevices:(NSMutableSet *)arg1 ;
@end

