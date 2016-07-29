/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSURL, NSObject, NSString, NSError;

@interface WBSSQLiteDatabase : NSObject {

	NSURL* _url;
	sqlite3Ref _handle;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) sqlite3Ref handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) int lastErrorCode; 
@property (nonatomic,readonly) NSString * lastErrorMessage; 
@property (nonatomic,readonly) NSError * lastError; 
@property (nonatomic,readonly) long long lastInsertRowID; 
@property (nonatomic,readonly) long long changedRowCount; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)writeAheadLogURLForDatabaseURL:(id)arg1 ;
+(id)_errorWithErrorCode:(int)arg1 ;
+(id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1 ;
-(void)dealloc;
-(int)close;
-(int)executeQuery:(id)arg1 ;
-(id)initWithURL:(id)arg1 queue:(id)arg2 ;
-(BOOL)openWithAccessType:(long long)arg1 error:(id*)arg2 ;
-(NSError *)lastError;
-(NSString *)lastErrorMessage;
-(id)fetchQuery:(id)arg1 ;
-(long long)changedRowCount;
-(int)checkpointWriteAheadLogWithLogFrameCount:(int*)arg1 checkpointedFrameCount:(int*)arg2 ;
-(BOOL)_openWithFlags:(int)arg1 error:(id*)arg2 ;
-(int)lastErrorCode;
-(sqlite3Ref)handle;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)lastInsertRowID;
@end

