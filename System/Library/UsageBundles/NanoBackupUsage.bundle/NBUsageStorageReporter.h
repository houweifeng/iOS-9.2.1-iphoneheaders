/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UsageBundles/NanoBackupUsage.bundle/NanoBackupUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NBManager, NSObject, NSArray, NSString;

@interface NBUsageStorageReporter : NSObject <PSStorageReporting> {

	NSMutableDictionary* _allBackups;
	NBManager* _backupManager;
	NSObject*<OS_dispatch_queue> _backupManagerQueue;
	NSObject*<OS_dispatch_semaphore> _backupManageSemaphorer;
	NSArray* _cachedBundleApps;
	NSMutableDictionary* _cachedCategorySizes;

}

@property (nonatomic,retain) NSMutableDictionary * allBackups;                                     //@synthesize allBackups=_allBackups - In the implementation block
@property (nonatomic,retain) NBManager * backupManager;                                            //@synthesize backupManager=_backupManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backupManagerQueue;                      //@synthesize backupManagerQueue=_backupManagerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> backupManageSemaphorer;              //@synthesize backupManageSemaphorer=_backupManageSemaphorer - In the implementation block
@property (nonatomic,retain) NSArray * cachedBundleApps;                                           //@synthesize cachedBundleApps=_cachedBundleApps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCategorySizes;                            //@synthesize cachedCategorySizes=_cachedCategorySizes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(void)setBackupManager:(NBManager *)arg1 ;
-(void)setCachedCategorySizes:(NSMutableDictionary *)arg1 ;
-(NSArray *)cachedBundleApps;
-(NSMutableDictionary *)cachedCategorySizes;
-(void)populateUsageBundleApps;
-(NSObject*<OS_dispatch_semaphore>)backupManageSemaphorer;
-(void)setBackupManageSemaphorer:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NBManager *)backupManager;
-(void)setBackupManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)backupManagerQueue;
-(void)setCachedBundleApps:(NSArray *)arg1 ;
-(void)setAllBackups:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allBackups;
-(id)init;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2 ;
@end

