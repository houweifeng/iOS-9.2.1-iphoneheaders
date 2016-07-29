/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>

@protocol MiniMallSource;
@class MFMessageCriterion, NSMutableArray, MFSparseMutable64IndexSet, NSArray;

@interface CriterionSource : GenericSource {

	id<MiniMallSource> _source;
	MFMessageCriterion* _criterion;
	NSMutableArray* _messageInfos;
	NSMutableArray* _conversations;
	CFDictionaryRef _conversationTopMessageInfos;
	MFSparseMutable64IndexSet* _conversationHashes;
	unsigned _failedToLoadOlderMessages : 1;
	NSArray* _observationTokens;

}

@property (nonatomic,retain) MFMessageCriterion * criterion; 
+(Class)classForSourceType:(unsigned long long)arg1 ;
-(id)mailboxUids;
-(BOOL)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(BOOL)supportsSearch;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)supportsDeleteAll;
-(BOOL)supportsDeleteAllAcrossSources;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMoveAll;
-(BOOL)supportsMoveAllAcrossSources;
-(BOOL)supportsMarkAll;
-(id)accountForAutoFetch;
-(BOOL)shouldShowUnreadCount;
-(BOOL)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)_messagesCompacted:(id)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)_sourceDidReload:(id)arg1 ;
-(unsigned long long)currentFetchWindow;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)canLoadOlderMessages;
-(long long)fetchNumOlderMessages:(unsigned long long)arg1 preservingUID:(id)arg2 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)oldestKnownMessage;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)bulletinsContext;
-(unsigned long long)remoteMessageCount;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned long long)arg1 withObserver:(id)arg2 ;
-(void)moveAllMessagesWithObserver:(id)arg1 toMailbox:(id)arg2 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(BOOL)needsFetch;
-(BOOL)supportsFlagging;
-(BOOL)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(BOOL)supportsArchivingForMessageInfos:(id)arg1 ;
-(BOOL)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(BOOL)shouldThreadConversations;
-(BOOL)shouldIncludeWholeThreads;
-(BOOL)shouldPlayNewMailSound;
-(id)equivalentCriterion;
-(id)remoteIDsUsingSearchContext:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_loadMessages;
-(id)_conversations;
-(void)_forwardNotification:(id)arg1 ;
-(void)_handleSourceNotification:(id)arg1 ;
-(id)initWithSource:(id)arg1 criterion:(id)arg2 ;
-(id)loadMoreServerCriterion;
-(id)_filterMessage:(id)arg1 ;
-(void)_nts_insertMessageInfos:(id)arg1 addedMessages:(id)arg2 ;
-(CFDictionaryRef)_copyConversationTopMessageInfosForMessageInfos:(id)arg1 ;
-(id)_copyConversationHashesForMessageInfos:(id)arg1 ;
-(void)_nts_replaceIfNecessaryConversationTopMessageInfo:(id)arg1 ;
-(id)_copyCriterionForConversations:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)type;
-(BOOL)isProtectedDataAvailable;
-(void)close;
-(unsigned long long)messageCount;
-(void)open;
-(void)applyChanges;
-(id)lastViewedMessageDate;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(BOOL)shouldGrowFetchWindow;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
-(BOOL)supportsThreadOperations;
-(id)initWithSource:(id)arg1 ;
-(void)flushCaches;
-(void)registerForNotifications;
-(id)diagnosticDescription;
@end

