/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MLException.h>

@class NSError;

@interface ML3DatabaseException : MLException {

	NSError* _sqliteError;

}

@property (nonatomic,readonly) NSError * sqliteError;              //@synthesize sqliteError=_sqliteError - In the implementation block
+(id)databaseExceptionWithReason:(id)arg1 sqliteError:(id)arg2 ;
-(id)init;
-(void)raise;
-(NSError *)sqliteError;
-(id)initWithReason:(id)arg1 sqliteError:(id)arg2 ;
-(void)_SQLITE_ERROR;
-(void)_SQLITE_INTERNAL;
-(void)_SQLITE_PERM;
-(void)_SQLITE_ABORT;
-(void)_SQLITE_BUSY;
-(void)_SQLITE_LOCKED;
-(void)_SQLITE_NOMEM;
-(void)_SQLITE_READONLY;
-(void)_SQLITE_INTERRUPT;
-(void)_SQLITE_IOERR;
-(void)_SQLITE_CORRUPT;
-(void)_SQLITE_NOTFOUND;
-(void)_SQLITE_FULL;
-(void)_SQLITE_CANTOPEN;
-(void)_SQLITE_PROTOCOL;
-(void)_SQLITE_EMPTY;
-(void)_SQLITE_SCHEMA;
-(void)_SQLITE_TOOBIG;
-(void)_SQLITE_CONSTRAINT;
-(void)_SQLITE_MISMATCH;
-(void)_SQLITE_MISUSE;
-(void)_SQLITE_NOLFS;
-(void)_SQLITE_AUTH;
-(void)_SQLITE_FORMAT;
-(void)_SQLITE_RANGE;
-(void)_SQLITE_NOTADB;
-(void)_SQLITE_ROW;
-(void)_SQLITE_DONE;
@end

