/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, NSDictionary, PLNSNotificationOperatorComposition, NSArray, PLTimer, PLSemaphore;

@interface PLXPCService : PLService {

	NSObject*<OS_xpc_object> _xpcConnection;
	NSMutableDictionary* _registeredListeners;
	NSMutableDictionary* _registeredResponders;
	NSDictionary* _permissionCache;
	PLNSNotificationOperatorComposition* _registrationNotification;
	NSArray* _clientIDs;
	NSDictionary* _clientNames;
	PLTimer* _resetPermissionsForClientsTimer;
	PLNSNotificationOperatorComposition* _dailyTaskNotification;
	PLSemaphore* _satelliteProcessSemaphore;

}

@property (retain) NSObject*<OS_xpc_object> xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSMutableDictionary * registeredListeners;                                   //@synthesize registeredListeners=_registeredListeners - In the implementation block
@property (retain) NSMutableDictionary * registeredResponders;                                  //@synthesize registeredResponders=_registeredResponders - In the implementation block
@property (retain) NSDictionary * permissionCache;                                              //@synthesize permissionCache=_permissionCache - In the implementation block
@property (retain) PLNSNotificationOperatorComposition * registrationNotification;              //@synthesize registrationNotification=_registrationNotification - In the implementation block
@property (retain) NSArray * clientIDs;                                                         //@synthesize clientIDs=_clientIDs - In the implementation block
@property (retain) NSDictionary * clientNames;                                                  //@synthesize clientNames=_clientNames - In the implementation block
@property (retain) PLTimer * resetPermissionsForClientsTimer;                                   //@synthesize resetPermissionsForClientsTimer=_resetPermissionsForClientsTimer - In the implementation block
@property (retain) PLNSNotificationOperatorComposition * dailyTaskNotification;                 //@synthesize dailyTaskNotification=_dailyTaskNotification - In the implementation block
@property (retain) PLSemaphore * satelliteProcessSemaphore;                                     //@synthesize satelliteProcessSemaphore=_satelliteProcessSemaphore - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventPointDefinitionClientLogging;
+(id)entryEventPointDefinitionClientLoggingDrops;
+(id)entryEventIntervalDefinitionResponderEvent;
+(id)entryAggregateDefinitionXPCEvent;
+(id)defaults;
-(id)init;
-(void)initOperatorDependancies;
-(void)dailyTasks;
-(NSMutableDictionary *)registeredListeners;
-(NSMutableDictionary *)registeredResponders;
-(void)stopPowerlogHelperd:(id)arg1 ;
-(void)initSatelliteProcessSemaphore;
-(void)handlePeer:(id)arg1 forEvent:(id)arg2 ;
-(PLSemaphore *)satelliteProcessSemaphore;
-(void)resetPermissionsForClients;
-(void)setDailyTaskNotification:(PLNSNotificationOperatorComposition *)arg1 ;
-(NSArray *)clientIDs;
-(NSDictionary *)permissionCache;
-(NSDictionary *)clientNames;
-(void)handleSingleMessage:(id)arg1 fromPeer:(id)arg2 forEvent:(id)arg3 ;
-(void)setSatelliteProcessExitWithTime:(double)arg1 ;
-(void)handlePeerShouldLogEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 ;
-(void)handlePeerResponderEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6 ;
-(void)handlePeerListenerEvent:(id)arg1 withMessage:(id)arg2 withClientID:(short)arg3 withProcessName:(id)arg4 withKey:(id)arg5 withPayload:(id)arg6 ;
-(short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withProcessName:(id)arg4 ;
-(void)respondToEvent:(id)arg1 withResponse:(id)arg2 ;
-(id)registeredOperatorFromDictionary:(id)arg1 forMessage:(id)arg2 ;
-(void)logMessage:(id)arg1 withPayload:(id)arg2 ;
-(void)setSatelliteProcessExit;
-(void)setRegisteredListeners:(NSMutableDictionary *)arg1 ;
-(void)setRegisteredResponders:(NSMutableDictionary *)arg1 ;
-(void)setPermissionCache:(NSDictionary *)arg1 ;
-(PLNSNotificationOperatorComposition *)registrationNotification;
-(void)setRegistrationNotification:(PLNSNotificationOperatorComposition *)arg1 ;
-(void)setClientIDs:(NSArray *)arg1 ;
-(void)setClientNames:(NSDictionary *)arg1 ;
-(PLTimer *)resetPermissionsForClientsTimer;
-(void)setResetPermissionsForClientsTimer:(PLTimer *)arg1 ;
-(PLNSNotificationOperatorComposition *)dailyTaskNotification;
-(void)setSatelliteProcessSemaphore:(PLSemaphore *)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

