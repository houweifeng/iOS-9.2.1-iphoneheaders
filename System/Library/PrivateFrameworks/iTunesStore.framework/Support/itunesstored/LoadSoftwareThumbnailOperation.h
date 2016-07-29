/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL;

@interface LoadSoftwareThumbnailOperation : ISOperation {

	NSString* _bundleID;
	long long _downloadID;
	BOOL _storeDownload;
	NSURL* _thumbnailURL;

}

@property (getter=isStoreDownload) BOOL storeDownload; 
@property (nonatomic,copy) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long downloadID;                  //@synthesize downloadID=_downloadID - In the implementation block
-(BOOL)isStoreDownload;
-(id)initWithBundleIdentifier:(id)arg1 downloadIdentifier:(long long)arg2 thumbnailURL:(id)arg3 ;
-(id)_artworkDataWithError:(id*)arg1 ;
-(void)setStoreDownload:(BOOL)arg1 ;
-(long long)downloadID;
-(void)run;
-(NSString *)bundleID;
-(void)setDownloadID:(long long)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
@end

