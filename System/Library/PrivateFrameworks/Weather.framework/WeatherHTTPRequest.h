/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSMutableData, NSMutableURLRequest, NSURLConnection, NSString;

@interface WeatherHTTPRequest : NSObject <NSURLConnectionDataDelegate> {

	NSMutableData* _rawData;
	NSMutableURLRequest* _request;
	NSURLConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection;
-(void)failWithError:(id)arg1 ;
-(void)request:(id)arg1 receivedResponseData:(id)arg2 ;
-(id)aggregateDictionaryDomain;
@end

