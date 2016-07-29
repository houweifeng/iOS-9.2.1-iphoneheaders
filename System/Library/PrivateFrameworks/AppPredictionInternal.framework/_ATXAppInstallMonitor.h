/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXAppInfoManager, NSDictionary, NSObject;

@interface _ATXAppInstallMonitor : NSObject {

	_ATXAppInfoManager* _appInfoManager;
	NSDictionary* _assetData;
	int _applicationsChangedNotificationToken;
	BOOL _includeSystemApps;
	NSObject*<OS_dispatch_queue> _installQueue;
	/*^block*/id _updateCompletionBlock;

}
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initWithAppInfoManager:(id)arg1 includingSystemApps:(BOOL)arg2 ;
-(void)synchronousUpdateAndBackdate:(BOOL)arg1 ;
-(void)monitorApplicationsDirectory;
-(void)_cancelAnyExistingNotification;
-(void)updateAndBackdate:(BOOL)arg1 ;
-(void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(BOOL)arg2 ;
-(id)fetchInstalledApps;
-(id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2 ;
-(BOOL)recentlyRestoredBackupWithRestoreDate:(id)arg1 andTimeWindow:(unsigned long long)arg2 ;
-(id)initForTestingWithAppInfoManager:(id)arg1 ;
-(id)initWithAppInfoManager:(id)arg1 ;
-(void)trackSystemAppsForTesting;
-(void)setUpdateCompletionBlock:(/*^block*/id)arg1 ;
@end

