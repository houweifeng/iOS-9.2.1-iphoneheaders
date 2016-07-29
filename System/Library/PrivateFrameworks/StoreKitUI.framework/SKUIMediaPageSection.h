/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIEmbeddedMediaViewDelegate.h>

@class SKUIArtwork, SKUIEmbeddedMediaView, SKUIMediaComponent, NSString;

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate> {

	SKUIArtwork* _artwork;
	unsigned long long _artworkRequestID;
	CGSize _imageSize;
	SKUIEmbeddedMediaView* _mediaView;

}

@property (nonatomic,readonly) SKUIMediaComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(double)contentInsetAdjustmentForCollectionView:(id)arg1 ;
-(long long)defaultItemPinningStyle;
-(void)_loadImageWithReason:(long long)arg1 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2 ;
-(void)setSectionIndex:(long long)arg1 ;
@end

