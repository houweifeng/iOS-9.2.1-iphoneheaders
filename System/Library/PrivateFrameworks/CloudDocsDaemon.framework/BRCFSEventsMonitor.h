/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCLowDiskDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BRCFSEventsDelegate;
@class BRCAccountSession, BRCFSEventsPersistedState, NSString, NSObject, BRCRelativePath, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCLowDiskDelegate> {

	BRCAccountSession* _session;
	Ai _suspendCount;
	Ai _resetCount;
	BRCFSEventsPersistedState* _persistedState;
	NSString* _devicePath;
	NSString* _rootPathRelativeToDevice;
	NSObject*<OS_dispatch_source> _rootVnodeWatcher;
	BOOL _volumeHasLowDiskSpace;
	BOOL _volumeIsCaseSensitive;
	FSEventStreamRef _stream;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_source> _historicalEventSource;
	BRCFSEventsPersistedState* _rendezVous;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	BOOL _drainEvents;
	BRCRelativePath* _root;
	id<BRCFSEventsDelegate> _delegate;
	PQLConnection* _db;

}

@property (__weak) id<BRCFSEventsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (setter=setDB:,nonatomic,retain) PQLConnection * db;              //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) BRCRelativePath * root;                      //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) BOOL volumeIsCaseSensitive;                  //@synthesize volumeIsCaseSensitive=_volumeIsCaseSensitive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isCancelled; 
-(void)cancel;
-(void)setDelegate:(id<BRCFSEventsDelegate>)arg1 ;
-(void)dealloc;
-(id<BRCFSEventsDelegate>)delegate;
-(void)reset;
-(void)suspend;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(void)_cancel;
-(id)initWithAccountSession:(id)arg1 ;
-(BOOL)volumeIsCaseSensitive;
-(void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2 ;
-(void)setDB:(id)arg1 ;
-(BOOL)openWithRootPath:(id)arg1 error:(id*)arg2 ;
-(void)stopWatcher;
-(void)signalAfterCurrentFSEvent:(id)arg1 ;
-(void)fseventAtPath:(id)arg1 withFlags:(unsigned)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned)arg4 eventCount:(unsigned)arg5 initialScan:(BOOL)arg6 ;
-(BOOL)setUpRootAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)setUpStreamSynchronously:(BOOL)arg1 error:(id*)arg2 ;
-(void)didProcessEventID:(unsigned long long)arg1 ;
-(PQLConnection *)db;
-(void)setIsCancelled:(BOOL)arg1 ;
-(BRCRelativePath *)root;
@end

