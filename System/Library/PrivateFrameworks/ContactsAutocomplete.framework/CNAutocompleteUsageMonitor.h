/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteProbeProvider;
@interface CNAutocompleteUsageMonitor : NSObject {

	id<CNAutocompleteProbeProvider> _probeProvider;

}

@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;              //@synthesize probeProvider=_probeProvider - In the implementation block
+(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(BOOL)arg4 ;
+(void)userIgnoredResultsForRequest:(id)arg1 afterDelay:(double)arg2 ;
-(id)init;
-(id)initWithProbeProvider:(id)arg1 ;
-(void)userIgnoredResultsOfBatch:(unsigned long long)arg1 forRequest:(id)arg2 afterDelay:(double)arg3 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(void)userSawResultsOfBatch:(unsigned long long)arg1 includingResultsConsideredSuggestion:(unsigned long long)arg2 forRequest:(id)arg3 ;
-(void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2 forRequest:(id)arg3 gotResultsFromDuet:(BOOL)arg4 ;
@end

