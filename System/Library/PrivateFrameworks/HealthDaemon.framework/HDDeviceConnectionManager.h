/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDHealthDeviceManager, HDDatabase, NSMutableDictionary, NSObject, NSString;

@interface HDDeviceConnectionManager : NSObject <HDDatabaseProtectedDataObserver> {

	BOOL _connecting;
	BOOL _BTLEEnabled;
	HDHealthDeviceManager* _deviceMgr;
	HDDatabase* _database;
	NSMutableDictionary* _activeServices;
	NSObject*<OS_dispatch_queue> _deviceQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)connectToServicesWithDeviceManager:(id)arg1 healthDatabase:(id)arg2 ;
+(void)disconnectFromServices;
+(id)sharedDeviceManager;
+(id)_transactionName:(id)arg1 ;
+(void)reconnectToServices;
+(void)disconnectFromService:(id)arg1 ;
+(void)connectToService:(id)arg1 ;
-(id)init;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_subscribeBluetoothStateUpdates;
-(void)_connectToServices;
-(void)_disconnectFromServices;
-(void)_disconnectFromService:(id)arg1 ;
-(void)_connectToService:(id)arg1 ;
-(void)_handleBluetoothUpdates:(long long)arg1 ;
@end

