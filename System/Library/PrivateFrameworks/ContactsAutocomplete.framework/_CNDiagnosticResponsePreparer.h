/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@protocol CNFuture;
@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator {

	id<CNFuture> _logFuture;

}

@property (readonly) id<CNFuture> logFuture;              //@synthesize logFuture=_logFuture - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 log:(/*^block*/id)arg3 ;
-(id<CNFuture>)logFuture;
@end

