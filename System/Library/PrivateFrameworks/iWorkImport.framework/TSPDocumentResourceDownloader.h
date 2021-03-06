/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPDocumentResourceDownloader <NSObject>
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) BOOL isEstimatedDownloadSizePrecise; 
@required
-(long long)estimatedDownloadSize;
-(BOOL)isEstimatedDownloadSizePrecise;
-(id)downloadWithDelegate:(id)arg1 description:(id)arg2;
-(void)cancelDownloads;
-(BOOL)needsDownload;

@end

