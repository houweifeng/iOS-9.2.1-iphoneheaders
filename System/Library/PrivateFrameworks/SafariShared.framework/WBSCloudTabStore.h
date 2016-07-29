/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface WBSCloudTabStore : NSObject {

	NSMutableArray* _syncedCloudTabDevices;
	NSMutableDictionary* _deviceUUIDsToCloseRequests;

}

@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
-(void)createSyncedCloudTabDevicesAndCloseRequests;
-(id)_keyValueStoreDictionaryRepresentation:(long long)arg1 ;
-(void)_addDeviceDictionary:(id)arg1 deviceUUID:(id)arg2 ;
-(void)_addCloseRequestDictionary:(id)arg1 requestUUID:(id)arg2 ;
-(void)_pruneOrphanedCloseRequests;
-(void)_removeSyncedCloudTabsWithOutstandingCloseRequests;
-(void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 ;
-(BOOL)_closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(id)_currentDeviceUUID;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 ;
-(void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(NSArray *)syncedCloudTabDevices;
-(void)resetSyncedCloudTabDevicesAndCloseRequests;
-(void)pruneExpiredDevices;
-(BOOL)closeTab:(id)arg1 onDevice:(id)arg2 ;
-(BOOL)closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(BOOL)closeAllTabsOnDevice:(id)arg1 ;
-(void)handleCloseTabRequests;
@end

