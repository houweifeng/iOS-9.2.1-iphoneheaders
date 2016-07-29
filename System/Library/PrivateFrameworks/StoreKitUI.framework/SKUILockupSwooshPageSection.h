/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageOverlayDelegate.h>
#import <libobjc.A.dylib/SKUISwooshViewControllerDelegate.h>

@class SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUILockupSwooshViewController, SKUISwooshPageComponent, NSString;

@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate> {

	SKUILockupSwooshArtworkLoader* _artworkLoader;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIProductPageOverlayController* _overlayController;
	long long _overlaySourceIndex;
	SKUILockupSwooshViewController* _swooshViewController;

}

@property (nonatomic,readonly) SKUISwooshPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(long long)numberOfCells;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)_swooshViewController;
-(id)_artworkLoader;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2 ;
-(id)swoosh:(id)arg1 videoThumbnailForCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2 ;
-(void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2 ;
-(void)swooshDidSelectSeeAll:(id)arg1 ;
-(void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2 ;
-(void)_showProductPageForItem:(id)arg1 index:(long long)arg2 animated:(BOOL)arg3 ;
@end

