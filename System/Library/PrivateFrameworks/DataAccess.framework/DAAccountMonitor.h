/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface DAAccountMonitor : NSObject {

	NSHashTable* _accounts;
	NSObject*<OS_dispatch_queue> _accountsQueue;

}

@property (nonatomic,retain) NSHashTable * accounts;                                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountsQueue;              //@synthesize accountsQueue=_accountsQueue - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)unmonitorAccount:(id)arg1 ;
-(void)monitorAccount:(id)arg1 ;
-(void)setAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountsQueue;
-(id)monitoredAccounts;
-(NSHashTable *)accounts;
-(void)setAccounts:(NSHashTable *)arg1 ;
@end

