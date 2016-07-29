/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ServerAccounts.framework/ServerAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString, NSArray, NSURLSession, NSURLSessionDataTask, NSMutableData;

@interface SVAVerifier : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	BOOL _canceledByUser;
	NSString* _serverAddress;
	NSString* _userName;
	NSString* _password;
	NSArray* _trustedCertificates;
	NSURLSession* _session;
	NSURLSessionDataTask* _dataTask;
	NSMutableData* _responseData;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSString * serverAddress;                     //@synthesize serverAddress=_serverAddress - In the implementation block
@property (nonatomic,retain) NSString * userName;                          //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSArray * trustedCertificates;                //@synthesize trustedCertificates=_trustedCertificates - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                 //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic) BOOL canceledByUser;                          //@synthesize canceledByUser=_canceledByUser - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)userName;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)serverAddress;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(NSURLSession *)session;
-(void)setServerAddress:(NSString *)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)verifyAccount:(id)arg1 withTrustedCertificates:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setTrustedCertificates:(NSArray *)arg1 ;
-(void)setCanceledByUser:(BOOL)arg1 ;
-(NSArray *)trustedCertificates;
-(BOOL)canceledByUser;
-(id)serverAccountsErrorForURLSessionError:(id)arg1 ;
-(id)dataclassPropertiesFromProfilesDictionary:(id)arg1 ;
-(void)handleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)verifyAccount:(id)arg1 withTrustedCertificates:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

