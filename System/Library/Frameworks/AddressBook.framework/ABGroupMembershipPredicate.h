/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {

	void* _group;
	void* _store;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) void* group; 
@property (assign,nonatomic) void* store; 
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(void*)store;
-(void)setStore:(void*)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(void)setGroup:(void*)arg1 ;
-(void*)group;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
@end

