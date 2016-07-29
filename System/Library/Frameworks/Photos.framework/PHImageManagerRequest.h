/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset, OS_dispatch_group;
@class NSString, PLCPLDownloadContext, NSObject, PLPreheatItem;

@interface PHImageManagerRequest : NSObject {

	BOOL _cancelled;
	long long _originalImageOrientation;
	BOOL _CPLDownloadDegraded;
	BOOL _isCloudSharedAsset;
	BOOL _isPartOfBurst;
	int _requestID;
	int _registrationRefCount;
	NSString* _pathForAdjustmentFile;
	id<_PLImageLoadingAsset> _asset;
	id _domain;
	/*^block*/id _cancellationHandler;
	PLCPLDownloadContext* _CPLDownloadContext;
	NSObject*<OS_dispatch_group> _CPLDownloadWaitGroup;
	PHImageManagerRequest* _nextRequest;
	PLPreheatItem* _transientPreheatlItem;
	NSString* _assetUUID;
	long long _cloudSharedAssetPlaceholderKind;
	NSString* _debugFilename;

}

@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) int requestID;                                          //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) id<_PLImageLoadingAsset> asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id domain;                                              //@synthesize domain=_domain - In the implementation block
@property (copy) id cancellationHandler;                                               //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (assign) BOOL CPLDownloadDegraded;                                           //@synthesize CPLDownloadDegraded=_CPLDownloadDegraded - In the implementation block
@property (retain) PLCPLDownloadContext * CPLDownloadContext;                          //@synthesize CPLDownloadContext=_CPLDownloadContext - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> CPLDownloadWaitGroup;                  //@synthesize CPLDownloadWaitGroup=_CPLDownloadWaitGroup - In the implementation block
@property (nonatomic,readonly) int registrationRefCount;                               //@synthesize registrationRefCount=_registrationRefCount - In the implementation block
@property (retain) PHImageManagerRequest * nextRequest;                                //@synthesize nextRequest=_nextRequest - In the implementation block
@property (retain) PLPreheatItem * transientPreheatlItem;                              //@synthesize transientPreheatlItem=_transientPreheatlItem - In the implementation block
@property (nonatomic,readonly) NSString * assetUUID;                                   //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) NSString * pathForAdjustmentFile;                       //@synthesize pathForAdjustmentFile=_pathForAdjustmentFile - In the implementation block
@property (nonatomic,readonly) BOOL isCloudSharedAsset;                                //@synthesize isCloudSharedAsset=_isCloudSharedAsset - In the implementation block
@property (nonatomic,readonly) long long cloudSharedAssetPlaceholderKind;              //@synthesize cloudSharedAssetPlaceholderKind=_cloudSharedAssetPlaceholderKind - In the implementation block
@property (nonatomic,readonly) BOOL isPartOfBurst;                                     //@synthesize isPartOfBurst=_isPartOfBurst - In the implementation block
@property (nonatomic,readonly) NSString * debugFilename;                               //@synthesize debugFilename=_debugFilename - In the implementation block
-(id)init;
-(id)domain;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(id<_PLImageLoadingAsset>)asset;
-(BOOL)isVideo;
-(NSString *)pathForAdjustmentFile;
-(long long)originalImageOrientation;
-(NSString *)debugFilename;
-(BOOL)isPartOfBurst;
-(long long)cloudSharedAssetPlaceholderKind;
-(NSString *)assetUUID;
-(PHImageManagerRequest *)nextRequest;
-(id)initRequestWithAsset:(id)arg1 domain:(id)arg2 ;
-(void)cloneIDAndResultHandlerFromRequest:(id)arg1 ;
-(BOOL)atomicIncrementRegistrationRefCountIfZero;
-(BOOL)atomicDecrementRegistrationRefCountIfOne;
-(int)incrementRegistrationRefCount;
-(int)decrementRegistrationRefCount;
-(void)clearResultHandler;
-(BOOL)CPLDownloadDegraded;
-(void)setCPLDownloadDegraded:(BOOL)arg1 ;
-(PLCPLDownloadContext *)CPLDownloadContext;
-(void)setCPLDownloadContext:(PLCPLDownloadContext *)arg1 ;
-(NSObject*<OS_dispatch_group>)CPLDownloadWaitGroup;
-(void)setCPLDownloadWaitGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(int)registrationRefCount;
-(void)setNextRequest:(PHImageManagerRequest *)arg1 ;
-(PLPreheatItem *)transientPreheatlItem;
-(void)setTransientPreheatlItem:(PLPreheatItem *)arg1 ;
-(BOOL)isCloudSharedAsset;
-(int)requestID;
@end

