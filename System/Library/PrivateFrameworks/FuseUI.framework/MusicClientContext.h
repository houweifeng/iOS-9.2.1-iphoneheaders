/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIClientContext.h>

@class SKUILocalizedStringDictionary, NSDictionary, MusicJSNativeViewEventRegistry, MusicJSNowPlayingController, MusicJSPlaybackCoordinator, MusicJSRecentStationsManager, MusicJSUserInterfaceStatusController, RadioRecentStationsController, MusicTransferAggregator;

@interface MusicClientContext : SKUIClientContext {

	SKUILocalizedStringDictionary* _localizedStrings;
	NSDictionary* _updatableLocalizedStrings;
	MusicJSNativeViewEventRegistry* _jsNativeViewEventRegistry;
	MusicJSNowPlayingController* _jsNowPlayingController;
	MusicJSPlaybackCoordinator* _jsPlaybackCoordinator;
	MusicJSRecentStationsManager* _jsRecentStationsManager;
	MusicJSUserInterfaceStatusController* _jsUserInterfaceStatusController;
	RadioRecentStationsController* _recentStationsController;
	MusicTransferAggregator* _transferAggregator;

}

@property (nonatomic,readonly) MusicJSNativeViewEventRegistry * jsNativeViewEventRegistry;                          //@synthesize jsNativeViewEventRegistry=_jsNativeViewEventRegistry - In the implementation block
@property (nonatomic,readonly) MusicJSNowPlayingController * jsNowPlayingController;                                //@synthesize jsNowPlayingController=_jsNowPlayingController - In the implementation block
@property (nonatomic,readonly) MusicJSPlaybackCoordinator * jsPlaybackCoordinator;                                  //@synthesize jsPlaybackCoordinator=_jsPlaybackCoordinator - In the implementation block
@property (nonatomic,readonly) MusicJSRecentStationsManager * jsRecentStationsManager;                              //@synthesize jsRecentStationsManager=_jsRecentStationsManager - In the implementation block
@property (nonatomic,readonly) MusicJSUserInterfaceStatusController * jsUserInterfaceStatusController;              //@synthesize jsUserInterfaceStatusController=_jsUserInterfaceStatusController - In the implementation block
@property (nonatomic,retain) RadioRecentStationsController * recentStationsController;                              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (nonatomic,retain) MusicTransferAggregator * transferAggregator;                                          //@synthesize transferAggregator=_transferAggregator - In the implementation block
+(id)_fallbackConfigurationDictionary;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg1 ;
-(id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg1 ;
-(id)documentViewControllerForTemplateViewElement:(id)arg1 ;
-(id)localizedAlertWithError:(id)arg1 ;
-(void)setUpdatableAssetController:(id)arg1 ;
-(id)modalDocumentViewControllerForDocument:(id)arg1 options:(id)arg2 ;
-(id)previewViewControllerForViewElement:(id)arg1 ;
-(Class)moviePlayerViewControllerClass;
-(RadioRecentStationsController *)recentStationsController;
-(MusicJSNativeViewEventRegistry *)jsNativeViewEventRegistry;
-(void)sendOnSubscriptionRequiredWithOptions:(id)arg1 ;
-(MusicTransferAggregator *)transferAggregator;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(id)JSONObjectForUpdatableAssetWithManifestExtraInfoKey:(id)arg1 ;
-(void)setTransferAggregator:(MusicTransferAggregator *)arg1 ;
-(void)evaluateClientJavaScriptInContext:(id)arg1 withAppContext:(id)arg2 ;
-(id)updatableLocalizedStringForKey:(id)arg1 ;
-(MusicJSNowPlayingController *)jsNowPlayingController;
-(MusicJSPlaybackCoordinator *)jsPlaybackCoordinator;
-(MusicJSRecentStationsManager *)jsRecentStationsManager;
-(MusicJSUserInterfaceStatusController *)jsUserInterfaceStatusController;
@end

