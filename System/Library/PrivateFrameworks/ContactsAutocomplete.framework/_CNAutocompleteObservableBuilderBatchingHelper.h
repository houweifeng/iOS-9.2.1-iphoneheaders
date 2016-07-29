/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject {

	NSArray* _batches;

}

@property (nonatomic,readonly) NSArray * batches;              //@synthesize batches=_batches - In the implementation block
-(id)initWithBatchCount:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2 ;
-(NSArray *)batches;
@end

