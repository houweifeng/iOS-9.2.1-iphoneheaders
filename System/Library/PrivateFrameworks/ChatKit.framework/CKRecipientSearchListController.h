/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFAutocompleteResultsTableViewController.h>
#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>
#import <libobjc.A.dylib/CKContactsSearchManagerDelegate.h>

@class NSArray, CKContactsSearchManager, IDSBatchIDQueryController, IMAccount, NSDate, NSString;

@interface CKRecipientSearchListController : MFAutocompleteResultsTableViewController <IDSBatchIDQueryControllerDelegate, CKContactsSearchManagerDelegate> {

	BOOL _smsEnabled;
	NSArray* _enteredRecipients;
	NSArray* _prefilteredRecipients;
	CKContactsSearchManager* _searchManager;
	NSArray* _searchResults;
	IDSBatchIDQueryController* _statusQueryController;
	IMAccount* _defaultiMessageAccount;
	NSDate* _idsQueryStartTime;

}

@property (assign,nonatomic) id<CKRecipientSearchListControllerDelegate> delegate; 
@property (nonatomic,retain) NSArray * enteredRecipients;                                       //@synthesize enteredRecipients=_enteredRecipients - In the implementation block
@property (nonatomic,retain) NSArray * prefilteredRecipients;                                   //@synthesize prefilteredRecipients=_prefilteredRecipients - In the implementation block
@property (assign,nonatomic) BOOL smsEnabled;                                                   //@synthesize smsEnabled=_smsEnabled - In the implementation block
@property (assign,nonatomic) BOOL suppressGroupSuggestions; 
@property (nonatomic,retain) CKContactsSearchManager * searchManager;                           //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,copy) NSArray * searchResults;                                             //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) IDSBatchIDQueryController * statusQueryController;                 //@synthesize statusQueryController=_statusQueryController - In the implementation block
@property (nonatomic,retain) IMAccount * defaultiMessageAccount;                                //@synthesize defaultiMessageAccount=_defaultiMessageAccount - In the implementation block
@property (nonatomic,retain) NSDate * idsQueryStartTime;                                        //@synthesize idsQueryStartTime=_idsQueryStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)loadView;
-(void)cancelSearch;
-(void)removeRecipient:(id)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 ;
-(void)setDefaultiMessageAccount:(IMAccount *)arg1 ;
-(char)_serviceColorForRecipients:(id)arg1 ;
-(BOOL)isSearchResultsHidden;
-(void)setSearchResults:(NSArray *)arg1 ;
-(id)_statusQueryController;
-(NSArray *)searchResults;
-(void)setIdsQueryStartTime:(NSDate *)arg1 ;
-(NSDate *)idsQueryStartTime;
-(CKContactsSearchManager *)searchManager;
-(NSArray *)enteredRecipients;
-(NSArray *)prefilteredRecipients;
-(void)setEnteredRecipients:(NSArray *)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)setSearchManager:(CKContactsSearchManager *)arg1 ;
-(BOOL)suppressGroupSuggestions;
-(void)setSuppressGroupSuggestions:(BOOL)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)smsEnabled;
-(IMAccount *)defaultiMessageAccount;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(Class)recipientTableViewCellClass;
-(BOOL)hasSearchResults;
-(void)invalidateOutstandingIDStatusRequests;
-(void)invalidateSearchManager;
-(void)setPrefilteredRecipients:(NSArray *)arg1 ;
-(void)setSmsEnabled:(BOOL)arg1 ;
-(IDSBatchIDQueryController *)statusQueryController;
-(void)setStatusQueryController:(IDSBatchIDQueryController *)arg1 ;
@end

