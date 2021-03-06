/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicActionableHeaderViewDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicLibraryBrowseCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicVerticalScrollingContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIIndexBarControlDataSource.h>
#import <libobjc.A.dylib/SKUIIndexBarControlDelegate.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <libobjc.A.dylib/MusicSplitInitialStateProviding.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>

@protocol MusicIndexBarDataSourceMusicIndexBarScrollDelegate;
@class MusicLibraryArtistsViewConfiguration, NSMutableArray, MusicHairlineView, SKUIIndexBarControl, MusicVerticalScrollingContainerItem, UIViewController, SKUIProxyScrollView, MusicActionableHeaderView, MusicLibraryBrowseCollectionViewController, MusicLibraryViewConfiguration, MusicStandaloneShuffleViewController, MusicVerticalScrollingContainerViewController, NSArray, MusicClientContext, MusicSwitcherButtonContainerView, NSString, SKUIClientContext;

@interface MusicLibraryViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLibraryBrowseCollectionViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate, SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate, SKUIProxyScrollViewDelegate, UIViewControllerRestoration, MusicSplitInitialStateProviding, SKUITabBarItemRootViewController> {

	MusicLibraryArtistsViewConfiguration* _artistsViewConfiguration;
	NSMutableArray* _entityProviderNotificationObservers;
	BOOL _hasIndexBarEntries;
	MusicHairlineView* _hairlineView;
	SKUIIndexBarControl* _indexBarControl;
	long long _indexBarControlVisibleTransactionCount;
	MusicVerticalScrollingContainerItem* _indexBarMinimumVerticalScrollingContainerItem;
	id<MusicIndexBarDataSource><MusicIndexBarScrollDelegate> _indexBarSupportDataSource;
	double _indexBarTrailingLayoutInsetAddition;
	BOOL _isContainedWithinSplitViewPrimary;
	BOOL _isIndexBarTracking;
	BOOL _isIndexBarVisible;
	UIViewController* _libraryBrowseViewController;
	BOOL _needsIndexBarVisibilityUpdate;
	SKUIProxyScrollView* _proxyScrollView;
	UIEdgeInsets _proxyScrollViewContentInsetAdditions;
	MusicActionableHeaderView* _recentlyAddedHeaderView;
	MusicLibraryBrowseCollectionViewController* _recentlyAddedViewController;
	MusicLibraryViewConfiguration* _selectedViewConfiguration;
	BOOL _shouldAnimatePendingIndexBarVisibilityUpdate;
	MusicStandaloneShuffleViewController* _shuffleAllViewController;
	MusicVerticalScrollingContainerViewController* _verticalScrollingContainerViewController;
	NSArray* _viewConfigurations;
	MusicClientContext* _clientContext;
	MusicSwitcherButtonContainerView* _switcherButtonContainerView;

}

@property (nonatomic,copy,readonly) NSString * preferredSelectedViewIdentifier; 
@property (nonatomic,readonly) BOOL hasPopulatedViewConfiguration; 
@property (nonatomic,copy,readonly) NSArray * populatedViewConfigurations; 
@property (nonatomic,retain) MusicSwitcherButtonContainerView * switcherButtonContainerView;              //@synthesize switcherButtonContainerView=_switcherButtonContainerView - In the implementation block
@property (nonatomic,readonly) MusicLibraryViewConfiguration * selectedViewConfiguration; 
@property (nonatomic,readonly) UIViewController * selectedViewConfigurationViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)_recentlyAddedViewControllerWithClientContext:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithTabBarItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2 ;
-(id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2 ;
-(void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2 ;
-(void)indexBarControlDidSelectBeyondBottom:(id)arg1 ;
-(void)indexBarControlDidSelectBeyondTop:(id)arg1 ;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)music_viewInheritedLayoutInsetsDidChange;
-(void)verticalScrollingContainerViewControllerDidLayoutSubviews:(id)arg1 ;
-(void)verticalScrollingContainerViewControllerDidScroll:(id)arg1 ;
-(id)_verticalScrollingContainerViewController;
-(void)actionableHeaderViewDidSelectButton:(id)arg1 ;
-(NSString *)preferredSelectedViewIdentifier;
-(id)selectViewConfigurationWithIdentifier:(id)arg1 ;
-(MusicLibraryViewConfiguration *)selectedViewConfiguration;
-(id)populatedIdentifierForUserActivityContainerItemType:(long long)arg1 ;
-(NSArray *)populatedViewConfigurations;
-(id)viewConfigurationForIdentifier:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setSwitcherButtonContainerView:(MusicSwitcherButtonContainerView *)arg1 ;
-(BOOL)hasPopulatedViewConfiguration;
-(void)_updateRecentlyAddedViewMoreButton;
-(void)_recentlyAddedEntityProviderDidInvalidateNotification:(id)arg1 ;
-(void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1 ;
-(void)_musicLibraryViewControllerCommonInitialization;
-(void)_unregisterForNotificationsForIndexBarSupportDataSource:(id)arg1 ;
-(void)_unregisterEntityProviderChangeNotifications;
-(void)_indexBarControlTouchAction:(id)arg1 ;
-(void)_updateRecentlyAddedHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(BOOL)arg1 ;
-(void)_updateVerticalScrollingContainerItems;
-(id)_calculateIndexBarBackgroundColor;
-(void)_updateViewLayoutInsets;
-(void)_updateHairlineViewSize;
-(void)_updateSwitcherButtonContainerViewSize;
-(double)_calculateIndexBarControlWidth;
-(void)_updateIndexBarVisibilityAnimated:(BOOL)arg1 ;
-(void)_updateIndexBarLayoutInsetsForVisibleIndexBarControl:(BOOL)arg1 ;
-(void)_updateRecentlyAddedViewSize;
-(void)showInitialStateForSplitViewController;
-(id)_indexBarControllingScrollView;
-(BOOL)_hasContentForViewConfiguration:(id)arg1 ;
-(id)_viewConfigurations;
-(void)_switchToViewWithConfiguration:(id)arg1 ;
-(void)_updateRecentlyAddedHeaderViewSize;
-(void)_reloadIndexBarControlAnimated:(BOOL)arg1 ;
-(void)_indexBarDataSourceDidInvalidateNotification:(id)arg1 ;
-(void)_updateIndexBarSupportDataSource;
-(void)_reloadLibraryBrowseViewController;
-(void)_registerForNotificationsForIndexBarSupportDataSource:(id)arg1 ;
-(UIEdgeInsets)_calculateLayoutInsets;
-(void)_registerEntityProviderChangeNotifications;
-(UIViewController *)selectedViewConfigurationViewController;
-(void)pushMoreRecentlyAddedView;
-(MusicSwitcherButtonContainerView *)switcherButtonContainerView;
@end

