/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSOperationQueue, NSURLSession, DCService, NSString, NSMutableDictionary, HTTPSASLClientSessionManager;

@interface DCBackgroundSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {

	NSOperationQueue* _sessionQueue;
	NSURLSession* _backgroundSession;
	/*^block*/id _backgroundEventsCompletionHandler;
	DCService* _service;
	NSString* _bundleIdentifier;
	NSMutableDictionary* _currentTasks;
	/*^block*/id _serverRequestResponseHandler;

}

@property (nonatomic,retain) NSURLSession * backgroundSession;                                           //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (nonatomic,copy) id backgroundEventsCompletionHandler;                                         //@synthesize backgroundEventsCompletionHandler=_backgroundEventsCompletionHandler - In the implementation block
@property (nonatomic,retain) DCService * service;                                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentTasks;                                         //@synthesize currentTasks=_currentTasks - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * sessionQueue;                                          //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,copy) id serverRequestResponseHandler;                                              //@synthesize serverRequestResponseHandler=_serverRequestResponseHandler - In the implementation block
@property (nonatomic,readonly) HTTPSASLClientSessionManager * HTTPSASLClientSessionManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleIdentifierFromBackgroundSessionIdentifier:(id)arg1 ;
+(id)backgroundSessionManagerForService:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)sessionIdentifierForService:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)serviceIdentifierFromBackgroundSessionIdentifier:(id)arg1 ;
+(void)removeInvalidatedSessionForService:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(void)setService:(DCService *)arg1 ;
-(id)database;
-(DCService *)service;
-(NSOperationQueue *)sessionQueue;
-(void)setBackgroundEventsCompletionHandler:(id)arg1 ;
-(HTTPSASLClientSessionManager *)HTTPSASLClientSessionManager;
-(NSURLSession *)backgroundSession;
-(void)setServerRequest:(id)arg1 forTaskIdentifier:(long long)arg2 ;
-(void)cancelUploadWithTaskIdentifier:(long long)arg1 sessionIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleEventsForBackgroundURLSessionWithServerRequestResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithService:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)cancelUpload:(id)arg1 ;
-(void)callBackgroundEventsCompletionHandler:(id)arg1 ;
-(void)setServerRequestResponseHandler:(id)arg1 ;
-(NSMutableDictionary *)currentTasks;
-(id)serverRequestResponseHandler;
-(BOOL)cancelTaskIfNecessary:(id)arg1 ;
-(id)serverRequestForTaskIdentifier:(long long)arg1 ;
-(id)backgroundEventsCompletionHandler;
-(void)setCurrentTasks:(NSMutableDictionary *)arg1 ;
@end

