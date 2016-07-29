/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CKConversationResultsControllerDelegate.h>
#import <libobjc.A.dylib/CKTranscriptPreviewControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UITableView, NSIndexPath, CKMessagesController, CKConversationList, UIBarButtonItem, CKScheduledUpdater, UIView, NSArray, UISearchController, CKConversationSearchResultsController, NSString;

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, CKConversationResultsControllerDelegate, CKTranscriptPreviewControllerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate> {

	UITableView* _table;
	NSIndexPath* _previouslySelectedIndexPath;
	unsigned long long _willBeMarkedReadCount;
	unsigned _isVisible : 1;
	unsigned _willRotate : 1;
	CKMessagesController* _messagesController;
	CKConversationList* _conversationList;
	BOOL _isInitialLoad;
	BOOL _isShowingSwipeDeleteConfirmation;
	UIBarButtonItem* _currentEditButtonItem;
	CKScheduledUpdater* _updater;
	UIView* _noMessagesDialogView;
	NSArray* _frozenConversations;
	unsigned long long _filteredConversationCount;
	long long _filterMode;
	NSArray* _filteredContactsAndSMSConversations;
	NSArray* _filteredJunkConversations;
	NSArray* _nonPlaceholderConversations;
	double _conversationCellHeight;
	UISearchController* _searchController;
	CKConversationSearchResultsController* _searchResultsController;

}

@property (assign,nonatomic) CKConversationList * conversationList;                                        //@synthesize conversationList=_conversationList - In the implementation block
@property (assign,nonatomic) CKMessagesController * messagesController;                                    //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,retain) NSIndexPath * previouslySelectedIndexPath;                                    //@synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentEditButtonItem;                                      //@synthesize currentEditButtonItem=_currentEditButtonItem - In the implementation block
@property (assign,nonatomic) BOOL isShowingSwipeDeleteConfirmation;                                        //@synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPendingCell; 
@property (nonatomic,retain) CKScheduledUpdater * updater;                                                 //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) UIView * noMessagesDialogView;                                                //@synthesize noMessagesDialogView=_noMessagesDialogView - In the implementation block
@property (nonatomic,copy) NSArray * frozenConversations;                                                  //@synthesize frozenConversations=_frozenConversations - In the implementation block
@property (assign,nonatomic) unsigned long long filteredConversationCount;                                 //@synthesize filteredConversationCount=_filteredConversationCount - In the implementation block
@property (assign,nonatomic) long long filterMode;                                                         //@synthesize filterMode=_filterMode - In the implementation block
@property (nonatomic,retain) NSArray * filteredContactsAndSMSConversations;                                //@synthesize filteredContactsAndSMSConversations=_filteredContactsAndSMSConversations - In the implementation block
@property (nonatomic,retain) NSArray * filteredJunkConversations;                                          //@synthesize filteredJunkConversations=_filteredJunkConversations - In the implementation block
@property (nonatomic,retain) NSArray * nonPlaceholderConversations;                                        //@synthesize nonPlaceholderConversations=_nonPlaceholderConversations - In the implementation block
@property (assign,nonatomic) double conversationCellHeight;                                                //@synthesize conversationCellHeight=_conversationCellHeight - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                        //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) CKConversationSearchResultsController * searchResultsController;              //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)applicationWillSuspend;
-(unsigned long long)supportedInterfaceOrientations;
-(void)significantTimeChange;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)accessibilityLargeTextDidChange;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_CK7*)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)inputAccessoryView;
-(CKConversationSearchResultsController *)searchResultsController;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)updateTitle;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(id)menuItemsForTranscriptPreviewController:(id)arg1 ;
-(id)searcher:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3 ;
-(void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2 ;
-(id)activeConversations;
-(long long)filterMode;
-(unsigned long long)filteredConversationCount;
-(NSArray *)frozenConversations;
-(NSArray *)filteredContactsAndSMSConversations;
-(NSArray *)filteredJunkConversations;
-(BOOL)_shouldOnlyShowNonPlaceholderConversationLists;
-(NSArray *)nonPlaceholderConversations;
-(void)updateConversationList;
-(void)setUpdater:(CKScheduledUpdater *)arg1 ;
-(void)beginHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)setFilterMode:(long long)arg1 ;
-(void)_updateFilteredConversationLists;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg1 ;
-(void)_conversationListDidChange:(id)arg1 ;
-(void)_chatParticipantsChangedNotification:(id)arg1 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg1 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationMuteDidChangeNotification:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationKeepMessagesChangedNotification:(id)arg1 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg1 ;
-(void)invalidateCellLayout;
-(Class)conversationListCellClass;
-(void)setConversationCellHeight:(double)arg1 ;
-(void)updateConversationSelection;
-(void)noteUnreadCountsChanged;
-(CKScheduledUpdater *)updater;
-(void)updateNoMessagesDialog;
-(UIBarButtonItem *)currentEditButtonItem;
-(void)composeButtonClicked:(id)arg1 ;
-(void)updateCurrentEditButton;
-(void)editButtonTapped:(id)arg1 ;
-(void)setCurrentEditButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)isShowingSwipeDeleteConfirmation;
-(BOOL)shouldShowPendingCell;
-(void)setPreviouslySelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setFrozenConversations:(NSArray *)arg1 ;
-(void)_updateNonPlaceholderConverationLists;
-(void)setNonPlaceholderConversations:(NSArray *)arg1 ;
-(void)updateFilterControl:(id)arg1 ;
-(void)updateNavigationItems;
-(UIView *)noMessagesDialogView;
-(void)setNoMessagesDialogView:(UIView *)arg1 ;
-(void)setFilteredContactsAndSMSConversations:(NSArray *)arg1 ;
-(void)setFilteredJunkConversations:(NSArray *)arg1 ;
-(void)setFilteredConversationCount:(unsigned long long)arg1 ;
-(void)endHoldingConversationListUpdatesForKey:(id)arg1 ;
-(BOOL)_shouldKeepSelection;
-(CKMessagesController *)messagesController;
-(void)markAsReadButtonTappedForIndexPath:(id)arg1 ;
-(void)markAsReadButtonTapped:(id)arg1 ;
-(void)batchDeleteButtonTapped:(id)arg1 ;
-(void)_updateToolbarItems;
-(NSIndexPath *)previouslySelectedIndexPath;
-(void)_filterCellSelectionChanged:(id)arg1 ;
-(double)conversationCellHeight;
-(void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1 ;
-(CKConversationList *)conversationList;
-(void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(void)deleteButtonTappedForIndexPath:(id)arg1 ;
-(unsigned long long)_indexOfDefaultConversation;
-(void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(void)_conversationMessageWasSent:(id)arg1 ;
-(void)_groupsChanged:(id)arg1 ;
-(void)conversationWillBeMarkedRead:(id)arg1 ;
-(void)scrollToTop;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 ;
-(void)setConversationList:(CKConversationList *)arg1 ;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)setSearchResultsController:(CKConversationSearchResultsController *)arg1 ;
@end

