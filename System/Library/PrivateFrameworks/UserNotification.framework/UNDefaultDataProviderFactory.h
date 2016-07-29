/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, LSApplicationWorkspace, BBDataProviderConnection, BBSettingsGateway, NSObject, NSString;

@interface UNDefaultDataProviderFactory : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableDictionary* _dataProvidersByBundleIdentifier;
	NSMutableSet* _registeredBundleIdentifiers;
	LSApplicationWorkspace* _appWorkspace;
	BBDataProviderConnection* _dataProviderConnection;
	BBSettingsGateway* _settingsGateway;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_queue_notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)bundleIdentifiersWithEnabledNotifications:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_queue_bundleIdentifiersWithEnabledNotifications:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_queue_notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)updateNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)enableNotificationsWithSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)isBundleIdentifierRegistered:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)updateNotificationTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)enableNotificationsWithTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_reloadDataProviders;
-(void)_queue_enableNotifications:(BOOL)arg1 withSettings:(id)arg2 forBundleIdentifier:(id)arg3 withResult:(/*^block*/id)arg4 ;
-(void)_queue_enableNotifications:(BOOL)arg1 withTypes:(unsigned long long)arg2 forBundleIdentifier:(id)arg3 ;
-(void)_queue_isBundleIdentifierRegistered:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)_queue_categoriesForBundleIdentifier:(id)arg1 ;
-(void)_queue_sectionInfoForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_queue_dataProviderForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1 ;
-(void)_queue_createDataProviderWithBundleIdentifier:(id)arg1 ;
-(BOOL)_queue_shouldUseDefaultDataProviderForBundleIdentifier:(id)arg1 ;
-(void)_queue_reloadDataProviders:(id)arg1 ;
@end

