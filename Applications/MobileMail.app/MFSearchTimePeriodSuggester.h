/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFSearchSuggester.h>

@interface MFSearchTimePeriodSuggester : MFSearchSuggester
+(unsigned long long)_minimumUsefulDatePhraseLength;
+(id)_humanTimePeriodsMatchingPhrase:(id)arg1 ;
+(id)_abstractDateComponentsMatchingPhrase:(id)arg1 ;
-(id)generateSuggestionsForPhrase:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_suggestionsForPhrase:(id)arg1 ;
-(id)_suggestionsForInteger:(long long)arg1 ;
-(id)_reverseAndUniquify:(id)arg1 ;
-(id)categories;
@end

