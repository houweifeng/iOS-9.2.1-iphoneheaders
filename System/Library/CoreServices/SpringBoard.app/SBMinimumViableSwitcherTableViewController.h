/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewController.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <SpringBoard/SBMainAppSwitcherContentViewControlling.h>

@protocol SBMainAppSwitcherContentViewControllerDelegate;
@class NSMutableArray, SBAppView, _UILegibilitySettings, SBDisplayItem, SBMainDisplayLayoutState, SBBestAppSuggestion, NSArray, NSString;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling> {

	NSMutableArray* _displayItems;
	id<SBMainAppSwitcherContentViewControllerDelegate> _delegate;
	SBAppView* _temporaryAppView;
	SBAppView* _temporarySideAppView;
	_UILegibilitySettings* _legibilitySettings;
	SBDisplayItem* _returnToDisplayItem;
	SBDisplayItem* _initialDisplayItem;
	SBDisplayItem* _returnToSideDisplayItem;
	SBMainDisplayLayoutState* _initialLayoutState;
	SBBestAppSuggestion* _bestAppSuggestion;
	BOOL _invalidated;

}

@property (nonatomic,retain) NSArray * displayItems;                                                                     //@synthesize displayItems=_displayItems - In the implementation block
@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem;                         //@synthesize returnToDisplayItem=_returnToDisplayItem - In the implementation block
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem;                           //@synthesize initialDisplayItem=_initialDisplayItem - In the implementation block
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem;                 //@synthesize returnToSideDisplayItem=_returnToSideDisplayItem - In the implementation block
@property (setter=_setInitialLayoutState:,nonatomic,retain) SBMainDisplayLayoutState * _initialLayoutState;              //@synthesize initialLayoutState=_initialLayoutState - In the implementation block
@property (assign,nonatomic) id<SBMainAppSwitcherContentViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                    //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)snapshotScale;
-(long long)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(SBDisplayItem *)_returnToDisplayItem;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(SBDisplayItem *)_initialDisplayItem;
-(void)startInteractiveTransition:(BOOL)arg1 presenting:(BOOL)arg2 withRequest:(id)arg3 ;
-(void)endInteractionWithCommitment:(BOOL)arg1 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(id)nextDisplayItem;
-(void)endTransitionWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeDisplayItem:(id)arg1 updateScrollPosition:(BOOL)arg2 forReason:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setReturnToDisplayItem:(id)arg1 ;
-(void)_setReturnToSideDisplayItem:(id)arg1 ;
-(void)_setInitialDisplayItem:(id)arg1 ;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(void)_unhostSideAppToStopHidingThem;
-(void)_hostSideAppToHideThem;
-(void)setDelegate:(id<SBMainAppSwitcherContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SBMainAppSwitcherContentViewControllerDelegate>)delegate;
-(void)invalidate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(NSArray *)displayItems;
-(SBBestAppSuggestion *)bestAppSuggestion;
@end

