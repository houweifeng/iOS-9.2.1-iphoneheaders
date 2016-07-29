/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, PCPersistentTimer, NSDate, NSTimer, NSObject, NSArray, NSMutableSet;

@interface _EKNotificationMonitor : NSObject {

	EKEventStore* _eventStore;
	/*^block*/id _eventStoreGetter;
	BOOL _running;
	PCPersistentTimer* _timer;
	NSDate* _nextFireTime;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned long long _lastEventCount;
	unsigned long long _lastReminderCount;
	NSArray* _eventNotificationReferences;
	NSArray* _reminderNotificationReferences;
	BOOL _initialCheck;
	BOOL _shouldInstallPersistentTimer;
	BOOL _useSyncIdleTimer;
	BOOL _loadRecentlyRepliedNotifications;
	BOOL _handlesOnlyEvents;
	NSMutableSet* _alertedNotificationsThatFailedToMarkAlerted;

}

@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (nonatomic,readonly) unsigned long long eventNotificationCount; 
@property (nonatomic,readonly) NSArray * notificationReferences; 
@property (nonatomic,readonly) NSArray * eventNotificationReferences; 
@property (nonatomic,readonly) NSArray * reminderNotificationReferences; 
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)_timerFired;
-(id)_eventStore;
-(void)_killSyncTimer;
-(void)_resetTimer;
-(void)attemptReloadSynchronously:(BOOL)arg1 ;
-(unsigned long long)_checkForEventNotifications:(id)arg1 ;
-(unsigned long long)_checkForReminderNotifications:(id)arg1 ;
-(void)_notifyForUnalertedNotifications:(id)arg1 ;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_resetSyncTimer;
-(id)initByHandlingOnlyEvents:(BOOL)arg1 bulletinBoardWithEventStoreGetter:(/*^block*/id)arg2 ;
-(unsigned long long)notificationCount;
-(NSArray *)notificationReferences;
-(NSArray *)reminderNotificationReferences;
-(void)_databaseChanged;
-(void)_notificationCountChangedExternally;
-(void)_alertPrefChanged;
-(void)killTimer;
-(void)attemptReload;
-(void)adjust;
-(id)initByHandlingOnlyEvents:(BOOL)arg1 eventStore:(id)arg2 ;
-(unsigned long long)eventNotificationCount;
-(NSArray *)eventNotificationReferences;
-(void)_syncDidStart;
-(void)_syncDidEnd;
@end

