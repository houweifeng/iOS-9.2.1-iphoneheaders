/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotification/UserNotification-Structs.h>
#import <libobjc.A.dylib/SBPushStoreObserver.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, BBDataProviderProxy, NSObject, NSSet;

@interface UNDefaultDataProvider : NSObject <SBPushStoreObserver, BBRemoteDataProvider> {

	NSString* _sectionID;
	NSMutableArray* _publisherBulletinIDs;
	NSString* _displayName;
	BBDataProviderProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) BBDataProviderProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSSet * categories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_sizeFromSizeConstraint:(id)arg1 originalSize:(CGSize)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(unsigned long long)_maximumActionsForContext:(unsigned long long)arg1 ;
-(NSSet *)categories;
-(id)sortDescriptors;
-(BBDataProviderProxy *)proxy;
-(void)setCategories:(NSSet *)arg1 ;
-(BOOL)_isPushDataProvider;
-(id)_sortKey;
-(id)sectionIdentifier;
-(void)setProxy:(BBDataProviderProxy *)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(void)pushStoreNotificationsDidChange;
-(void)pushStoreClearedNotifications;
-(id)_imageForRecordID:(id)arg1 ;
-(id)_publisherBulletinIDForNotification:(id)arg1 ;
-(id)_defaultActionWithTitle:(id)arg1 ;
-(id)_actionsForNormalLayoutFromPushStoreNotification:(id)arg1 ;
-(id)_actionsForCompactLayoutFromPushStoreNotification:(id)arg1 ;
-(id)_supplementaryActionsForPushStoreNotification:(id)arg1 context:(unsigned long long)arg2 ;
-(id)_actionsForCategoryIdentifier:(id)arg1 context:(unsigned long long)arg2 ;
-(id)_bbActionFromUIUserNotificationAction:(id)arg1 ;
-(unsigned long long)_bbActivationModeFromUIActivationMode:(unsigned long long)arg1 ;
-(long long)_bbActionBehaviorFromUIBehavior:(unsigned long long)arg1 ;
-(id)_bulletinForNotification:(id)arg1 ;
-(void)_cleanupMigrationFromBrightonWithLastClearedDate:(id)arg1 ;
-(id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2 ;
-(id)initWithSectionID:(id)arg1 displayName:(id)arg2 queue:(id)arg3 ;
-(void)uninstall;
-(id)_latestBulletinInSet:(id)arg1 ;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2 ;
@end

