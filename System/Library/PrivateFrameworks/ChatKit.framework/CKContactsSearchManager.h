/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>

@protocol CKContactsSearchManagerDelegate;
@class NSArray, MFContactsSearchManager, NSMutableArray, NSNumber, NSString;

@interface CKContactsSearchManager : NSObject <MFContactsSearchConsumer> {

	BOOL _suppressGroupSuggestions;
	BOOL _biasForOutgoingInteraction;
	id<CKContactsSearchManagerDelegate> _delegate;
	NSArray* _enteredRecipients;
	MFContactsSearchManager* _searchManager;
	NSMutableArray* _searchResults;
	NSNumber* _currentSearchTaskID;
	NSString* _searchText;
	NSArray* _conversationCache;

}

@property (assign,nonatomic) id<CKContactsSearchManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * enteredRecipients;                               //@synthesize enteredRecipients=_enteredRecipients - In the implementation block
@property (assign,nonatomic) BOOL suppressGroupSuggestions;                             //@synthesize suppressGroupSuggestions=_suppressGroupSuggestions - In the implementation block
@property (assign,nonatomic) BOOL biasForOutgoingInteraction;                           //@synthesize biasForOutgoingInteraction=_biasForOutgoingInteraction - In the implementation block
@property (nonatomic,retain) MFContactsSearchManager * searchManager;                   //@synthesize searchManager=_searchManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchResults;                            //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSNumber * currentSearchTaskID;                            //@synthesize currentSearchTaskID=_currentSearchTaskID - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                     //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSArray * conversationCache;                                 //@synthesize conversationCache=_conversationCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKContactsSearchManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CKContactsSearchManagerDelegate>)delegate;
-(NSString *)searchText;
-(void)cancelSearch;
-(void)setSearchText:(NSString *)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)setSearchResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchResults;
-(MFContactsSearchManager *)searchManager;
-(NSArray *)enteredRecipients;
-(void)setEnteredRecipients:(NSArray *)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)setSearchManager:(MFContactsSearchManager *)arg1 ;
-(BOOL)suppressGroupSuggestions;
-(void)setSuppressGroupSuggestions:(BOOL)arg1 ;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBiasForOutgoingInteraction:(BOOL)arg1 ;
-(void)_generateConversationCache;
-(void)chatStateChanged:(id)arg1 ;
-(BOOL)biasForOutgoingInteraction;
-(void)setCurrentSearchTaskID:(NSNumber *)arg1 ;
-(NSNumber *)currentSearchTaskID;
-(void)setConversationCache:(NSArray *)arg1 ;
-(id)_sortResultsByDate:(id)arg1 ;
-(NSArray *)conversationCache;
-(void)_sortSearchResultsWithCoreRecentsResults:(id)arg1 displayNameMatches:(id)arg2 participantNameMatches:(id)arg3 ;
@end

