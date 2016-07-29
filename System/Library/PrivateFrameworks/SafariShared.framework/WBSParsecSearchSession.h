/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSParsecSearchSessionDelegate;
#import <SafariShared/SafariShared-Structs.h>
@class NSMutableArray, WBSParsecSearchResultCache, WBSParsecHiddenResultInfo, NSMutableDictionary, WBSCompletionQuery, WBSParsecSearchClient, NSString, NSURLSession;

@interface WBSParsecSearchSession : NSObject {

	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _sessionStartTimestamp;
	NSMutableArray* _feedbackActions;
	WBSParsecSearchResultCache* _searchResultCache;
	BOOL _hasRespondedToCurrentQuery;
	WBSParsecHiddenResultInfo* _lastHiddenResultInfo;
	NSMutableDictionary* _searchResultIdentifierToCardFetchDispatchGroupDictionary;
	NSMutableDictionary* _searchResultIdentifierToCardFetchErrorDictionary;
	BOOL _valid;
	id<WBSParsecSearchSessionDelegate> _delegate;
	WBSCompletionQuery* _currentQuery;
	WBSParsecSearchClient* _client;
	double _uiScale;
	NSString* _connectionType;

}

@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * currentQuery;                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) WBSParsecSearchClient * client;                                  //@synthesize client=_client - In the implementation block
@property (assign,setter=setUIScale:,nonatomic) double uiScale;                               //@synthesize uiScale=_uiScale - In the implementation block
@property (nonatomic,copy) NSString * connectionType;                                         //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) NSURLSession * _urlSession; 
-(void)setDelegate:(id<WBSParsecSearchSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(BOOL)isValid;
-(void)_invalidate;
-(void)_endSession;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSString *)connectionType;
-(void)setClient:(WBSParsecSearchClient *)arg1 ;
-(double)uiScale;
-(void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2 ;
-(void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5 ;
-(void)_determineConnectionType;
-(void)_sendWarmupRequest;
-(id)_searchURLForQuery:(id)arg1 ;
-(NSURLSession *)_urlSession;
-(double)_timeToFirstByteForDataTask:(id)arg1 ;
-(void)_generateSearchFeedbackForResponse:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 error:(id)arg4 ;
-(id)_searchFallbackURLForQuery:(id)arg1 ;
-(unsigned long long)_addFeedbackAction:(id)arg1 ;
-(void)userDidSelectCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 ;
-(void)userDidEngageWithCompletionListItem:(id)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(id)arg3 ;
-(void)userDidCancelSession:(long long)arg1 ;
-(void)_addParsecAndSearchSuggestionDeltaForQuery:(id)arg1 toFeedbackDictionary:(id)arg2 ;
-(void)_addSubscriptionInformationToRequest:(id)arg1 ;
-(id)_parsecRequestForURL:(id)arg1 ;
-(id)_searchURLForQuery:(id)arg1 baseURL:(id)arg2 ;
-(id)_queryItemForInputMode;
-(id)_queryItemForUnitPreference;
-(void)_respondToCurrentQueryIfNeededWithResults:(id)arg1 ;
-(void)_generateCachedSearchFeedbackForQuery:(id)arg1 ;
-(void)_processBestResultSetOnMainThread:(id)arg1 forQuery:(id)arg2 ;
-(id)_searchRequestForQuery:(id)arg1 ;
-(BOOL)_canSendQuery;
-(void)_searchRequestFailedForQuery:(id)arg1 ;
-(void)_processSearchResponseOnMainThread:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 ;
-(void)_sendGeneratedFeedback;
-(void)_scheduleCardDetailPreFetchIfNecessary:(id)arg1 ;
-(void)fetchCardDetailsForResult:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 hiddenResultInfo:(id)arg3 ;
-(void)userDidSelectCompletionListItem:(id)arg1 ;
-(void)userDidCancelSession;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 ;
-(void)didReceiveLocalResultsForQuery:(id)arg1 ;
-(void)setUIScale:(double)arg1 ;
-(void)setCurrentQuery:(WBSCompletionQuery *)arg1 ;
-(WBSCompletionQuery *)currentQuery;
-(id)initWithClient:(id)arg1 ;
-(WBSParsecSearchClient *)client;
@end

