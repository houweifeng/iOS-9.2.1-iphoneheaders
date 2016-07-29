/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncEndpoint.h>
#import <libobjc.A.dylib/NNMKMessagesSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKMessageContentSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKAccountsSyncServiceServerDelegate.h>
#import <libobjc.A.dylib/NNMKFetchesSyncServiceServerDelegate.h>
#import <CompanionHealth/PSYSyncCoordinatorDelegate.h>

@protocol NNMKSyncProviderDelegate, OS_dispatch_queue;
@class NSObject, BLTPingSubscriber, PSYSyncCoordinator, NNMKDeviceSyncRegistry, NNMKMessagesSyncServiceServer, NNMKMessageContentSyncServiceServer, NNMKAccountsSyncServiceServer, NNMKFetchesSyncServiceServer, NNMKProtectedSyncServiceServer, NSString, NSDate, NSMutableSet, NSURL, NNMKPairedDeviceInfo;

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, PSYSyncCoordinatorDelegate> {

	BOOL _messagesVerificationTriggered;
	BOOL _fullSyncRecoveredInThisSession;
	BOOL _messagesQueryAvailable;
	BOOL _isFirstMessagesRequestPending;
	BOOL _trackingInitialSync;
	id<NNMKSyncProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _providerQueue;
	BLTPingSubscriber* _notificationsPingSubscriber;
	PSYSyncCoordinator* _initialSyncCoordinator;
	NNMKDeviceSyncRegistry* _pairedDeviceRegistry;
	NNMKMessagesSyncServiceServer* _messagesSyncService;
	NNMKMessageContentSyncServiceServer* _contentSyncService;
	NNMKAccountsSyncServiceServer* _accountsSyncService;
	NNMKFetchesSyncServiceServer* _fetchesSyncService;
	NNMKProtectedSyncServiceServer* _protectedSyncService;
	NSString* _pendingMoreMessagesForConversationIdRequestConversationId;
	NSDate* _pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
	NSMutableSet* _messageIdsToIgnoreStatusUpdates;
	unsigned long long _initialSyncResendInterval;
	double _initialSyncProgress;
	unsigned long long _initialSyncMessagesCount;
	NSMutableSet* _initialSyncMessageIdsToSyncContent;
	NSMutableSet* _initialSyncMessageIdsOfContentToAck;

}

@property (assign,nonatomic,__weak) id<NNMKSyncProviderDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL messagesSyncActive; 
@property (nonatomic,readonly) unsigned long long syncedMailboxType; 
@property (nonatomic,readonly) NSString * syncedMailboxAccountId; 
@property (nonatomic,readonly) NSURL * syncedMailboxURL; 
@property (nonatomic,readonly) NSString * syncedMailboxCustomName; 
@property (nonatomic,readonly) BOOL organizeByThread; 
@property (nonatomic,readonly) NNMKPairedDeviceInfo * pairedDeviceInfo; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;                                          //@synthesize providerQueue=_providerQueue - In the implementation block
@property (nonatomic,retain) BLTPingSubscriber * notificationsPingSubscriber;                                     //@synthesize notificationsPingSubscriber=_notificationsPingSubscriber - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * initialSyncCoordinator;                                         //@synthesize initialSyncCoordinator=_initialSyncCoordinator - In the implementation block
@property (nonatomic,retain) NNMKDeviceSyncRegistry * pairedDeviceRegistry;                                       //@synthesize pairedDeviceRegistry=_pairedDeviceRegistry - In the implementation block
@property (assign,nonatomic) BOOL messagesVerificationTriggered;                                                  //@synthesize messagesVerificationTriggered=_messagesVerificationTriggered - In the implementation block
@property (assign,nonatomic) BOOL fullSyncRecoveredInThisSession;                                                 //@synthesize fullSyncRecoveredInThisSession=_fullSyncRecoveredInThisSession - In the implementation block
@property (nonatomic,retain) NNMKMessagesSyncServiceServer * messagesSyncService;                                 //@synthesize messagesSyncService=_messagesSyncService - In the implementation block
@property (nonatomic,retain) NNMKMessageContentSyncServiceServer * contentSyncService;                            //@synthesize contentSyncService=_contentSyncService - In the implementation block
@property (nonatomic,retain) NNMKAccountsSyncServiceServer * accountsSyncService;                                 //@synthesize accountsSyncService=_accountsSyncService - In the implementation block
@property (nonatomic,retain) NNMKFetchesSyncServiceServer * fetchesSyncService;                                   //@synthesize fetchesSyncService=_fetchesSyncService - In the implementation block
@property (nonatomic,retain) NNMKProtectedSyncServiceServer * protectedSyncService;                               //@synthesize protectedSyncService=_protectedSyncService - In the implementation block
@property (assign,nonatomic) BOOL messagesQueryAvailable;                                                         //@synthesize messagesQueryAvailable=_messagesQueryAvailable - In the implementation block
@property (assign,nonatomic) BOOL isFirstMessagesRequestPending;                                                  //@synthesize isFirstMessagesRequestPending=_isFirstMessagesRequestPending - In the implementation block
@property (nonatomic,retain) NSString * pendingMoreMessagesForConversationIdRequestConversationId;                //@synthesize pendingMoreMessagesForConversationIdRequestConversationId=_pendingMoreMessagesForConversationIdRequestConversationId - In the implementation block
@property (nonatomic,retain) NSDate * pendingMoreMessagesForConversationIdRequestBeforeDateReceived;              //@synthesize pendingMoreMessagesForConversationIdRequestBeforeDateReceived=_pendingMoreMessagesForConversationIdRequestBeforeDateReceived - In the implementation block
@property (nonatomic,retain) NSMutableSet * messageIdsToIgnoreStatusUpdates;                                      //@synthesize messageIdsToIgnoreStatusUpdates=_messageIdsToIgnoreStatusUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long initialSyncResendInterval;                                        //@synthesize initialSyncResendInterval=_initialSyncResendInterval - In the implementation block
@property (assign,nonatomic) BOOL trackingInitialSync;                                                            //@synthesize trackingInitialSync=_trackingInitialSync - In the implementation block
@property (assign,nonatomic) double initialSyncProgress;                                                          //@synthesize initialSyncProgress=_initialSyncProgress - In the implementation block
@property (assign,nonatomic) unsigned long long initialSyncMessagesCount;                                         //@synthesize initialSyncMessagesCount=_initialSyncMessagesCount - In the implementation block
@property (nonatomic,retain) NSMutableSet * initialSyncMessageIdsToSyncContent;                                   //@synthesize initialSyncMessageIdsToSyncContent=_initialSyncMessageIdsToSyncContent - In the implementation block
@property (nonatomic,retain) NSMutableSet * initialSyncMessageIdsOfContentToAck;                                  //@synthesize initialSyncMessageIdsOfContentToAck=_initialSyncMessageIdsOfContentToAck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NNMKSyncProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<NNMKSyncProviderDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(void)resendIDSIdentifier:(id)arg1 ;
-(void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(unsigned long long)syncedMailboxType;
-(NSString *)syncedMailboxAccountId;
-(NSURL *)syncedMailboxURL;
-(NSString *)syncedMailboxCustomName;
-(BOOL)organizeByThread;
-(void)updateMessagesStatus:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2 ;
-(void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg1 ;
-(void)messagesSyncServiceServerConnectivityChanged:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg1 didNotifyProtectedChannelSupported:(id)arg2 ;
-(void)_handleDidUnpair;
-(void)_verifyPairingForcingSync:(BOOL)arg1 ;
-(void)_executePendingContentRequests;
-(void)_failPendingComposedMessages;
-(void)_checkConnectivityBasedSuspensionTimer:(BOOL)arg1 ;
-(id)_filterOutMessagesReceived:(id)arg1 byAlreadySynced:(BOOL)arg2 bySyncedMailboxType:(BOOL)arg3 ;
-(id)_messageProtobufForMessage:(id)arg1 ;
-(void)_notifyClientNotifyInitialContentSyncCompleted;
-(void)_incrementInitialSyncProgressBy:(double)arg1 ;
-(void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)_warnReceiverNeedsUnlock;
-(void)_reportInitialSyncErrorWithMessage:(id)arg1 ;
-(void)_addMessages:(id)arg1 messagesAreNew:(BOOL)arg2 loadedFromLocalStorage:(BOOL)arg3 ;
-(void)deleteMessagesWithIds:(id)arg1 ;
-(BOOL)_currentSyncedMailboxAddsDeletesMessagesByStatusUpdates;
-(BOOL)_isMessageStatusOkForCurrentSyncedMailbox:(unsigned long long)arg1 ;
-(BOOL)_isMessageOkForCurrentSyncedMailbox:(id)arg1 ;
-(void)_requestDelegateToStopDownloadingContentAndAttachmentsForMessageWithId:(id)arg1 ;
-(void)_markConversationWithId:(id)arg1 forNotify:(BOOL)arg2 ;
-(void)addMessages:(id)arg1 ;
-(BOOL)_messageHasContentCompletelySynced:(id)arg1 ;
-(void)_handleMessageCompletelySynced:(id)arg1 ;
-(void)_triggerFullMessagesSync;
-(void)_executePendingRequests;
-(void)_runSyncVerification;
-(BOOL)_isDateReceivedOkForCurrentSyncedMailbox:(id)arg1 ;
-(id)_syncedMailboxForGetters;
-(void)_storeScreenRelatedValuesForPairedDevice:(id)arg1 ;
-(void)_resendObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 idsIdentifier:(id)arg4 ;
-(void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)_handleDidSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1 ;
-(BOOL)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1 ;
-(void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1 ;
-(void)_requestDelegateToSendComposedMessage:(id)arg1 ;
-(void)_requestDelegateForFetchManualForConversationId:(id)arg1 ;
-(void)_requestDelegateForFetchResume;
-(void)_requestDelegateForMoreMessages;
-(void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2 ;
-(void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)_fastForwardToFullSyncVersion:(unsigned long long)arg1 ;
-(void)_triggerFullMessagesAndAccountsSync;
-(void)_clearForFullSyncWithAccountsSync:(BOOL)arg1 ;
-(void)_handleInitialSyncCompleted;
-(void)_handleDidPairWithNewDevice;
-(void)_requestDelegateToStopDownloadingAllContentAndAttachments;
-(void)_requestDelegateForFirstMessages;
-(id)_filterOutMessagesReceivedByDateReceived:(id)arg1 ;
-(BOOL)_willPresentNotificationForMessage:(id)arg1 ;
-(id)_bbSubsectionIdsForMessage:(id)arg1 ;
-(void)_triggerFullMessagesSyncWithAccountsSync:(BOOL)arg1 ;
-(void)_requestDelegateForAccounts;
-(void)_requestDelegateForVerificationOfMessagesAndIds:(id)arg1 afterDate:(id)arg2 ;
-(void)_executePendingResends;
-(void)_sendFirstUnsyncedAndUnrequestedContents;
-(void)_requestDelegateForResendingMessagesWithIds:(id)arg1 ;
-(void)_requestDelegateForResendingAccountWithId:(id)arg1 ;
-(void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned long long)arg2 newResendInterval:(unsigned long long)arg3 errorCode:(long long)arg4 ;
-(void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned long long)arg2 ;
-(void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(BOOL)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned long long)arg4 ;
-(void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)_resendSendingProgressForComposedMessageWithId:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)replyWithFirstMessages:(id)arg1 syncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4 syncedMailboxCustomName:(id)arg5 organizeByThread:(BOOL)arg6 ;
-(void)replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2 ;
-(void)replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2 ;
-(void)replyWithMessagesFailedDueToDataProtectedForDateReceivedBefore:(id)arg1 conversationId:(id)arg2 ;
-(void)replyWithAccounts:(id)arg1 ;
-(void)replyWithMessagesToResend:(id)arg1 ;
-(void)replyWithAccountToResend:(id)arg1 ;
-(void)replyWithVerificationResultsMessagesMissing:(id)arg1 messagesWithDifferentStatus:(id)arg2 extraMessageIds:(id)arg3 ;
-(void)replyWithMessageSendingProgress:(long long)arg1 forComposedMessageId:(id)arg2 ;
-(void)markConversationIdForNotify:(id)arg1 messages:(id)arg2 ;
-(void)markConversationIdForNotNotify:(id)arg1 ;
-(void)addMessageContent:(id)arg1 preview:(id)arg2 ;
-(void)reportMessageContentDownloadFailureForMessageId:(id)arg1 ;
-(void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 ;
-(void)addUpdateOrDeleteAccounts:(id)arg1 ;
-(void)notifyMessagesQueryUnavailable;
-(void)notifyMessagesQueryAvailable;
-(void)notifySyncedMailboxChanged;
-(void)notifyOrganizeByThreadChanged;
-(void)notifyFetchManualCompleted;
-(id)bulletinFlagsForMessageStatus:(unsigned long long)arg1 dateReceived:(id)arg2 messageWillBeAddedToSyncProvider:(BOOL)arg3 ;
-(BOOL)messagesSyncActive;
-(NNMKPairedDeviceInfo *)pairedDeviceInfo;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BLTPingSubscriber *)notificationsPingSubscriber;
-(void)setNotificationsPingSubscriber:(BLTPingSubscriber *)arg1 ;
-(PSYSyncCoordinator *)initialSyncCoordinator;
-(void)setInitialSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(NNMKDeviceSyncRegistry *)pairedDeviceRegistry;
-(void)setPairedDeviceRegistry:(NNMKDeviceSyncRegistry *)arg1 ;
-(BOOL)messagesVerificationTriggered;
-(void)setMessagesVerificationTriggered:(BOOL)arg1 ;
-(BOOL)fullSyncRecoveredInThisSession;
-(void)setFullSyncRecoveredInThisSession:(BOOL)arg1 ;
-(NNMKMessagesSyncServiceServer *)messagesSyncService;
-(void)setMessagesSyncService:(NNMKMessagesSyncServiceServer *)arg1 ;
-(NNMKMessageContentSyncServiceServer *)contentSyncService;
-(void)setContentSyncService:(NNMKMessageContentSyncServiceServer *)arg1 ;
-(NNMKAccountsSyncServiceServer *)accountsSyncService;
-(void)setAccountsSyncService:(NNMKAccountsSyncServiceServer *)arg1 ;
-(NNMKFetchesSyncServiceServer *)fetchesSyncService;
-(void)setFetchesSyncService:(NNMKFetchesSyncServiceServer *)arg1 ;
-(NNMKProtectedSyncServiceServer *)protectedSyncService;
-(void)setProtectedSyncService:(NNMKProtectedSyncServiceServer *)arg1 ;
-(BOOL)messagesQueryAvailable;
-(void)setMessagesQueryAvailable:(BOOL)arg1 ;
-(BOOL)isFirstMessagesRequestPending;
-(void)setIsFirstMessagesRequestPending:(BOOL)arg1 ;
-(NSString *)pendingMoreMessagesForConversationIdRequestConversationId;
-(void)setPendingMoreMessagesForConversationIdRequestConversationId:(NSString *)arg1 ;
-(NSDate *)pendingMoreMessagesForConversationIdRequestBeforeDateReceived;
-(void)setPendingMoreMessagesForConversationIdRequestBeforeDateReceived:(NSDate *)arg1 ;
-(NSMutableSet *)messageIdsToIgnoreStatusUpdates;
-(void)setMessageIdsToIgnoreStatusUpdates:(NSMutableSet *)arg1 ;
-(unsigned long long)initialSyncResendInterval;
-(void)setInitialSyncResendInterval:(unsigned long long)arg1 ;
-(BOOL)trackingInitialSync;
-(void)setTrackingInitialSync:(BOOL)arg1 ;
-(double)initialSyncProgress;
-(void)setInitialSyncProgress:(double)arg1 ;
-(unsigned long long)initialSyncMessagesCount;
-(void)setInitialSyncMessagesCount:(unsigned long long)arg1 ;
-(NSMutableSet *)initialSyncMessageIdsToSyncContent;
-(void)setInitialSyncMessageIdsToSyncContent:(NSMutableSet *)arg1 ;
-(NSMutableSet *)initialSyncMessageIdsOfContentToAck;
-(void)setInitialSyncMessageIdsOfContentToAck:(NSMutableSet *)arg1 ;
@end

