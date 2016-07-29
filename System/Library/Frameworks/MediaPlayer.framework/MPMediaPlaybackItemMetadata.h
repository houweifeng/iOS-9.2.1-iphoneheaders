/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURL, MPMediaItem, NSNumber, MPUContentItemIdentifierCollection;

@interface MPMediaPlaybackItemMetadata : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsCellularNetworking;
	BOOL _allowsInitiatingPlayWhileDownload;
	BOOL _isExplicitTrack;
	BOOL _requiresPlayWhileDownload;
	BOOL _showComposer;
	BOOL _shouldReportPlayEventsToStore;
	float _volumeNormalization;
	NSString* _albumArtistName;
	long long _albumStoreAdamID;
	NSString* _albumTitle;
	NSString* _artistName;
	long long _artistStoreAdamID;
	NSString* _buyParameters;
	NSString* _composerName;
	NSString* _contentTitle;
	unsigned long long _contentType;
	NSString* _copyrightText;
	long long _downloadIdentifier;
	long long _endpointType;
	double _expectedDuration;
	NSString* _genreTitle;
	NSURL* _localNetworkContentURL;
	MPMediaItem* _mediaItem;
	long long _mediaLibraryPersistentID;
	NSURL* _protectedContentSupportStorageURL;
	unsigned long long _storeAccountID;
	long long _storeAdamID;
	long long _storeSubscriptionAdamID;
	unsigned long long _storeSagaID;
	NSNumber* _iTunesStoreContentID;
	NSNumber* _iTunesStoreContentDSID;

}

@property (nonatomic,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection; 
@property (nonatomic,readonly) BOOL allowsCellularNetworking; 
@property (nonatomic,readonly) BOOL allowsInitiatingPlayWhileDownload;                                                //@synthesize allowsInitiatingPlayWhileDownload=_allowsInitiatingPlayWhileDownload - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumArtistName;                                                       //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,readonly) long long albumStoreAdamID;                                                            //@synthesize albumStoreAdamID=_albumStoreAdamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumTitle;                                                            //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,readonly) BOOL allowsAssetCaching; 
@property (nonatomic,copy,readonly) NSString * artistName;                                                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) long long artistStoreAdamID;                                                           //@synthesize artistStoreAdamID=_artistStoreAdamID - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters;                                                              //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerName;                                                          //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentTitle;                                                          //@synthesize contentTitle=_contentTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;                                                        //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * copyrightText;                                                         //@synthesize copyrightText=_copyrightText - In the implementation block
@property (nonatomic,readonly) long long downloadIdentifier;                                                          //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,readonly) long long endpointType;                                                                //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) double expectedDuration;                                                               //@synthesize expectedDuration=_expectedDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * genreTitle;                                                            //@synthesize genreTitle=_genreTitle - In the implementation block
@property (nonatomic,readonly) BOOL isExplicitTrack;                                                                  //@synthesize isExplicitTrack=_isExplicitTrack - In the implementation block
@property (nonatomic,readonly) long long likedState; 
@property (nonatomic,copy,readonly) NSURL * localNetworkContentURL;                                                   //@synthesize localNetworkContentURL=_localNetworkContentURL - In the implementation block
@property (nonatomic,readonly) MPMediaItem * mediaItem;                                                               //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) long long mediaLibraryPersistentID;                                                    //@synthesize mediaLibraryPersistentID=_mediaLibraryPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * protectedContentSupportStorageURL;                                        //@synthesize protectedContentSupportStorageURL=_protectedContentSupportStorageURL - In the implementation block
@property (nonatomic,readonly) BOOL requiresPlayWhileDownload;                                                        //@synthesize requiresPlayWhileDownload=_requiresPlayWhileDownload - In the implementation block
@property (nonatomic,readonly) BOOL showComposer;                                                                     //@synthesize showComposer=_showComposer - In the implementation block
@property (nonatomic,readonly) BOOL shouldReportPlayEventsToStore;                                                    //@synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                                     //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                                                                 //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) long long storeSubscriptionAdamID;                                                     //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (nonatomic,readonly) unsigned long long storeSagaID;                                                        //@synthesize storeSagaID=_storeSagaID - In the implementation block
@property (nonatomic,readonly) float volumeNormalization;                                                             //@synthesize volumeNormalization=_volumeNormalization - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreContentID;                                                  //@synthesize iTunesStoreContentID=_iTunesStoreContentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * iTunesStoreContentType; 
@property (nonatomic,copy,readonly) NSString * iTunesStoreContentDownloadParameters; 
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreContentDSID;                                                //@synthesize iTunesStoreContentDSID=_iTunesStoreContentDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * iTunesStoreContentPurchasedMediaKind; 
@property (nonatomic,copy,readonly) NSString * iTunesStoreContentUserAgent; 
+(BOOL)_shouldRespectMusicCellularDataSetting;
+(BOOL)_shouldRespectStoreCellularDataSetting;
-(MPUContentItemIdentifierCollection *)MPU_contentItemIdentifierCollection;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)contentType;
-(unsigned long long)storeSagaID;
-(unsigned long long)storeAccountID;
-(NSURL *)protectedContentSupportStorageURL;
-(long long)mediaLibraryPersistentID;
-(id)streamingPlaybackPurchaseBundleDestinationFilePathForAssetFilePath:(id)arg1 ;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(NSString *)composerName;
-(long long)downloadIdentifier;
-(NSNumber *)iTunesStoreContentID;
-(NSNumber *)iTunesStoreContentDSID;
-(NSURL *)localNetworkContentURL;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(float)volumeNormalization;
-(NSString *)genreTitle;
-(BOOL)allowsCellularNetworking;
-(BOOL)requiresPlayWhileDownload;
-(NSString *)iTunesStoreContentType;
-(NSString *)iTunesStoreContentDownloadParameters;
-(NSString *)iTunesStoreContentPurchasedMediaKind;
-(NSString *)iTunesStoreContentUserAgent;
-(void)setLikedState:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_calculateAllowsCellularNetworking;
-(void)_musicCellularNetworkingAllowedDidChangeNotification:(id)arg1 ;
-(void)_storeCellularNetworkingAllowedDidChangeNotification:(id)arg1 ;
-(void)_setNeedsAllowsCellularNetworkingUpdate;
-(void)getNetworkConstraintsForDownloadKind:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)buyParameters;
-(NSString *)artistName;
-(NSString *)albumTitle;
-(MPMediaItem *)mediaItem;
-(NSString *)albumArtistName;
-(long long)albumStoreAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(NSString *)contentTitle;
-(NSString *)copyrightText;
-(long long)endpointType;
-(double)expectedDuration;
-(BOOL)shouldReportPlayEventsToStore;
-(long long)storeAdamID;
-(long long)storeSubscriptionAdamID;
-(BOOL)allowsAssetCaching;
-(long long)artistStoreAdamID;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)showComposer;
-(long long)likedState;
-(BOOL)isExplicitTrack;
-(void)_contentTasteControllerDidChangeNotification:(id)arg1 ;
@end

