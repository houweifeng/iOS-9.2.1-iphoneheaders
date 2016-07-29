/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicSplitViewController.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicSwitcherButtonContainerViewDelegate.h>
#import <libobjc.A.dylib/MusicNoContentViewDelegate.h>
#import <libobjc.A.dylib/SKUITabBarItemRootViewController.h>

@class UISwitch, UIAlertController, MusicSwitcherButtonContainerView, MusicLibraryViewController, MusicNoContentView, MusicLibraryTopBarController, MusicClientContext, NSString, SKUIClientContext;

@interface MusicLibrarySplitViewController : MusicSplitViewController <MusicClientContextConsuming, MusicSwitcherButtonContainerViewDelegate, MusicNoContentViewDelegate, SKUITabBarItemRootViewController> {

	UISwitch* _alertShowOfflineSwitch;
	UIAlertController* _filterAlertController;
	MusicSwitcherButtonContainerView* _librarySwitcherButtonContainerView;
	MusicLibraryViewController* _musicLibraryViewController;
	MusicNoContentView* _noContentView;
	BOOL _shouldShowMatchLoadingViewController;
	BOOL _shouldShowNoContentViewController;
	BOOL _shouldShowTurnOnCloudMediaSwitchInNoContentView;
	MusicLibraryTopBarController* _topBarController;
	MusicClientContext* _clientContext;

}

@property (nonatomic,readonly) MusicLibraryViewController * libraryViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLoad;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)initWithTabBarItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_musicDefaultsDidChangeNotification:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_updateInclusionOfLibrarySwitcherButtonContainerView;
-(void)_updatePrimaryWidthForTraitCollection;
-(id)selectViewConfigurationWithIdentifier:(id)arg1 ;
-(void)_updateMatchLoadingViewVisibility;
-(void)_updateNoContentViewVisibility;
-(void)_updatePrimaryViewController;
-(void)_willChangeDetailViewController:(id)arg1 ;
-(void)_setClientContextForViewController:(id)arg1 ;
-(void)_willChangePrimaryViewController:(id)arg1 ;
-(void)_handleFilterAlertControllerDismissal;
-(id)_selectViewConfiguration:(id)arg1 ;
-(void)_presentHomeSharingPicker;
-(void)_alertShowOfflineSwitchValueChangedAction:(id)arg1 ;
-(void)switcherButtonWasSelectedInContainerView:(id)arg1 ;
-(void)_delayedDismissFilterAlertController;
-(void)_updateSizeOfLibrarySwitcherButtonContainerView;
-(void)_cloudUpdateInProgressDidChangeNotification:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_handleLibraryContentQuantityDidChangeNotification:(id)arg1 ;
-(void)noContentViewDidTapButton:(id)arg1 ;
-(MusicLibraryViewController *)libraryViewController;
-(void)presentViewSwitcherSheet;
@end

