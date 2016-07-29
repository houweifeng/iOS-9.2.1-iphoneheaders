/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_io, OS_dispatch_semaphore;
@class NSInputStream, NSObject, NSFileHandle, NSString;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {

	NSInputStream* _requestBodyStream;
	NSInputStream* _initialStream;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSFileHandle* _readHandle;
	NSObject*<OS_dispatch_io> _pipeIO;
	unsigned long long _bytesRead;
	NSObject*<OS_dispatch_semaphore> _streamOpenedSema;
	BOOL _finishedOpen;
	BOOL _openedStreamDuringNeedNewBodyStream;
	BOOL _streamBased;
	/*^block*/id _streamWriteCompletion;

}

@property (getter=isStreamBased,readonly) BOOL streamBased;              //@synthesize streamBased=_streamBased - In the implementation block
@property (copy) id streamWriteCompletion;                               //@synthesize streamWriteCompletion=_streamWriteCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_needNewBodyStream:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4 ;
-(void)_onqueue_willBeRetried;
-(void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_captureStream:(id)arg1 ;
-(void)_onqueue_openStream;
-(void)_onqueue_finishStream:(BOOL)arg1 ;
-(id)streamWriteCompletion;
-(void)setStreamWriteCompletion:(id)arg1 ;
-(void)_onqueue_invokeStreamWriteCompletion;
-(void)readFromStream;
-(BOOL)isStreamBased;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
@end

