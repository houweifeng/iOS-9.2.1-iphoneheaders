/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileLoader : NSObject

@property (nonatomic,readonly) int memoryHits; 
@property (nonatomic,readonly) int diskHits; 
@property (nonatomic,readonly) int networkHits; 
+(void)setMemoryCacheMinCapacity:(unsigned long long)arg1 ;
+(id)sharedLoader;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)setServerProxyClass:(Class)arg1 ;
+(id)modernLoaderForTileGroupIdentifier:(unsigned)arg1 locale:(id)arg2 ;
+(id)diskCacheLocation;
+(void)useLocalLoader;
+(void)useRemoteLoader;
+(id)singletonConfiguration;
+(void)setDiskCacheLocation:(id)arg1 ;
+(id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2 ;
+(void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1 ;
+(void)setTrackUsage:(BOOL)arg1 ;
+(id)modernLoader;
+(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(void)endPreloadSession;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)openDatabase;
-(void)loadTiles:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)preloadTiles:(id)arg1 requireWiFi:(BOOL)arg2 progress:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)closeDatabase;
-(void)loadTilesFromCache:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(id)renderDataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3 ;
-(void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(/*^block*/id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)_loadTiles:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)renderDataForKey:(GEOTileKey*)arg1 ;
-(void)clearAllCaches;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE8*)arg1 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(int)memoryHits;
-(int)diskHits;
-(void)registerTileDecoder:(id)arg1 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(/*^block*/id)arg6 callback:(/*^block*/id)arg7 ;
-(void)registerTileLoader:(Class)arg1 ;
-(BOOL)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(int)networkHits;
-(void)openForClient:(id)arg1 ;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)closeForClient:(id)arg1 ;
-(void)cancelAllForClient:(id)arg1 ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(id)internalDelegateQ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3 ;
-(id)internalDelegate;
-(void)setInternalDelegate:(id)arg1 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)setInternalDelegateQ:(id)arg1 ;
@end

