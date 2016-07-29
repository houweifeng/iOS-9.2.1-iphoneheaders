/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFXPCInternalClientProtocol.h>

@protocol FMFSessionDelegate;
@class NSOperationQueue, NSMutableSet, NSXPCConnection, NSSet, NSMutableDictionary, NSString;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {

	BOOL _isModelInitialized;
	id<FMFSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSMutableSet* _internalHandles;
	NSXPCConnection* _connection;
	NSSet* _cachedGetHandlesSharingLocationsWithMe;
	NSSet* _cachedGetHandlesFollowingMyLocation;
	NSMutableDictionary* _cachedLocationForHandleByHandle;
	NSMutableDictionary* _cachedOfferExpirationForHandleByHandle;
	NSMutableDictionary* _cachedCanShareLocationWithHandleByHandle;

}

@property (nonatomic,copy) NSSet * handles; 
@property (assign,nonatomic,__weak) id<FMFSessionDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * internalHandles;                                              //@synthesize internalHandles=_internalHandles - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesSharingLocationsWithMe;                              //@synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesFollowingMyLocation;                                 //@synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLocationForHandleByHandle;                       //@synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;                //@synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;              //@synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle - In the implementation block
@property (assign,nonatomic) BOOL isModelInitialized;                                                     //@synthesize isModelInitialized=_isModelInitialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)FMFRestricted;
+(BOOL)FMFAllowed;
-(id)cachedLocationForHandle:(id)arg1 ;
-(id)getHandlesSharingLocationsWithMe;
-(id)getHandlesFollowingMyLocation;
-(BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)reloadDataIfNotLoaded;
-(id)getFavoritesSharingLocationWithMe;
-(BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(id)getHandlesWithPendingOffers;
-(BOOL)isMyLocationEnabled;
-(void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isNoMappingPacketReturnedError:(id)arg1 ;
-(void)_checkAndDisplayMeDeviceSwitchAlert;
-(void)_sendAutoSwitchMeDevice;
-(void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)approveFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getPendingFriendshipRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getAllLocations:(/*^block*/id)arg1 ;
-(void)favoritesForMaxCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nearbyLocationsWithCompletion:(/*^block*/id)arg1 ;
-(void)getActiveLocationSharingDevice:(/*^block*/id)arg1 ;
-(void)setActiveDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesSharingLocationsWithMe:(/*^block*/id)arg1 ;
-(void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesFollowingMyLocation:(/*^block*/id)arg1 ;
-(void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesWithPendingOffers:(/*^block*/id)arg1 ;
-(void)canOfferToHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHideMyLocationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isMyLocationEnabled:(/*^block*/id)arg1 ;
-(void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)locationForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)getAllDevices;
-(void)getPrettyNameForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAbRecordIdForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExpiredInitTimestamp;
-(void)crashDaemon;
-(void)exit5XXGracePeriod;
-(void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1 ;
-(void)sendIDSPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)dumpStateWithCompletion:(/*^block*/id)arg1 ;
-(double)maxLocatingInterval;
-(void)getAllDevices:(/*^block*/id)arg1 ;
-(id)verifyRestrictionsAndShowDialogIfRequired;
-(BOOL)is5XXError:(id)arg1 ;
-(BOOL)shouldHandleErrorInFWK:(id)arg1 ;
-(id)getActiveLocationSharingDevice;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1 ;
-(void)removeDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)setLocations:(id)arg1 ;
-(void)setDelegate:(id<FMFSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FMFSessionDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)handles;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(id)serverProxy;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(id)internalConnection;
-(void)addHandles:(id)arg1 ;
-(void)removeHandles:(id)arg1 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(void)dispatchOnDelegateQueue:(/*^block*/id)arg1 ;
-(oneway void)abPreferencesDidChange;
-(oneway void)abDidChange;
-(void)sessionWasCreatedRefresh;
-(void)_configureLogging;
-(void)_registerForFMFDLaunchedNotification;
-(oneway void)modelDidLoad;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(BOOL)isModelInitialized;
-(void)setIsModelInitialized:(BOOL)arg1 ;
-(NSMutableSet *)internalHandles;
-(void)setInternalHandles:(NSMutableSet *)arg1 ;
-(BOOL)hasModelInitialized;
-(void)handleIncomingAirDropURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSSet *)cachedGetHandlesSharingLocationsWithMe;
-(void)setCachedGetHandlesSharingLocationsWithMe:(NSSet *)arg1 ;
-(NSSet *)cachedGetHandlesFollowingMyLocation;
-(void)setCachedGetHandlesFollowingMyLocation:(NSSet *)arg1 ;
-(NSMutableDictionary *)cachedLocationForHandleByHandle;
-(void)setCachedLocationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedOfferExpirationForHandleByHandle;
-(void)setCachedOfferExpirationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedCanShareLocationWithHandleByHandle;
-(void)setCachedCanShareLocationWithHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3 ;
-(void)receivedMappingPacket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceRefresh;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(void)locatingInProgressChanged:(id)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)invalidateWithError:(id)arg1 ;
@end

