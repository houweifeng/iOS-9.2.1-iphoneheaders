/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNAutocompleteFetchDelegate, CNScheduler;
@class CNAutocompleteQueryResponsePreparer, CNCancelationToken, CNAutocompleteUserSession, CNAutocompleteFetchRequest, NSString;

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable> {

	id<CNAutocompleteFetchDelegate> _delegate;
	id<CNScheduler> _scheduler;
	CNAutocompleteQueryResponsePreparer* _responsePreparer;
	unsigned long long _openNetworkActivityCalls;
	CNCancelationToken* _cancelationToken;
	CNAutocompleteUserSession* _userSession;
	CNAutocompleteFetchRequest* _fetchRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseScheduler;
-(void)cancel;
-(id)sortResults;
-(void)setDuetResultsFuture:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 scheduler:(id)arg4 ;
-(id)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)askDelegateToAdjustResults;
-(id)suppressResultsWithAddresses:(id)arg1 ;
-(void)queueMessageToDelegate:(/*^block*/id)arg1 ;
-(void)queueUncancelableMessageToDelegate:(/*^block*/id)arg1 ;
-(void)queueDidEndNetworkActivityMessageForFetch:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 fetchRequest:(id)arg3 ;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1 ;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1 ;
-(BOOL)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

