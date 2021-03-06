/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFWeakReferenceHolder, MFSQLiteConnectionPool;

@interface MFSQLiteConnection : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	MFWeakReferenceHolder* _poolHolder;
	NSString* _databaseName;
	CFDictionaryRef _statementCache;
	void* _ICUSearchContext;
	void* _CPSearchContext;
	int _transactionType;
	unsigned long long _transactionCount;

}

@property (assign,nonatomic,__weak) MFSQLiteConnectionPool * pool; 
@property (nonatomic,readonly) sqlite3Ref db;                                   //@synthesize db=_db - In the implementation block
-(void)dealloc;
-(void)flush;
-(int)commitTransaction;
-(void)close;
-(int)open;
-(int)beginTransactionWithType:(int)arg1 ;
-(MFSQLiteConnectionPool *)pool;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(const char*)_vfsModuleName;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 ;
-(void)setPool:(MFSQLiteConnectionPool *)arg1 ;
-(int)rollbackTransaction;
-(int)beginTransaction;
-(sqlite3Ref)db;
-(BOOL)isOpen;
@end

