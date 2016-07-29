/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CloudArtistHeroImageImporter;

@interface ArtistImageRequestHandler : NSObject {

	CloudArtistHeroImageImporter* _importer;

}
+(id)handler;
-(void)updateArtistHeroImagesForArtistsAddedSinceLastUpdate;
-(id)init;
-(id)_init;
-(void)cancelAllOperations;
-(void)updateArtistHeroImages;
-(void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 ;
-(void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 ;
@end

