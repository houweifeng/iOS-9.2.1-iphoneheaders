/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPushHandlerDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <identityservicesd/IDSUTunDeliveryControllerDelegate.h>
#import <identityservicesd/IDSDuetInterfaceDelegate.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, IMRemoteObjectBroadcaster, NSDate, NSTimer, IMMultiQueue, IMPair, IMPowerAssertion, FTMessageDelivery, NSString;

@interface IDSDaemon : NSObject <IDSPushHandlerDelegate, IMSystemMonitorListener, IDSUTunDeliveryControllerDelegate, IDSDuetInterfaceDelegate> {

	opaque_pthread_mutex_t _listenerLock;
	NSMutableArray* _listeners;
	NSMutableArray* _listenerLocalObjects;
	NSMutableArray* _listenerIDs;
	NSMutableArray* _listenerServices;
	NSMutableArray* _listenerNotificationServices;
	NSMutableArray* _listenerCommands;
	NSMutableArray* _listenerCapabilities;
	NSMutableArray* _listenerEntitlements;
	NSMutableArray* _listenerBundleIDs;
	NSMutableDictionary* _queuedBroadcastAttempts;
	NSMutableDictionary* _urgentQueuedBroadcastAttempts;
	NSMutableDictionary* _defaultQueuedBroadcastAttempts;
	NSMutableDictionary* _syncQueuedBroadcastAttempts;
	NSMutableSet* _listenerCachedServices;
	NSMutableSet* _listenerCachedCommands;
	IMRemoteObjectBroadcaster* _notifier;
	NSDate* _birthDate;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	NSTimer* _nonUrgentInternetSendTimer;
	long long _nonUrgentInternetLastAttempt;
	IMMultiQueue* _incomingMessageMultiQueue;
	NSMutableDictionary* _pendingOutgoingAttachments;
	NSMutableDictionary* _pendingIncomingAttachments;
	opaque_pthread_mutex_t _localIncomingGUIDsLock;
	IMPair* _localIncomingGUIDs;
	IMPair* _remoteIncomingGUIDs;
	opaque_pthread_mutex_t _incomingLocalPowerAssertionLock;
	unsigned long long _incomingLocalPowerAssertionClients;
	IMPowerAssertion* _incomingLocalPowerAssertion;
	id _stateMonitor;
	BOOL _isHardReset;
	BOOL _cloudPairingBeforeFirstUnlock;
	BOOL _hasProcessedMessagesAfterFirstUnlock;
	unsigned char _deviceIsAsleep;
	FTMessageDelivery* _homeKitMessageDelivery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canBulkMessageWithPriority:(long long)arg1 adHocServiceType:(unsigned)arg2 ;
+(void)_sendMessageWithSendParameters:(id)arg1 threadContext:(id)arg2 onObject:(id)arg3 willSendBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)_sendLocalDeliveryMessagesForAccountUUID:(id)arg1 threadContext:(id)arg2 priority:(long long)arg3 dataProtectionClass:(unsigned)arg4 ;
+(void)_performDuetCheckAndSendForServiceIdentifier:(id)arg1 serviceDuetIdentifiers:(id)arg2 sendParameters:(id)arg3 logString:(id)arg4 fromQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
+(void)sendMessageWithIDSSendParameters:(id)arg1 messageContext:(id)arg2 threadContext:(id)arg3 onObject:(id)arg4 ;
+(void)logAccessWarningForAccount:(id)arg1 withService:(id)arg2 entitlement:(id)arg3 clientEntitlements:(id)arg4 logMessage:(id)arg5 ;
+(BOOL)entitlementDictionary:(id)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 forAccount:(id)arg4 shouldWarn:(BOOL)arg5 ;
+(id)sharedInstance;
-(BOOL)_checkEntitlement:(id)arg1 forAccountWithID:(id)arg2 messageContext:(id)arg3 ;
-(id)_sessionWithUniqueID:(id)arg1 messageContext:(id)arg2 requiredEntitlement:(id)arg3 ;
-(void)setupNewSessionWithConfiguration:(id)arg1 messageContext:(id)arg2 ;
-(void)cleanupSession:(id)arg1 messageContext:(id)arg2 ;
-(void)sendInvitation:(id)arg1 withOptions:(id)arg2 messageContext:(id)arg3 ;
-(void)sendInvitation:(id)arg1 withData:(id)arg2 declineOnError:(BOOL)arg3 messageContext:(id)arg4 ;
-(void)acceptInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)acceptInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)cancelInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)cancelInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)declineInvitation:(id)arg1 messageContext:(id)arg2 ;
-(void)declineInvitation:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)endSession:(id)arg1 messageContext:(id)arg2 ;
-(void)endSession:(id)arg1 withData:(id)arg2 messageContext:(id)arg3 ;
-(void)sendSessionMessage:(id)arg1 toSession:(id)arg2 messageContext:(id)arg3 ;
-(void)setAudioEnabled:(BOOL)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setMuted:(BOOL)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(id)arg2 messageContext:(id)arg3 ;
-(void)acknowledgeSessionID:(id)arg1 clientID:(id)arg2 messageContext:(id)arg3 ;
-(void)reportiMessageSpam:(id)arg1 toURI:(id)arg2 messageContext:(id)arg3 ;
-(BOOL)_checkContinuityEntitlementForMessageContext:(id)arg1 ;
-(void)continuityClientInstanceCreatedWithMessageContext:(id)arg1 ;
-(void)continuityStartAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 messageContext:(id)arg4 ;
-(void)continuityStopAdvertisingOfType:(long long)arg1 messageContext:(id)arg2 ;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 messageContext:(id)arg5 ;
-(void)continuityStartScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 messageContext:(id)arg4 ;
-(void)continuityStopScanningForType:(long long)arg1 messageContext:(id)arg2 ;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2 messageContext:(id)arg3 ;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2 messageContext:(id)arg3 ;
-(void)continuityConnectToPeer:(id)arg1 messageContext:(id)arg2 ;
-(void)continuityDisconnectFromPeer:(id)arg1 messageContext:(id)arg2 ;
-(void)_processStoredMessages;
-(void)_cleanupOutgoingMessageDatabase;
-(void)_processOutgoingNonUrgentInternetMessages;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priorities:(id)arg2 dataProtectionClasses:(id)arg3 ;
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 ;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 ;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 ;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(long long)arg7 ;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 ;
-(void)_processStoredIncomingMessages;
-(void)_processMessagesUponUnpairing;
-(void)_processDisallowedMessages;
-(void)_performDuetCheckAndSendForAccount:(id)arg1 sendParameters:(id)arg2 logString:(id)arg3 fromQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_handleSpaceBecomingAvailableForUrgentLocalMessagesWithDataProtectionClasses:(id)arg1 ;
-(void)_failSavedMessageCleanly:(id)arg1 withResponseCode:(long long)arg2 ;
-(unsigned long long)_maxOutgoingDatabasesSizeInMB;
-(BOOL)shouldIncludeDefaultDeviceAsDestinationForMessageForFromID:(id)arg1 service:(id)arg2 ;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_processLocalMessagesWithAccountUUIDs:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_nonUrgentInternetSendTimerFired;
-(long long)_currentSecondsIntoDay;
-(double)_nonUrgentInternetSendProbabilityForCurrentWindow;
-(BOOL)_hasNonUrgentInternetSendingBudget;
-(BOOL)_rollDieForNonUrgentInternetSend;
-(void)_updateNonUrgentInternetSendTimer;
-(void)_optionallyDecryptMessage:(id)arg1 encryptedData:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 allowRetry:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_sendErrorMessage:(id)arg1 fromID:(id)arg2 toDestinations:(id)arg3 usingAccountWithUniqueID:(id)arg4 useDictAsTopLevel:(BOOL)arg5 dataToEncrypt:(id)arg6 wantsResponse:(BOOL)arg7 timeout:(double)arg8 command:(id)arg9 priority:(long long)arg10 completionBlock:(/*^block*/id)arg11 ;
-(BOOL)_checkIfDupeAndNoteGuid:(id)arg1 local:(BOOL)arg2 topic:(id)arg3 ;
-(void)getLocalIncomingPowerAssertion:(id)arg1 queue:(id)arg2 ;
-(void)_processIncomingLocalMessage:(id)arg1 topic:(id)arg2 command:(id)arg3 deviceID:(id)arg4 btUUID:(id)arg5 context:(id)arg6 storedGUID:(id)arg7 priority:(id)arg8 ;
-(void)_processStoredIncomingLocalMessage:(id)arg1 ;
-(void)_processIncomingRemoteMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 storedGuid:(id)arg4 messageContext:(id)arg5 ;
-(void)_processStoredIncomingLocalMessages;
-(void)_processStoredIncomingRemoteMessagesWithGUIDs:(id)arg1 ;
-(void)_processDeletingMessagesWithPriority:(long long)arg1 reason:(id)arg2 responseCode:(long long)arg3 allowedTrafficClasses:(id)arg4 ;
-(void)_processStoredOutgoingUrgentMessagesProcessLocalAccounts:(BOOL)arg1 ;
-(id)_payloadFromDecryptedData:(id)arg1 ;
-(BOOL)_processNonMessagingPayloadWithCommand:(id)arg1 dictionaryPayload:(id)arg2 senderToken:(id)arg3 topic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 peerResponseIdentifier:(id)arg7 guid:(id)arg8 service:(id)arg9 messageContext:(id)arg10 ;
-(BOOL)shouldProxyMessageForService:(id)arg1 toIdentifier:(id)arg2 ;
-(void)_handleIncomingAttachmentMessage:(id)arg1 forTopic:(id)arg2 fromID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_enqueueBlock:(/*^block*/id)arg1 withTimeout:(double)arg2 forKey:(id)arg3 ;
-(BOOL)_isBulkingStorageMessages;
-(void)_noteLastItemFromStorage:(id)arg1 ;
-(void)_noteItemFromStorage:(id)arg1 ;
-(id)_incomingMessageStorageDictionaryForPayload:(id)arg1 topic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 command:(id)arg5 messageUUID:(id)arg6 sequenceNumber:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 ;
-(BOOL)_shouldStoreBeforeFirstUnlockIncomingLocalMessage:(id)arg1 from:(id)arg2 forTopic:(id)arg3 ;
-(void)_ackMessageWithSequenceNumber:(unsigned)arg1 forDeviceID:(id)arg2 priority:(long long)arg3 ;
-(void)sendServerMessage:(id)arg1 command:(id)arg2 usingAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)sendMessageWithSendParameters:(id)arg1 messageContext:(id)arg2 ;
-(void)setPreferInfraWiFi:(BOOL)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)setLinkPreferences:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)startOTRTest:(id)arg1 priority:(long long)arg2 messageContext:(id)arg3 ;
-(BOOL)_canBulkMessageWithParameters:(id)arg1 ;
-(void)cancelItemWithIdentifier:(id)arg1 service:(id)arg2 messageContext:(id)arg3 ;
-(void)acknowledgeOutgoingMessageWithGUID:(id)arg1 alternateCallbackID:(id)arg2 forAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)acknowledgeMessageWithStorageGUID:(id)arg1 realGUID:(id)arg2 forAccountWithUniqueID:(id)arg3 broadcastTime:(id)arg4 messageSize:(id)arg5 priority:(id)arg6 broadcastID:(long long)arg7 messageContext:(id)arg8 ;
-(void)acknowledgeMessageWithGUID:(id)arg1 forAccountWithUniqueID:(id)arg2 broadcastTime:(id)arg3 messageSize:(id)arg4 priority:(id)arg5 messageContext:(id)arg6 ;
-(void)sendAppAckWithGUID:(id)arg1 toDestination:(id)arg2 forAccountWithUniqueID:(id)arg3 messageContext:(id)arg4 ;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)_storageTimerFired;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)startLocalSetupWithMessageContext:(id)arg1 ;
-(void)localSetupCompletedWithMessageContext:(id)arg1 ;
-(void)stopLocalSetupWithMessageContext:(id)arg1 ;
-(void)localSetupUnpairWithMessageContext:(id)arg1 ;
-(void)localSetupUnpairStartWithMessageContext:(id)arg1 ;
-(void)addPairedDevice:(id)arg1 messageContext:(id)arg2 ;
-(void)connectPairedDevice:(id)arg1 messageContext:(id)arg2 ;
-(void)deletePairedDevice:(id)arg1 messageContext:(id)arg2 ;
-(void)getLocalDeviceInfoWithMessageContext:(id)arg1 ;
-(void)dropAllMessagesWithoutAnyAllowedClassifierWithMessageContext:(id)arg1 ;
-(void)getPairedDeviceInfoWithMessageContext:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 localObject:(id)arg2 requiredEntitlement:(id)arg3 ;
-(void)setupAccountWithLoginID:(id)arg1 serviceName:(id)arg2 accountType:(int)arg3 accountConfig:(id)arg4 authToken:(id)arg5 password:(id)arg6 transactionID:(id)arg7 messageContext:(id)arg8 ;
-(void)addAccountWithLoginID:(id)arg1 serviceName:(id)arg2 uniqueID:(id)arg3 accountType:(int)arg4 accountInfo:(id)arg5 messageContext:(id)arg6 ;
-(void)_removeAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_removeAndDeregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAccount:(id)arg1 withAccountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)enableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)disableAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)setLoginID:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)authTokenChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)passwordChanged:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)authenticateAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)passwordUpdatedForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 forAccount:(id)arg3 messageContext:(id)arg4 ;
-(void)validateProfileForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)addAliases:(id)arg1 toAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)removeAliases:(id)arg1 fromAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)validateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)unvalidateAliases:(id)arg1 forAccount:(id)arg2 messageContext:(id)arg3 ;
-(void)registerAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)_reregisterAndReidentify:(id)arg1 account:(id)arg2 messageContext:(id)arg3 ;
-(void)deactivateAndPurgeIdentifyForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)hardDeregisterWithMessageContext:(id)arg1 ;
-(void)kickGetDependentForAccount:(id)arg1 messageContext:(id)arg2 ;
-(void)recoverSMSSignature:(id)arg1 messageContext:(id)arg2 ;
-(void)initialLocalSyncStartedForServices:(id)arg1 messageContext:(id)arg2 ;
-(void)initialLocalSyncCompletedForServices:(id)arg1 messageContext:(id)arg2 ;
-(void)iCloudSignInWithUserName:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 messageContext:(id)arg5 ;
-(void)iCloudUpdateForUserName:(id)arg1 accountInfo:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignOutWithMessageContext:(id)arg1 ;
-(void)iCloudSignInHackWithUserName:(id)arg1 password:(id)arg2 messageContext:(id)arg3 ;
-(void)iCloudSignOutHackWithMessageContext:(id)arg1 ;
-(void)idsiCloudSignInDataMigratorForID:(id)arg1 messageContext:(id)arg2 ;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 messageContext:(id)arg3 ;
-(void)setPairedDeviceInfo:(id)arg1 messageContext:(id)arg2 ;
-(void)setAllowedTrafficClasses:(id)arg1 messageContext:(id)arg2 ;
-(void)setNSUUID:(id)arg1 onDeviceWithUniqueID:(id)arg2 forService:(id)arg3 messageContext:(id)arg4 ;
-(void)incomingAccountSyncMessage:(id)arg1 messageContext:(id)arg2 ;
-(void)rollKeysWithMessageContext:(id)arg1 ;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)homeKitGetServiceUserIDsWithMessageContext:(id)arg1 ;
-(void)homeKitGetAdminAccessTokensWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 messageContext:(id)arg4 ;
-(void)homeKitGetConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 messageContext:(id)arg4 ;
-(void)homeKitGetUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 messageContext:(id)arg5 ;
-(void)homeKitRefreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 messageContext:(id)arg4 ;
-(id)broadcasterForLocalObject:(id)arg1 messageContext:(id)arg2 ;
-(void)duetInterface:(id)arg1 resourceAvailabilityChangedForIdentifiers:(id)arg2 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 command:(id)arg3 messageContext:(id)arg4 ;
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_startPushHandlingLocked;
-(void)_postAliveNotification;
-(void)_terminate;
-(BOOL)clientAtIndex:(unsigned long long)arg1 isEntitledToAccessService:(id)arg2 forEntitlement:(id)arg3 shouldWarn:(BOOL)arg4 ;
-(void)removeListenerObject:(id)arg1 ;
-(void)_resetQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 ;
-(BOOL)_processQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 forceRetry:(BOOL)arg3 ;
-(void)_dropQueuedBroadcastsForServices:(id)arg1 priority:(long long)arg2 ;
-(void)_cleanupListenerWithPid:(int)arg1 ;
-(void)updateTopics;
-(void)_updatePushCommandsLocked;
-(void)_resetBroadcastQueuesForServices:(id)arg1 ;
-(void)_flushBroadcastQueuesForServices:(id)arg1 existingServices:(id)arg2 ;
-(id)_newSetupInfoWithContext:(id)arg1 ;
-(void)refreshBundleIDs;
-(void)validateListenerForLocalObject:(id)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(BOOL)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 forAccessToServiceWithIdentifier:(id)arg3 ;
-(void)_removeListener:(id)arg1 ;
-(void)_removeListenerObject:(id)arg1 ;
-(void)_removeLocalListenerObject:(id)arg1 ;
-(void)removeLocalListenerObject:(id)arg1 ;
-(id)_localPushTopics;
-(id)listenerForLocalObject:(id)arg1 ;
-(BOOL)_lockedRemoteObjectAtIndex:(unsigned long long)arg1 matchesService:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 ignoreService:(BOOL)arg6 useNotificationServices:(BOOL)arg7 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(BOOL)arg5 useNotificationServices:(BOOL)arg6 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(id)broadcasterForTopic:(id)arg1 entitlement:(id)arg2 messageContext:(id)arg3 ;
-(id)broadcasterForTopic:(id)arg1 ignoreServiceListener:(BOOL)arg2 messageContext:(id)arg3 ;
-(id)_lockedRemoteObjectsWithService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ignoreService:(BOOL)arg5 ;
-(id)broadcastAttemptQueueFromPriority:(int)arg1 ;
-(void)enqueueIncomingMessageBroadcast:(/*^block*/id)arg1 broadcastData:(id)arg2 forTopic:(id)arg3 entitlement:(id)arg4 command:(id)arg5 capabilities:(unsigned)arg6 messageContext:(id)arg7 ;
-(id)_lockedRemoteObjectsWithNotificationService:(id)arg1 entitlement:(id)arg2 command:(id)arg3 capabilities:(unsigned)arg4 ;
-(void)_printPriorityBroadcastQueuesForCaller:(id)arg1 priority:(long long)arg2 ;
-(void)releaseBroadcastAttemptQueue:(int)arg1 ;
-(void)_printBroadcastAttemptMapForPriority:(long long)arg1 service:(id)arg2 ;
-(void)logAccessWarningForClientAtIndex:(unsigned long long)arg1 withService:(id)arg2 entitlement:(id)arg3 logMessage:(id)arg4 ;
-(BOOL)_setupListenerConnection:(id)arg1 listenerID:(id)arg2 pid:(int)arg3 setupInfo:(id)arg4 entitlements:(id)arg5 setupResponse:(id*)arg6 ;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1 ;
-(void)dropQueuedBroadcastsForServices:(id)arg1 ;
-(BOOL)validateListenerForLocalObject:(id)arg1 ;
-(BOOL)validateListenerForLocalObject:(id)arg1 andCheckEntitlement:(id)arg2 ;
-(id)listenerWithName:(id)arg1 ;
-(void)_stopPushHandling;
-(id)broadcasterForTarget:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForEntitlement:(id)arg1 messageContext:(id)arg2 ;
-(BOOL)_lockedRemoteObjectAtIndex:(unsigned long long)arg1 matchesService:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 ;
-(id)registrationBroadcasterForTopic:(id)arg1 messageContext:(id)arg2 ;
-(id)broadcasterForTopic:(id)arg1 messageContext:(id)arg2 ;
-(void)enqueueBroadcast:(/*^block*/id)arg1 forTopic:(id)arg2 entitlement:(id)arg3 command:(id)arg4 capabilities:(unsigned)arg5 messageContext:(id)arg6 ;
-(id)dequeueBroadcastWithID:(long long)arg1 forMessageUUID:(id)arg2 service:(id)arg3 priority:(long long)arg4 ;
-(BOOL)daemonInterface:(id)arg1 shouldGrantAccessForPID:(int)arg2 auditToken:(SCD_Struct_ID17)arg3 portName:(id)arg4 listenerConnection:(id)arg5 setupInfo:(id)arg6 setupResponse:(id*)arg7 ;
-(void)setListenerServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3 messageContext:(id)arg4 ;
-(void)registerForNotificationsOnServices:(id)arg1 messageContext:(id)arg2 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 messageContext:(id)arg3 ;
-(void)openSocketWithOptions:(id)arg1 messageContext:(id)arg2 ;
-(void)closeSocketWithOptions:(id)arg1 messageContext:(id)arg2 ;
-(void)getDeliveryStatsWithMessageContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shutdown;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(id)_commands;
-(void)systemDidLock;
-(id)broadcasterWithMessageContext:(id)arg1 ;
-(id)_pushTopics;
@end

