/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MessageAccountsMigrator.migrator/MessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ACAccountStore;

@interface MessageAccountsMigrator : DataClassMigrator {

	ACAccountStore* _accountStore;

}
-(BOOL)_removeAccounts:(id)arg1 ;
-(BOOL)removeSMTPAccountsThatShouldBeDynamic;
-(BOOL)_saveAccounts:(id)arg1 ;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
-(float)estimatedDuration;
-(id)initWithAccountStore:(id)arg1 ;
-(BOOL)performMigration;
-(id)dataClassName;
@end

