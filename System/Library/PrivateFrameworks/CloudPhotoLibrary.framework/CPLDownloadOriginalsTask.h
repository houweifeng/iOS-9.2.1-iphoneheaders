/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportResourceDownloadTask;
@class NSMutableArray, NSObject, NSMutableDictionary, NSProgress, NSString, NSURL, NSArray;

@interface CPLDownloadOriginalsTask : CPLEngineSyncEmergencyTask {

	NSMutableArray* _cloudResources;
	NSMutableArray* _failedIdentifiers;
	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportResourceDownloadTask> _downloadTask;
	NSMutableDictionary* _cloudIdentifierForLocalIdentifier;
	NSProgress* _progress;
	NSString* _typeIdentifier;
	NSString* _progressIdentifier;
	NSURL* _destinationURL;
	NSArray* _localIdentifiers;

}

@property (nonatomic,copy) NSString * typeIdentifier;                    //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * progressIdentifier;                //@synthesize progressIdentifier=_progressIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                       //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,copy) NSArray * localIdentifiers;                   //@synthesize localIdentifiers=_localIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * failedIdentifiers;              //@synthesize failedIdentifiers=_failedIdentifiers - In the implementation block
+(BOOL)shouldCoalesceTasks;
+(id)taskIdentifier;
-(void)launch;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)priority;
-(NSString *)typeIdentifier;
-(void)taskDidFinishWithError:(id)arg1 ;
-(BOOL)shouldStopSyncSession;
-(void)_downloadNextResource;
-(void)_filterCloudCache;
-(NSString *)progressIdentifier;
-(void)setProgressIdentifier:(NSString *)arg1 ;
-(NSArray *)localIdentifiers;
-(void)setLocalIdentifiers:(NSArray *)arg1 ;
-(NSArray *)failedIdentifiers;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
@end

