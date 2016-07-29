/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLConnection, NSOperationQueue, NSURL, NSURLRequest, NSDictionary, NSString;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {

	NSURLConnection* _connection;
	NSOperationQueue* _delegateQueue;
	NSURL* _url;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	id _delegate;
	NSDictionary* _connectionProperties;
	BOOL _connectionActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reportTimingDataToAWD;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(void)_setDelegateQueue:(id)arg1 ;
-(id)_connectionProperties;
-(void)_withConnectionAndDelegate:(/*^block*/id)arg1 ;
-(void)_withConnectionDisconnectFromConnection;
-(void)setConnectionActive:(BOOL)arg1 ;
-(void)_withActiveConnectionAndDelegate:(/*^block*/id)arg1 ;
-(BOOL)isConnectionActive;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)_withConnectionAndDelegate:(/*^block*/id)arg1 onlyActive:(BOOL)arg2 ;
-(void)dealloc;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)_invalidate;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(id)originalRequest;
-(id)currentRequest;
-(id)_timingData;
@end

