/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSString;

@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation <ISStoreURLOperationDelegate> {

	MicroPaymentQueueRequest* _request;
	MicroPaymentQueueResponse* _response;
	NSString* _urlBagKey;

}

@property (copy) MicroPaymentQueueRequest * request;                  //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                              //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (retain) MicroPaymentQueueResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_loadResponseReturningError:(id*)arg1 ;
-(BOOL)_parsePropertyList:(id)arg1 error:(id*)arg2 ;
-(BOOL)_appendRangeRequestsToResponse:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(MicroPaymentQueueRequest *)request;
-(void)run;
-(MicroPaymentQueueResponse *)response;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(void)setResponse:(MicroPaymentQueueResponse *)arg1 ;
-(NSString *)URLBagKey;
-(void)setURLBagKey:(NSString *)arg1 ;
@end

