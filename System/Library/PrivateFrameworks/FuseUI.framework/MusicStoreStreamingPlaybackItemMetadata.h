/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MusicStoreItemMetadataContext, MPStoreItemMetadata;

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasLoadedMediaItem;
	BOOL _isLoadingMediaItem;
	NSMutableArray* _mediaItemLoadCompletionHandlers;
	MusicStoreItemMetadataContext* _storeItemMetadataContext;
	MPStoreItemMetadata* _storeItemMetadata;

}

@property (nonatomic,retain) MusicStoreItemMetadataContext * storeItemMetadataContext; 
+(BOOL)_shouldRespectMusicCellularDataSetting;
+(BOOL)_shouldRespectStoreCellularDataSetting;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(id)artistName;
-(id)albumTitle;
-(void)_registerForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(void)_unregisterForNotificationsForStoreItemMetadataContext:(id)arg1 ;
-(MusicStoreItemMetadataContext *)storeItemMetadataContext;
-(id)albumArtistName;
-(id)_storeItemMetadata;
-(long long)albumStoreAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(id)copyrightText;
-(long long)endpointType;
-(double)expectedDuration;
-(BOOL)shouldReportPlayEventsToStore;
-(long long)storeAdamID;
-(long long)storeSubscriptionAdamID;
-(void)_storeItemMetadataContextRepresentativeMediaEntityDidChangeNotification:(id)arg1 ;
-(id)initWithStoreItemMetadataContext:(id)arg1 ;
-(BOOL)allowsAssetCaching;
-(long long)artistStoreAdamID;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStoreItemMetadataContext:(MusicStoreItemMetadataContext *)arg1 ;
@end

