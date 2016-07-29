/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLRequest, NSURLSessionDataTask, NSURLSession, NSString;

@interface RUIHTTPRequest : NSObject <NSURLSessionTaskDelegate> {

	NSURLRequest* _request;
	NSURLSessionDataTask* _dataTask;
	NSURLSession* _urlSession;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)invalidResponseErrorWithResponse:(id)arg1 ;
+(id)serviceUnavailableError;
+(id)nonSecureConnectionNotAllowedError;
+(BOOL)anyRequestLoading;
+(id)safeBaseURL;
+(id)errorWithCode:(unsigned long long)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)_finishedLoading;
-(void)cancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)request;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)loadStatusChanged;
-(void)_preLoadCancel;
-(id)handleWillLoadRequest:(id)arg1 ;
-(void)willParseData;
-(void)didParseData;
-(void)_startedLoading;
-(void)_loadRequestMain:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(id)sessionConfiguration;
@end

