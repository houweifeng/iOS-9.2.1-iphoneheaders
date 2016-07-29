/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTask.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, NSData, __NSURLSessionLocal, NSString, NSError, NSURLRequest, NSURLResponse, NSDictionary;

@interface __NSCFURLLocalStreamTask : NSURLSessionTask {

	NSObject*<OS_dispatch_queue> _workQueue;
	BaseSocketStreamClient* _socketStreamClient;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	NSMutableArray* _pendingWork;
	NSMutableArray* _extraWork;
	BOOL _doingWorkOnThisQueue;
	NSData* _readBuffer;
	BOOL _readSignaled;
	BOOL _readEOF;
	SCD_Struct_NS30 _readError;
	NSData* _writeBuffer;
	BOOL _writeSignaled;
	BOOL _writeEOF;
	SCD_Struct_NS30 _writeError;
	long long _writeBufferAlreadyWrittenForNextWrite;
	NSMutableArray* _finalizationQueue;
	int _connectionState;
	NSMutableArray* _afterConnectQueue;
	__NSURLSessionLocal* _session;
	unsigned long long _taskIdentifier;
	long long _state;
	NSString* _taskDescription;
	NSError* _error;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	BOOL _goneSecure;
	NSObject*<OS_dispatch_source> _tickerTimeoutTimer;
	/*^block*/id _disavow;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _expectedWorkload;
	double _timeWindowDelay;
	double _timeWindowDuration;
	double startTime;
	NSString* _ledBellyServiceIdentifier;
	long long _priorityValue;
	double _loadingPriorityValue;
	NSString* _boundInterfaceIdentifier;
	BOOL _disallowCellular;
	int _networkServiceType;
	NSDictionary* _legacySocketStreamProperties;
	BOOL _betterRouteDiscovered;

}

@property (assign) unsigned long long taskIdentifier;                    //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                         //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                          //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy) NSURLResponse * response;                               //@synthesize response=_response - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                 //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;              //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (assign) long long countOfBytesReceived;                       //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                           //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long state;                                      //@synthesize state=_state - In the implementation block
@property (copy) NSString * taskDescription;                             //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (readonly) BOOL _goneSecure;                                   //@synthesize goneSecure=_goneSecure - In the implementation block
-(void)_onqueue_checkForCompletion;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_resume;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_cancel;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)_reportTimingDataToAWD;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(long long)computeAdjustedPoolPriority;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(long long)countOfBytesExpectedToReceive;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(id)initWithHost:(id)arg1 port:(long long)arg2 session:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(id)initWithNetService:(id)arg1 session:(id)arg2 disavow:(/*^block*/id)arg3 ;
-(CFDictionaryRef)_copySocketStreamProperties;
-(void)set_networkServiceType:(int)arg1 ;
-(void)set_boundInterfaceIdentifier:(id)arg1 ;
-(void)set_disallowCellular:(BOOL)arg1 ;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(void)set_timeWindowDuration:(double)arg1 ;
-(long long)_expectedWorkload;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(id)_ledBellyServiceIdentifier;
-(void)_onqueue_ioTick;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(id)_initCommonWithSession:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(void)_init_setupTimeoutTimer;
-(id)_initWithSession:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(id)_boundInterfaceIdentifier;
-(BOOL)_disallowCellular;
-(int)_networkServiceType;
-(void)adjustConditionalConnectionProperties:(CFDictionaryRef)arg1 ;
-(id)_legacySocketStreamProperties;
-(id)describePending:(id)arg1 ;
-(void)_onqueue_unscheduleStreams;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)_onqueue_scheduleStreams;
-(void)_onqueue_addBlockOpAtHead:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(id)_onqueue_errorOrCancelError;
-(void)_onqueue_closeReadOp;
-(void)_onqueue_closeWriteOp;
-(void)_onqueue_readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_onqueue_captureStreams;
-(void)_onqueue_startSecureConnection;
-(void)_onqueue_stopSecureConnection;
-(void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_onqueue_processReadWork:(id)arg1 ;
-(BOOL)_onqueue_processWriteWork:(id)arg1 ;
-(BOOL)_onqueue_shufflePendingFor:(Class)arg1 ;
-(void)_onqueue_readStreamEvent:(unsigned long long)arg1 ;
-(void)_onqueue_writeStreamEvent:(unsigned long long)arg1 ;
-(id)_initWithExistingTask:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStreams;
-(void)closeWrite;
-(void)closeRead;
-(void)startSecureConnection;
-(void)stopSecureConnection;
-(void)_onqueue_writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needServerTrust:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needClientCert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_readStream:(CFReadStreamRef)arg1 writeStreamAvailable:(CFWriteStreamRef)arg2 ;
-(void)set_legacySocketStreamProperties:(id)arg1 ;
-(BOOL)_goneSecure;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)suspend;
-(void)resume;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLRequest *)originalRequest;
-(unsigned long long)taskIdentifier;
-(void)set_ledBellyServiceIdentifier:(id)arg1 ;
-(NSError *)error;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(NSURLRequest *)currentRequest;
-(NSString *)taskDescription;
-(long long)countOfBytesReceived;
-(void)setTaskDescription:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

