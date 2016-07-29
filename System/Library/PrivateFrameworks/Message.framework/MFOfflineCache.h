/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMailMessageLibrary, NSMutableArray, MFOfflineCacheReplayContext, NSString;

@interface MFOfflineCache : NSObject {

	MFMailMessageLibrary* _library;
	long long _accountLibraryID;
	NSMutableArray* _deferredOperations;
	MFOfflineCacheReplayContext* _replayContext;
	unsigned _lastTemporaryMessageID;
	BOOL _isReplaying;

}

@property (nonatomic,readonly) NSString * nextTemporaryMessageID; 
-(void)dealloc;
-(id)init;
-(void)enumerateOperationsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasDeferredOperations;
-(void)deferOperation:(id)arg1 ;
-(NSString *)nextTemporaryMessageID;
-(id)initWithLibrary:(id)arg1 account:(id)arg2 ;
-(BOOL)replayOperationsUsingBlock:(/*^block*/id)arg1 ;
-(id)selectedMailboxID;
-(id)transferFailureSnapshotForTemporaryID:(id)arg1 ;
-(id)translatedIDForTemporaryID:(id)arg1 ;
-(void)replaceTransferFailureSnapshotTemporaryID:(id)arg1 withTemporaryID:(id)arg2 ;
-(void)setTranslatedID:(id)arg1 forTemporaryID:(id)arg2 ;
-(void)setTransferFailureSnapshot:(id)arg1 forTemporaryID:(id)arg2 ;
-(void)deleteOfflineCacheData;
-(void)setSelectedMailboxID:(id)arg1 ;
-(void)_applyReplayContextTransformation:(id)arg1 ;
@end

