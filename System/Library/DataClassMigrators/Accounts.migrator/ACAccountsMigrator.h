/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/Accounts.migrator/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface ACAccountsMigrator : DataClassMigrator
-(void)_removeMultipleTencentWeiboAccounts;
-(void)_removeAccountsPlist;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)_oldAccountsPlistPath;
-(id)dataClassName;
@end

