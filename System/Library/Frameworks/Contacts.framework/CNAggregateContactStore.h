/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactStore.h>

@class CNContactStore, NSArray;

@interface CNAggregateContactStore : CNContactStore {

	CNContactStore* _mainStore;
	NSArray* _contactStores;

}

@property (nonatomic,copy) NSArray * contactStores;                            //@synthesize contactStores=_contactStores - In the implementation block
@property (nonatomic,__weak,readonly) CNContactStore * mainStore; 
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(id)iOSMapper;
-(void)dealloc;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(void)setContactStores:(NSArray *)arg1 ;
-(CNContactStore *)mainStore;
-(id)_allStoreResultsWithError:(id*)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)meContactIdentifierWithError:(id*)arg1 ;
-(id)contactIdentifiersForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)initWithContactStores:(id)arg1 ;
-(BOOL)store:(id)arg1 supportsSelector:(SEL)arg2 ;
-(NSArray *)contactStores;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
@end

