/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSCache, NSURLSession, NSMapTable, NSMutableDictionary, NSString;

@interface MKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSCache* _iconCache;
	NSURLSession* _session;
	NSMapTable* _containers;
	NSMutableDictionary* _urlConnections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedImageManager;
-(id)init;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)clearImageCache;
-(void)loadAppImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadAppImageAtURL:(id)arg1 ;
@end

