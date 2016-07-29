/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3MusicLibrary, NSURLSession, NSObject, CloudArtworkOperationQueue, NSMutableDictionary, NSString, MSVWatchdog;

@interface CloudArtworkImporter : NSObject {

	ML3MusicLibrary* _musicLibrary;
	long long _sourceType;
	NSURLSession* _artworkDownloadSession;
	NSObject*<OS_dispatch_queue> _artworkDownloadAccessQueue;
	CloudArtworkOperationQueue* _artworkDownloadOperationQueue;
	NSMutableDictionary* _artworkDownloadOperationMap;
	NSString* _powerAssertionIdentifier;
	MSVWatchdog* _artworkDownloadWatchdog;

}

@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;                                        //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) long long sourceType;                                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSURLSession * artworkDownloadSession;                                   //@synthesize artworkDownloadSession=_artworkDownloadSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> artworkDownloadAccessQueue;                 //@synthesize artworkDownloadAccessQueue=_artworkDownloadAccessQueue - In the implementation block
@property (nonatomic,retain) CloudArtworkOperationQueue * artworkDownloadOperationQueue;              //@synthesize artworkDownloadOperationQueue=_artworkDownloadOperationQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * artworkDownloadOperationMap;                       //@synthesize artworkDownloadOperationMap=_artworkDownloadOperationMap - In the implementation block
@property (nonatomic,copy) NSString * powerAssertionIdentifier;                                       //@synthesize powerAssertionIdentifier=_powerAssertionIdentifier - In the implementation block
@property (nonatomic,retain) MSVWatchdog * artworkDownloadWatchdog;                                   //@synthesize artworkDownloadWatchdog=_artworkDownloadWatchdog - In the implementation block
-(id)initWithMusicLibrary:(id)arg1 sourceType:(long long)arg2 ;
-(void)importArtworkForCloudID:(unsigned long long)arg1 artworkType:(long long)arg2 token:(id)arg3 mediaType:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)importCloudArtworkForRequests:(id)arg1 ;
-(void)deprioritizeImportArtworkForCloudID:(unsigned long long)arg1 artworkType:(long long)arg2 ;
-(void)cancelAllImports;
-(void)setArtworkDownloadSession:(NSURLSession *)arg1 ;
-(void)setArtworkDownloadAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setArtworkDownloadOperationQueue:(CloudArtworkOperationQueue *)arg1 ;
-(CloudArtworkOperationQueue *)artworkDownloadOperationQueue;
-(void)setArtworkDownloadOperationMap:(NSMutableDictionary *)arg1 ;
-(void)setArtworkDownloadWatchdog:(MSVWatchdog *)arg1 ;
-(MSVWatchdog *)artworkDownloadWatchdog;
-(NSObject*<OS_dispatch_queue>)artworkDownloadAccessQueue;
-(void)_cellularDataRestrictionDidChange:(id)arg1 ;
-(NSMutableDictionary *)artworkDownloadOperationMap;
-(NSURLSession *)artworkDownloadSession;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)sourceType;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)powerAssertionIdentifier;
-(void)setPowerAssertionIdentifier:(NSString *)arg1 ;
@end

