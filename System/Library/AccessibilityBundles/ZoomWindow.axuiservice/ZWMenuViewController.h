/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZWZoomViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <ZoomWindow/ZWMenuLensEffectChooserViewControllerDelegate.h>

@protocol ZWMenuViewControllerDelegate;
@class NSArray, UITableView, NSString;

@interface ZWMenuViewController : ZWZoomViewController <UITableViewDataSource, UITableViewDelegate, ZWMenuLensEffectChooserViewControllerDelegate> {

	NSArray* _fullscreenMenuOptions;
	NSArray* _pipMenuOptions;
	BOOL _userIsInteractingWithMenu;
	id<ZWMenuViewControllerDelegate> _delegate;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<ZWMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL userIsInteractingWithMenu;                                //@synthesize userIsInteractingWithMenu=_userIsInteractingWithMenu - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)userIsInteractingWithMenu;
-(void)_reloadMenuOptions;
-(void)_invertColorsChange;
-(void)_reloadTableData;
-(void)_setBackgroundStyleWithInvertColors;
-(id)_menuOptionArray;
-(void)_handleZoomFactorSliderDidChange:(id)arg1 ;
-(void)_handleZoomFactorSliderTouchDidBegin:(id)arg1 ;
-(void)_handleZoomFactorSliderTouchDidEnd:(id)arg1 ;
-(id)_localizedTitleForMenuItemTag:(unsigned long long)arg1 ;
-(void)setUserIsInteractingWithMenu:(BOOL)arg1 ;
-(void)preferredLensModesDidChange;
-(void)standbyModeDidChange;
-(void)menuLensEffectChooserViewController:(id)arg1 didChooseLensEffect:(id)arg2 ;
-(void)_dismissLensEffectChooserViewController:(id)arg1 ;
-(void)zoomCurrentLensEffectDidChange;
-(void)setDelegate:(id<ZWMenuViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<ZWMenuViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
@end

