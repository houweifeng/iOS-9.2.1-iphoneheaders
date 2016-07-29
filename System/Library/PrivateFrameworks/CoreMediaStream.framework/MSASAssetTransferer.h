/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MMCSEngineDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, MMCSEngine, MSAlbumSharingDaemon, MSASPersonModel, MSBackoffManager, NSObject;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate> {

	BOOL _hasShutDown;
	int _maxBatchCount;
	int _maxRetryCount;
	id _delegate;
	NSString* _personID;
	MMCSEngine* _engine;
	double _maxMMCSTokenValidityTimeInterval;
	MSAlbumSharingDaemon* _daemon;
	MSASPersonModel* _model;
	MSBackoffManager* _backoffManager;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;

}

@property (assign,nonatomic,__weak) id delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * personID;                                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) MMCSEngine * engine;                                 //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) double maxMMCSTokenValidityTimeInterval;               //@synthesize maxMMCSTokenValidityTimeInterval=_maxMMCSTokenValidityTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) MSAlbumSharingDaemon * daemon;                  //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic,__weak) MSASPersonModel * model;                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) MSBackoffManager * backoffManager;              //@synthesize backoffManager=_backoffManager - In the implementation block
@property (nonatomic,copy) NSString * focusAlbumGUID;                               //@synthesize focusAlbumGUID=_focusAlbumGUID - In the implementation block
@property (nonatomic,copy) NSString * focusAssetCollectionGUID;                     //@synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID - In the implementation block
@property (assign,nonatomic) int maxBatchCount;                                     //@synthesize maxBatchCount=_maxBatchCount - In the implementation block
@property (assign,nonatomic) int maxRetryCount;                                     //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> eventQueue;               //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL hasShutDown;                                      //@synthesize hasShutDown=_hasShutDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(MSASPersonModel *)model;
-(void)setModel:(MSASPersonModel *)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(id)initWithPersonID:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)setFocusAlbumGUID:(NSString *)arg1 ;
-(void)setFocusAssetCollectionGUID:(NSString *)arg1 ;
-(void)cancelCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)focusAssetCollectionGUID;
-(id)initWithPersonID:(id)arg1 eventQueue:(id)arg2 ;
-(void)setBackoffManager:(MSBackoffManager *)arg1 ;
-(void)workQueueRetryOutstandingActivities;
-(void)setMaxBatchCount:(int)arg1 ;
-(void)setMaxRetryCount:(int)arg1 ;
-(void)setMaxMMCSTokenValidityTimeInterval:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setHasShutDown:(BOOL)arg1 ;
-(void)stopCompletionBlock:(/*^block*/id)arg1 ;
-(id)_canceledError;
-(BOOL)hasShutDown;
-(NSString *)focusAlbumGUID;
-(void)setEventQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2 ;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3 ;
-(BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2 ;
-(void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3 ;
-(void)_sendDidIdleNotification;
-(void)workQueueStop;
-(void)workQueueShutDownCompletionBlock:(/*^block*/id)arg1 ;
-(int)maxBatchCount;
-(id)_missingURLError;
-(unsigned long long)workQueueNextItemID;
-(MSBackoffManager *)backoffManager;
-(int)maxRetryCount;
-(id)_pathForPersonID:(id)arg1 ;
-(void)workQueueCancel;
-(id)_missingMMCSTokenError;
-(double)workQueueMaxMMCSTokenValidityTimeInterval;
-(id)_MMCSTokenTooOldError;
-(void)_rereadPerformanceLoggingSetting;
-(double)maxMMCSTokenValidityTimeInterval;
-(void)retryOutstandingActivities;
-(MMCSEngine *)engine;
-(MSAlbumSharingDaemon *)daemon;
-(void)setDaemon:(MSAlbumSharingDaemon *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end

