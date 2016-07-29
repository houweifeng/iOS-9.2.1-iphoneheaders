/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaFeeder.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PHFetchResult, PHAssetCollection, PHFetchOptions, NSString, NSDictionary, NSArray;

@interface OKMediaFeederPhotoKit : OKMediaFeeder <PHPhotoLibraryChangeObserver> {

	unsigned long long _type;
	PHFetchResult* _fetchResult;
	PHAssetCollection* _assetCollection;
	PHFetchOptions* _options;
	NSString* _collectionIdentifier;
	NSDictionary* _predicate;
	NSArray* _sortDescriptors;

}

@property (retain) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (retain) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (retain) PHFetchOptions * options;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaFeederWithFetchResult:(id)arg1 ;
+(id)supportedSettings;
+(BOOL)isRemote;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
+(id)mediaFeederWithAllAssetsWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(void)setOptions:(PHFetchOptions *)arg1 ;
-(PHFetchOptions *)options;
-(PHAssetCollection *)assetCollection;
-(void)photoLibraryDidChange:(id)arg1 ;
-(PHFetchResult *)fetchResult;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(id)initWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
-(id)initWithAllAssetsWithOptions:(id)arg1 ;
-(id)initWithFetchResult:(id)arg1 ;
@end

