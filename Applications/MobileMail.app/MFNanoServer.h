/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/NNMKSyncProviderDelegate.h>
#import <libobjc.A.dylib/MFContentProtectionObserver.h>
#import <MobileMail/MFNanoServerMessageContentLoaderDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSLock, NNMKSyncProvider, NSMutableDictionary, MFNanoServerMessageUpdater, MFNanoServerMessageSender, MFMailboxUid, NSString;

@interface MFNanoServer : NSObject <NNMKSyncProviderDelegate, MFContentProtectionObserver, MFNanoServerMessageContentLoaderDelegate> {

	NSObject*<OS_dispatch_queue> _nanoServerQueue;
	NSLock* _lock;
	NNMKSyncProvider* _syncProvider;
	NSMutableDictionary* _messageContentLoadersKeyedByMessageId;
	MFNanoServerMessageUpdater* _messageUpdater;
	MFNanoServerMessageSender* _messageSender;
	MFMailboxUid* _mailboxListeningForNotificationsTo;
	BOOL _waitingForAutoFetchDone;

}

@property (setter=_setMailboxListeningForNotificationsTo:,retain) MFMailboxUid * _mailboxListeningForNotificationsTo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_messagesAdded:(id)arg1 ;
-(id)nanoBulletinFlagsForMessageFromAccount:(id)arg1 mailboxURLString:(id)arg2 status:(unsigned long long)arg3 dateReceived:(id)arg4 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(void)_messagesCompacted:(id)arg1 ;
-(void)_conversationFlagsChanged:(id)arg1 ;
-(id)watchedMailboxes;
-(void)_handleDataProtectionStatus;
-(void)_checkIfSettingsChanged;
-(void)_settingsChanged:(id)arg1 ;
-(void)_replaceMailboxRenamedObserver;
-(void)_setMailboxListeningForNotificationsTo:(id)arg1 ;
-(MFMailboxUid *)_mailboxListeningForNotificationsTo;
-(void)_mailboxRenamed:(id)arg1 ;
-(unsigned long long)_nnmkMailItemStatusFromMSResultsStatus:(unsigned long long)arg1 ;
-(BOOL)_mailbox:(id)arg1 isOkForSyncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4 ;
-(unsigned long long)_syncedMailboxTypeFromSettingsMailbox:(id)arg1 ;
-(void)_fetchForSyncedMailboxType:(unsigned long long)arg1 syncedMailboxAccountId:(id)arg2 syncedMailboxURL:(id)arg3 conversationId:(id)arg4 growFetchWindow:(BOOL)arg5 ;
-(id)_messagesReceivedBefore:(id)arg1 count:(unsigned long long)arg2 inConversationWithId:(id)arg3 success:(BOOL*)arg4 limitDateReceived:(id)arg5 syncedMailboxType:(unsigned long long)arg6 syncedMailboxAccountId:(id)arg7 syncedMailboxURL:(id)arg8 ;
-(void)_postWatchedMailboxesChangedNotification;
-(id)_nanoMessageFromMFLibraryMessage:(id)arg1 ;
-(id)_nanoAccountFromMailAccount:(id)arg1 ;
-(void)_loadContentForLibraryMessageId:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)_cancelLoadingContentForLibraryMessageId:(id)arg1 ;
-(void)_handleAutoFetchDone:(id)arg1 ;
-(id)_nanoActiveAccounts;
-(id)_filteredMessagesArrayFromLibraryMessages:(id)arg1 syncedMailboxType:(unsigned long long)arg2 syncedMailboxAccountId:(id)arg3 syncedMailboxURL:(id)arg4 ;
-(unsigned long long)_nnmkMailItemStatusFromMFMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2 ;
-(id)_messageIdForMFLibraryMessage:(id)arg1 ;
-(id)_activeMailAccounts;
-(void)messageContentLoader:(id)arg1 receivedMailContent:(id)arg2 preview:(id)arg3 ;
-(void)messageContentLoader:(id)arg1 receivedImageAttachment:(id)arg2 contentId:(id)arg3 ;
-(void)messageContentLoaderDidFinishLoading:(id)arg1 ;
-(void)messageContentLoaderDidFailLoadingContent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_accountsChanged:(id)arg1 ;
-(void)_addObservers;
-(void)_removeObservers;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(void)syncProvider:(id)arg1 didUpdateMessagesStatus:(id)arg2 ;
-(void)syncProviderDidRequestAccounts:(id)arg1 ;
-(void)syncProvider:(id)arg1 didRequestMessagesBeforeDate:(id)arg2 count:(unsigned long long)arg3 ;
-(void)syncProvider:(id)arg1 didRequestMessagesBeforeDate:(id)arg2 count:(unsigned long long)arg3 forConversationWithId:(id)arg4 ;
-(void)syncProvider:(id)arg1 didRequestFirstMessages:(unsigned long long)arg2 ;
-(void)syncProvider:(id)arg1 didRequestContentForMessageWithId:(id)arg2 highPriority:(BOOL)arg3 ;
-(void)syncProvider:(id)arg1 didRequestStopDownloadingContentAndAttachmentsForMessageWithId:(id)arg2 ;
-(void)syncProviderDidRequestStopDownloadingAllContentAndAttachments:(id)arg1 ;
-(void)syncProviderDidRequestFetchResume:(id)arg1 ;
-(void)syncProviderDidRequestFetchManual:(id)arg1 forConversationId:(id)arg2 ;
-(void)syncProvider:(id)arg1 didRequestSendComposedMessage:(id)arg2 ;
-(void)syncProvider:(id)arg1 didRequestResendMessagesWithIds:(id)arg2 ;
-(void)syncProvider:(id)arg1 didRequestResendAccountWithId:(id)arg2 ;
-(void)syncProvider:(id)arg1 didRequestVerificationOfMessagesAndIds:(id)arg2 afterDate:(id)arg3 ;
@end

