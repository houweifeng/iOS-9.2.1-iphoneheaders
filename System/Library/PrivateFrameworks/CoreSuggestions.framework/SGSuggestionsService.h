/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestionsServiceContactsProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceEventsProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceInternalProtocol.h>
#import <libobjc.A.dylib/SGSuggestionsServiceMailProtocol.h>

@protocol SGDSuggestManagerProtocol;
@class SGDaemonConnection, NSString;

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol> {

	SGDaemonConnection* _daemonConnection;
	id<SGDSuggestManagerProtocol> _managerForTesting;
	BOOL _keepDirty;
	NSString* _machServiceName;

}
+(void)initialize;
+(BOOL)isHarvestingSupported;
+(id)serviceForContacts;
+(id)wantedSearchableItemsFromItems:(id)arg1 ;
+(id)serviceForEvents;
+(id)filteredSearchableItemsFromItems:(id)arg1 ;
+(id)serviceForInternal;
+(id)serviceForMail;
-(void)dealloc;
-(id)init;
-(id)cnContactMatchesForRecordIds:(id)arg1 error:(id*)arg2 ;
-(id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contactFromRecordID:(id)arg1 error:(id*)arg2 ;
-(id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2 ;
-(id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(id)originFromRecordId:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmContactDetailRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectContactDetailRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectRecord:(id)arg1 error:(id*)arg2 ;
-(id)eventFromUniqueId:(id)arg1 error:(id*)arg2 ;
-(BOOL)confirmEventByRecordId:(id)arg1 error:(id*)arg2 ;
-(BOOL)rejectEventByRecordId:(id)arg1 error:(id*)arg2 ;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 ;
-(id)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 error:(id*)arg2 ;
-(void)setManagerForTesting:(id)arg1 ;
-(void)eventFromRecordID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectEventByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)confirmContact:(id)arg1 error:(id*)arg2 ;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)prepareForRealtimeExtraction:(id*)arg1 ;
-(void)contactFromRecordID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)drainBothQueuesCompletelyWithCompletion:(/*^block*/id)arg1 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)_addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)rejectEvent:(id)arg1 error:(id*)arg2 ;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)rejectContact:(id)arg1 error:(id*)arg2 ;
-(void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)contactMatchesOrLookupIdByEmailAddress:(id)arg1 error:(id*)arg2 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)isEnabledWithError:(id*)arg1 ;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)confirmEvent:(id)arg1 error:(id*)arg2 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)clearCachesFully:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)drainBothQueuesCompletely:(id*)arg1 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)removeAllStoredPseudoContacts:(id*)arg1 ;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1 ;
-(id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 error:(id*)arg4 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 error:(id*)arg6 ;
-(void)eventFromUniqueId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)sendRTCLogs:(id*)arg1 ;
-(id)spotlightObserver;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)confirmContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)contactMatchesByPhoneNumber:(id)arg1 ;
-(void)rejectRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)resolveFullDownloadRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearCachesFully:(BOOL)arg1 error:(id*)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 error:(id*)arg5 ;
-(void)confirmEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)contactMatchesByEmailAddress:(id)arg1 ;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)rejectContactDetailRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)rejectEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmEventByRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6 ;
-(BOOL)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1 ;
-(id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2 ;
-(id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6 ;
-(id)contactFromRecordID:(id)arg1 ;
-(id)relevantABRecordIDsWithLimit:(long long)arg1 error:(id*)arg2 ;
-(void)rejectContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)originFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)relevantABRecordIDsWithLimit:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id*)arg3 ;
-(void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)cnContactMatchesForRecordId:(id)arg1 error:(id*)arg2 ;
-(id)allContactsLimitedTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)resetConfirmationAndRejectionHistory:(id*)arg1 ;
-(id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6 ;
-(void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)addSearchableItems:(id)arg1 error:(id*)arg2 ;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)eventFromRecordID:(id)arg1 error:(id*)arg2 ;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmContactDetailRecord:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)messagesToRefreshWithError:(id*)arg1 ;
-(id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)keepDirty:(BOOL)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteSuggestionManager;
-(id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
@end

