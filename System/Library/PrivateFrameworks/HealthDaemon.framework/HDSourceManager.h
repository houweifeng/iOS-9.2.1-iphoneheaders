/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, HDDatabaseValueCache;

@interface HDSourceManager : NSObject {

	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	HDDatabaseValueCache* _sourceEntityCache;
	HDDatabaseValueCache* _clientSourceCache;
	HDDatabaseValueCache* _sourcesForTypeCache;

}
+(BOOL)_isLocalDeviceBundleIdentifier:(id)arg1 ;
+(id)_applicationNameForBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)clientSourceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2 ;
-(void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)updateCurrentDeviceNameInDatabase:(id)arg1 ;
-(id)allSourcesWithError:(id*)arg1 ;
-(id)sourceForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)localDeviceSourceWithError:(id*)arg1 ;
-(id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(/*^block*/id)arg2 modifySourceBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)_createSourceEntityForLocalDeviceWithError:(id*)arg1 ;
-(id)_getNameForBundleIdentifier:(id)arg1 isCurrentDevice:(BOOL)arg2 ;
-(id)_createSourceEntityForBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(BOOL)arg4 productType:(id)arg5 error:(id*)arg6 ;
-(id)sourceForApplicationIdentifier:(id)arg1 entitlements:(id)arg2 name:(id)arg3 createIfNecessary:(BOOL)arg4 error:(id*)arg5 ;
-(id)healthAppSourceWithError:(id*)arg1 ;
-(id)_createSourceEntityForClientWithBundleIdentifier:(id)arg1 name:(id)arg2 entitlements:(id)arg3 error:(id*)arg4 ;
-(id)_createSourceEntityForExternalHealthDeviceWithIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 error:(id*)arg4 ;
-(/*^block*/id)_setNameModifyBlockWithName:(id)arg1 ;
-(id)_createSourceEntityForAppleDeviceWithIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 isLocalDevice:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)_deleteSourceWithEntity:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_fetchClientSourceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)_sourceCacheItemForObjectType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setOrderedSources:(id)arg1 sourceIDs:(id)arg2 forObjectType:(id)arg3 userOrdered:(BOOL)arg4 error:(id*)arg5 ;
-(id)_sourceCacheItemFromOrderedIDs:(id)arg1 userOrdered:(BOOL)arg2 ;
-(id)_loadAllSourceIDsForType:(id)arg1 error:(id*)arg2 ;
-(id)_sourceCacheItemFromUnorderedIDs:(id)arg1 ;
-(id)_defaultSourceOrdering:(id)arg1 ;
-(id)_authorizedSourcesForType:(id)arg1 error:(id*)arg2 ;
-(id)sourceForClient:(id)arg1 createIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(id)sourceForExternalHealthDeviceWithIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 createIfNecessary:(BOOL)arg4 error:(id*)arg5 ;
-(id)sourceForAppleDeviceWithIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 createIfNecessary:(BOOL)arg4 error:(id*)arg5 ;
-(id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(BOOL)arg3 error:(id*)arg4 ;
-(id)clientSourceForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)clientSourceForSourceEntity:(id)arg1 ;
-(id)dataTypesForSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3 ;
-(BOOL)addOrderedSource:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeOrderedSource:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
@end

