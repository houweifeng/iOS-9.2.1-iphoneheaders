/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMainDisplaySceneLayoutResizeUIManagerDelegate;
@class NSMutableDictionary, NSMapTable, SBMainDisplaySceneLayoutViewController, SBLayoutElementViewController;

@interface SBMainDisplaySceneLayoutResizeUIManager : NSObject {

	NSMutableDictionary* _stateNotificationHandlers;
	NSMapTable* _createdPlaceholderViews;
	BOOL _delaysRecoilUntilAppsAreObscured;
	BOOL _waitingToObscureAppsDuringShowing;
	BOOL _recoilingLayout;
	BOOL _hidingSideSwitcherGrabber;
	id<SBMainDisplaySceneLayoutResizeUIManagerDelegate> _delegate;
	unsigned long long _affectedLayoutRoles;
	unsigned long long _state;
	SBMainDisplaySceneLayoutViewController* _mainLayoutViewController;
	SBLayoutElementViewController* _primaryLayoutElementController;
	SBLayoutElementViewController* _sideLayoutElementController;
	/*^block*/id _showingCompletionHandler;

}

@property (assign,nonatomic) id<SBMainDisplaySceneLayoutResizeUIManagerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long affectedLayoutRoles;                                                         //@synthesize affectedLayoutRoles=_affectedLayoutRoles - In the implementation block
@property (assign,nonatomic) BOOL delaysRecoilUntilAppsAreObscured;                                                          //@synthesize delaysRecoilUntilAppsAreObscured=_delaysRecoilUntilAppsAreObscured - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                                       //@synthesize state=_state - In the implementation block
@property (getter=isShowingResizeUI,nonatomic,readonly) BOOL showingResizeUI; 
@property (getter=isShowingResizeUIOrAlreadyVisible,nonatomic,readonly) BOOL showingResizeUIOrAlreadyVisible; 
@property (getter=isDismissingResizeUI,nonatomic,readonly) BOOL dismissingResizeUI; 
@property (nonatomic,readonly) BOOL canDismissResizeUI; 
@property (assign,getter=isWaitingToObscureAppsDuringShowing,nonatomic) BOOL waitingToObscureAppsDuringShowing;              //@synthesize waitingToObscureAppsDuringShowing=_waitingToObscureAppsDuringShowing - In the implementation block
@property (nonatomic,retain,readonly) SBMainDisplaySceneLayoutViewController * mainLayoutViewController;                     //@synthesize mainLayoutViewController=_mainLayoutViewController - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * primaryLayoutElementController;                        //@synthesize primaryLayoutElementController=_primaryLayoutElementController - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * sideLayoutElementController;                           //@synthesize sideLayoutElementController=_sideLayoutElementController - In the implementation block
@property (nonatomic,copy) id showingCompletionHandler;                                                                      //@synthesize showingCompletionHandler=_showingCompletionHandler - In the implementation block
@property (assign,getter=isRecoilingLayout,nonatomic) BOOL recoilingLayout;                                                  //@synthesize recoilingLayout=_recoilingLayout - In the implementation block
@property (assign,getter=isHidingSideSwitcherGrabber,nonatomic) BOOL hidingSideSwitcherGrabber;                              //@synthesize hidingSideSwitcherGrabber=_hidingSideSwitcherGrabber - In the implementation block
-(SBLayoutElementViewController *)sideLayoutElementController;
-(SBLayoutElementViewController *)primaryLayoutElementController;
-(BOOL)canDismissResizeUI;
-(void)dismissResizeUIWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isWaitingToObscureAppsDuringShowing;
-(void)obscureAppsDuringShowingWithAnimationFactory:(id)arg1 ;
-(void)addNotificationHandlerForState:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)affectedLayoutRoles;
-(void)setAffectedLayoutRoles:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingResizeUI;
-(BOOL)isShowingResizeUIOrAlreadyVisible;
-(id)initWithMainLayoutViewController:(id)arg1 ;
-(void)setDelaysRecoilUntilAppsAreObscured:(BOOL)arg1 ;
-(void)setAffectedLayoutRoles:(unsigned long long)arg1 ;
-(void)showResizeUIWhileWaitingToObscureApps:(BOOL)arg1 animationFactory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelWithAnimationFactory:(id)arg1 ;
-(void)beginRecoilingWithAnimationFactory:(id)arg1 ;
-(BOOL)delaysRecoilUntilAppsAreObscured;
-(BOOL)isRecoilingLayout;
-(BOOL)isHidingSideSwitcherGrabber;
-(id)_resizingPlaceholderAppIconViewForAppViewController:(id)arg1 ;
-(void)_willChangeDisplayModeOfAppController:(id)arg1 toDisplayMode:(long long)arg2 ;
-(void)_updateCachedSnapshotViewForAppViewController:(id)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)affectsMultipleLayoutRoles;
-(id)primaryAppContainerViewController;
-(id)sideAppContainerViewController;
-(void)_updateCachedSnapshotViewForAppViewController:(id)arg1 onQueue:(id)arg2 displayWhenReadyIfTrue:(/*^block*/id)arg3 displayOptions:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_updateCachedResizingPlaceholderAppIconViewForAppViewController:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ifCurrentlyAtState:(unsigned long long)arg2 ;
-(id)_resizingPlaceholderViewForAppViewController:(id)arg1 ;
-(void)_displayPlaceholderView:(id)arg1 inAppController:(id)arg2 options:(unsigned long long)arg3 factory:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_beginHidingSideSwitcherGrabberWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_recoilWithFactory:(id)arg1 ;
-(void)setWaitingToObscureAppsDuringShowing:(BOOL)arg1 ;
-(void)setShowingCompletionHandler:(id)arg1 ;
-(void)_performShowConstructedUIPhaseOfShowingResizeUIWithPrimaryPlaceholderView:(id)arg1 sidePlaceholderView:(id)arg2 factory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performNextStepOfShowingResizeUIWithBlock:(/*^block*/id)arg1 ;
-(void)_performBlurPhaseOfShowingResizeUIWithPrimaryPlaceholderView:(id)arg1 sidePlaceholderView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performPlaceholderViewConstructionPhaseOfShowingResizeUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performAppSnapshotPhaseOfShowingResizeUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_bestResizingPlaceholderViewForAppContainerViewController:(id)arg1 ;
-(id)showingCompletionHandler;
-(void)_unrecoilWithFactory:(id)arg1 ;
-(void)_fireRemainingStateNotificationHandlers;
-(void)_endHidingSideSwitcherGrabberWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetDisplayModeForElementController:(id)arg1 options:(unsigned long long)arg2 animationFactory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resetElementControllerDisplayModesWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fireStateNotificationHandlersForState:(unsigned long long)arg1 ;
-(void)setRecoilingLayout:(BOOL)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)mainLayoutViewController;
-(void)setHidingSideSwitcherGrabber:(BOOL)arg1 ;
-(BOOL)isResizeUIVisible;
-(BOOL)isDismissingResizeUI;
-(void)setDelegate:(id<SBMainDisplaySceneLayoutResizeUIManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<SBMainDisplaySceneLayoutResizeUIManagerDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

