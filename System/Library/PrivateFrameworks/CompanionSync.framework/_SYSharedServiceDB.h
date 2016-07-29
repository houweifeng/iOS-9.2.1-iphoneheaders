/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@interface _SYSharedServiceDB : NSObject {

	os_lock_handoff_s* _lock;
	sqlite3Ref _db;

}
+(id)sharedInstanceForServiceName:(id)arg1 ;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(BOOL)_createOrOpenDBForServiceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)_LOCKED_hasSchemaVersionForClient:(id)arg1 ;
-(long long)_LOCKED_getClientVersion:(id)arg1 ;
-(void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2 ;
-(void)withDBRef:(/*^block*/id)arg1 ;
-(BOOL)_ensureParentExists:(id)arg1 error:(id*)arg2 ;
-(void)_ensureSchemaVersionsTable;
-(BOOL)_runTransactionBlock:(/*^block*/id)arg1 exclusive:(BOOL)arg2 ;
-(long long)schemaVersionForClient:(id)arg1 ;
-(void)setSchemaVersion:(long long)arg1 forClient:(id)arg2 ;
-(void)updateSchemaForClient:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)inTransaction:(/*^block*/id)arg1 ;
-(BOOL)inExclusiveTransaction:(/*^block*/id)arg1 ;
@end

