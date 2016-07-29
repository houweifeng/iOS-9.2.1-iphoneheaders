/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, NSURL;

@interface HDSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	BOOL _isInTransaction;
	long long _transactionType;
	CFDictionaryRef _statementCache;
	NSMutableDictionary* _attachedDatabaseURLsByName;
	unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *> >* _activeStatements;
	BOOL _checkpointRequired;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                    //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL checkpointRequired;              //@synthesize checkpointRequired=_checkpointRequired - In the implementation block
+(id)virtualFilesystemModule;
+(BOOL)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(BOOL*)arg2 resultCode:(int*)arg3 error:(id*)arg4 ;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 resultCode:(int*)arg2 error:(id*)arg3 ;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 resultCode:(int*)arg2 error:(id*)arg3 ;
+(BOOL)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
+(BOOL)enumerateStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
+(BOOL)deleteDatabaseAtPath:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
-(NSURL *)fileURL;
-(int)open;
-(id)initWithDatabaseURL:(id)arg1 ;
-(BOOL)enumerateResultsForSQL:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 ;
-(void)_assertNoActiveStatements;
-(BOOL)executeSQL:(id)arg1 error:(id*)arg2 retryIfBusy:(BOOL)arg3 ;
-(BOOL)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)getLastErrorWithResultCode:(int)arg1 ;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 ;
-(void)resetStatement:(sqlite3_stmtRef)arg1 finalize:(BOOL)arg2 ;
-(BOOL)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id*)arg4 ;
-(BOOL)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)alterTable:(id)arg1 removeColumns:(id)arg2 renameColumns:(id)arg3 error:(id*)arg4 ;
-(BOOL)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)isDatabaseWithNameAttached:(id)arg1 ;
-(id)_schemaForDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)executeSQL:(id)arg1 argument:(id)arg2 error:(id*)arg3 ;
-(sqlite3_stmtRef)preparedStatementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id*)arg3 ;
-(long long)userVersionWithDatabaseName:(id)arg1 error:(id*)arg2 ;
-(id)lastInsertRowID;
-(BOOL)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id*)arg3 ;
-(BOOL)addColumnInTable:(id)arg1 columnSQL:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeColumnInTable:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)renameColumnInTable:(id)arg1 oldName:(id)arg2 newName:(id)arg3 error:(id*)arg4 ;
-(BOOL)dropTable:(id)arg1 error:(id*)arg2 ;
-(BOOL)renameTable:(id)arg1 newName:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertColumns:(id)arg1 fromTableNamed:(id)arg2 toTableNamed:(id)arg3 error:(id*)arg4 ;
-(BOOL)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id*)arg5 ;
-(id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id*)arg3 ;
-(BOOL)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id*)arg3 ;
-(BOOL)enableIncrementalAutovacuumWithError:(id*)arg1 ;
-(BOOL)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id*)arg2 ;
-(BOOL)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)detachDatabaseWithName:(id)arg1 error:(id*)arg2 ;
-(id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)dumpSchemaWithError:(id*)arg1 ;
-(BOOL)checkpointRequired;
-(void)setCheckpointRequired:(BOOL)arg1 ;
@end

