/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ondemandd/ODRDownloadRequest.h>

@interface ODRLocalRequest : ODRDownloadRequest
-(id)initWithURL:(id)arg1 destinationPath:(id)arg2 applicationBundleID:(id)arg3 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 refreshHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
@end
