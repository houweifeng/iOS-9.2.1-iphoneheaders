/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionStore;

@interface _CDSocialInteractionAdvisor : NSObject {

	_CDInteractionStore* _store;

}

@property (retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(_CDInteractionStore *)store;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(id)rankContacts:(id)arg1 withSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(id)adviseInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3 ;
-(void)tuneUsingSettings:(id)arg1 heartBeatHandler:(id)arg2 ;
-(id)recentPredicateForDate:(id)arg1 lambda:(float)arg2 lookAheadWeeks:(int)arg3 ;
-(id)inSeedPredicateForSeed:(id)arg1 ;
-(id)keyForModelWithSettings:(id)arg1 ;
@end

