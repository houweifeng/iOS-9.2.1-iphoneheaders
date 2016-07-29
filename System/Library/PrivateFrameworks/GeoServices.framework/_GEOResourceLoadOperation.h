/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <libobjc.A.dylib/GEOResourceLoadOperation.h>

@protocol OS_dispatch_queue;
@class NSData, NSURL, NSObject, NSURLConnection, NSMutableData, NSLock, NSString;

@interface _GEOResourceLoadOperation : NSObject <NSURLConnectionDataDelegate, GEOResourceLoadOperation> {

	NSURL* _url;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURLConnection* _conn;
	NSMutableData* _data;
	BOOL _expectsPartialContent;
	NSData* _auditToken;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
-(void)cancel;
-(void)dealloc;
-(NSData *)data;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURLString:(id)arg4 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
@end

