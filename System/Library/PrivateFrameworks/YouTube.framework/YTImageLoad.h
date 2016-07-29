/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSURLConnection, NSMutableData, NSString;

@interface YTImageLoad : NSObject <NSURLConnectionDelegate> {

	NSURL* _URL;
	NSURLConnection* _connection;
	NSMutableData* _imageData;
	NSString* _videoID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)_createImage;
-(void)_loadFinished;
@end

