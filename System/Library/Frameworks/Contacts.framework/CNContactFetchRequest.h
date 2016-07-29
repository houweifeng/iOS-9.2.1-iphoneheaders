/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSPredicate, NSArray;

@interface CNContactFetchRequest : NSObject {

	BOOL rankSort;
	BOOL _mutableObjects;
	BOOL _unifyResults;
	BOOL _onlyMainStore;
	NSPredicate* _predicate;
	NSArray* _keysToFetch;
	long long _sortOrder;

}

@property (nonatomic,copy) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * keysToFetch;                //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                  //@synthesize unifyResults=_unifyResults - In the implementation block
@property (assign,nonatomic) long long sortOrder;                //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL rankSort; 
@property (assign,nonatomic) BOOL onlyMainStore;                 //@synthesize onlyMainStore=_onlyMainStore - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSortOrder:(long long)arg1 ;
-(long long)sortOrder;
-(BOOL)onlyMainStore;
-(BOOL)unifyResults;
-(id)effectiveKeysToFetch;
-(BOOL)mutableObjects;
-(void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2 ;
-(BOOL)rankSort;
-(void)setMutableObjects:(BOOL)arg1 ;
-(void)setOnlyMainStore:(BOOL)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(void)setRankSort:(BOOL)arg1 ;
-(id)initWithKeysToFetch:(id)arg1 ;
@end

