/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UNSNotificationSchedulerServerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableDictionary, NSMapTable, NSString;

@interface UNNotificationSchedulerConnectionListener : NSObject <NSXPCListenerDelegate, UNSNotificationSchedulerServerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableDictionary* _connectionsByBundleIdentifier;
	NSMapTable* _bundleIdentifiersByConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(void)_addConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1 ;
-(id)_queue_connectionsForBundleIdentifier:(id)arg1 ;
-(void)_localNotificationsDidChange:(id)arg1 ;
-(void)_localNotificationDidFire:(id)arg1 ;
-(BOOL)_isAllowedToScheduleForBundleIdentifier:(id)arg1 ;
-(void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_queue_localNotificationsDidChange:(id)arg1 ;
-(void)_queue_localNotificationDidFire:(id)arg1 ;
-(void)setObservingScheduledLocalNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;
-(void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

