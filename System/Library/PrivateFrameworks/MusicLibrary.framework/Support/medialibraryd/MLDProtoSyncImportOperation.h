/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class ML3DatabaseConnection;

@interface MLDProtoSyncImportOperation : MLDImportOperation {

	unsigned _totalSyncPackageCount;
	unsigned _syncPackageNum;
	BOOL _syncSessionStarted;
	int _syncType;
	ML3DatabaseConnection* _connection;
	BOOL _isServerImport;

}
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_processSyncPackage:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processSyncHeader:(id)arg1 ;
-(BOOL)_processSyncError:(id)arg1 ;
-(BOOL)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processMediaItemOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)main;
@end

