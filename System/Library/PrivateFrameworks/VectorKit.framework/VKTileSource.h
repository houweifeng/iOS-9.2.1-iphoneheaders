/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKTileSourceClient, OS_dispatch_queue;
#import <VectorKit/VectorKit-Structs.h>
@class VKTilePool, VKTileKeyMap, VKTileKeyList, VKSharedResources, NSError, GEOResourceManifestConfiguration, NSLocale, NSString, NSObject;

@interface VKTileSource : NSObject {

	id<VKTileSourceClient> _client;
	VKTilePool* _tilePool;
	VKTileKeyMap* _pendingLoads;
	VKTileKeyList* _decoding;
	VKTileKeyList* _failedTiles;
	shared_ptr<gss::StyleManager>* _styleManager;
	double _contentScale;
	VKSharedResources* _sharedResources;
	int loadingTiles;
	NSError* _recentError;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	NSString* _tileLoaderClientIdentifier;
	BOOL _preloadOnly;
	BOOL _requireWiFi;
	long long _mapType;
	NSObject*<OS_dispatch_queue> _homeQueue;

}

@property (assign,nonatomic) id<VKTileSourceClient> client;                            //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager;              //@synthesize styleManager=_styleManager - In the implementation block
@property (nonatomic,retain) VKSharedResources * sharedResources;                      //@synthesize sharedResources=_sharedResources - In the implementation block
@property (assign,nonatomic) double contentScale;                                      //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) BOOL preloadOnly;                                         //@synthesize preloadOnly=_preloadOnly - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                         //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (assign,nonatomic) long long mapType;                                        //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,readonly) long long tileSize; 
@property (nonatomic,readonly) long long minimumZoomLevel; 
@property (nonatomic,readonly) long long maximumZoomLevel; 
@property (nonatomic,readonly) BOOL minimumZoomLevelBoundsCamera; 
@property (nonatomic,readonly) BOOL maximumZoomLevelBoundsCamera; 
@property (nonatomic,readonly) DeviceRef device; 
@property (nonatomic,readonly) long long zEquivalenceClass; 
@property (nonatomic,readonly) unsigned minimumDownloadZoomLevel; 
@property (nonatomic,readonly) unsigned maximumDownloadZoomLevel; 
-(void)clearCaches;
-(void)dealloc;
-(id)init;
-(long long)tileSize;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(BOOL)requireWiFi;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(id)detailedDescription;
-(void)setClient:(id<VKTileSourceClient>)arg1 ;
-(long long)maximumZoomLevel;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(long long)minimumZoomLevel;
-(VKSharedResources *)sharedResources;
-(void)setSharedResources:(VKSharedResources *)arg1 ;
-(void)setPreloadOnly:(BOOL)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(void)didFailToLoadTileKey:(const GEOTileKey*)arg1 error:(id)arg2 ;
-(void)didFetchData:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(GEOTileKey)downloadKeyForSourceKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 ;
-(unsigned)minimumDownloadZoomLevel;
-(void)fetchTileForKey:(const VKTileKey*)arg1 ;
-(void)forceDownload;
-(VKTileKey)nativeKeyForRenderKey:(const VKTileKey*)arg1 ;
-(void)fetchedTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(BOOL)mayUseNetwork;
-(void)didFinishWithNetwork;
-(void)fetchTileForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(void)_failedToLoadSourceKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 error:(id)arg3 ;
-(BOOL)_shouldDecodeTile:(const VKTileKey*)arg1 ;
-(void)willGoToNetwork;
-(void)failedToDecodeSourceKey:(const VKTileKey*)arg1 ;
-(id)tileForSourceKey:(const VKTileKey*)arg1 renderKey:(const VKTileKey*)arg2 ;
-(void)decodeData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(BOOL)preloadOnly;
-(VKTileKey)sourceKeyForDownloadKey:(const GEOTileKey*)arg1 ;
-(unsigned)maximumDownloadZoomLevel;
-(void)tileAvailabilityChanged:(id)arg1 ;
-(void)_fetchedTile:(id)arg1 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(void)cancelDownload:(const GEOTileKey*)arg1 ;
-(id)tileLoader;
-(long long)zEquivalenceClass;
-(id)_extraInfoForPendingSourceKey:(const VKTileKey*)arg1 ;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(void)performDownload:(const GEOTileKey*)arg1 ;
-(BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2 ;
-(void)didLoadTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(void)foreachTileInPool:(/*^block*/id)arg1 ;
-(DeviceRef)device;
-(id<VKTileSourceClient>)client;
@end

