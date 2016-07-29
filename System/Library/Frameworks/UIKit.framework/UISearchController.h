/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerPresenting.h>
#import <UIKit/_UIScrollNotification.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UISearchResultsUpdating, UISearchControllerDelegate;
@class UISearchBar, _UISearchControllerDidScrollDelegate, UISystemInputViewController, UITapGestureRecognizer, UIView, UIViewController, NSString;

@interface UISearchController : UIViewController <UIViewControllerPresenting, _UIScrollNotification, NSCoding, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UISearchBar* _searchBar;
	int _barPresentationStyle;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id _windowWillAnimateToken;
	_UISearchControllerDidScrollDelegate* _didScrollDelegate;
	UISystemInputViewController* _systemInputViewController;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	struct {
		unsigned searchBarWasTableHeaderView : 1;
		unsigned searchBarWasFirstResponder : 1;
	}  _controllerFlags;
	BOOL _obscuresBackgroundDuringPresentation;
	BOOL _hidesNavigationBarDuringPresentation;
	BOOL __showResultsForEmptySearch;
	UIView* _resultsControllerViewContainer;
	id<UISearchResultsUpdating> _searchResultsUpdater;
	id<UISearchControllerDelegate> _delegate;
	UIViewController* _searchResultsController;
	long long __previousSearchBarPosition;
	double __resultsContentScrollViewPresentationOffset;

}

@property (assign,nonatomic,__weak) id<UISearchResultsUpdating> searchResultsUpdater;                            //@synthesize searchResultsUpdater=_searchResultsUpdater - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic,__weak) id<UISearchControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL dimsBackgroundDuringPresentation; 
@property (assign,nonatomic) BOOL obscuresBackgroundDuringPresentation;                                          //@synthesize obscuresBackgroundDuringPresentation=_obscuresBackgroundDuringPresentation - In the implementation block
@property (assign,nonatomic) BOOL hidesNavigationBarDuringPresentation;                                          //@synthesize hidesNavigationBarDuringPresentation=_hidesNavigationBarDuringPresentation - In the implementation block
@property (nonatomic,readonly) UIViewController * searchResultsController;                                       //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                                                          //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,setter=_setShowResultsForEmptySearch:,nonatomic) BOOL _showResultsForEmptySearch;              //@synthesize _showResultsForEmptySearch=__showResultsForEmptySearch - In the implementation block
@property (nonatomic,readonly) int _barPresentationStyle;                                                        //@synthesize barPresentationStyle=_barPresentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL _searchbarWasTableHeaderView; 
@property (assign,nonatomic) long long _previousSearchBarPosition;                                               //@synthesize _previousSearchBarPosition=__previousSearchBarPosition - In the implementation block
@property (nonatomic,retain) UIView * _resultsControllerViewContainer;                                           //@synthesize resultsControllerViewContainer=_resultsControllerViewContainer - In the implementation block
@property (assign,nonatomic) double _resultsContentScrollViewPresentationOffset;                                 //@synthesize _resultsContentScrollViewPresentationOffset=__resultsContentScrollViewPresentationOffset - In the implementation block
@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_resignSearchBarAsFirstResponder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UISearchControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)isActive;
-(BOOL)_disableAutomaticKeyboardUI;
-(void)loadView;
-(void)_commonInit;
-(id)preferredFocusedItem;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willUpdateFocusToView:(id)arg1 ;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(void)_presentingViewControllerDidChange:(id)arg1 ;
-(void)_presentingViewControllerWillChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)_requiresCustomPresentationController;
-(id)_defaultAnimationController;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)dimsBackgroundDuringPresentation;
-(BOOL)_showResultsForEmptySearch;
-(int)_barPresentationStyle;
-(BOOL)hidesNavigationBarDuringPresentation;
-(UIViewController *)searchResultsController;
-(void)_uninstallBackGestureRecognizer;
-(void)_installBackGestureRecognizer;
-(void)_dismissFromBackButton:(id)arg1 ;
-(void)_updateSearchBarMaskIfNecessary;
-(void)_searchBarSuperviewChanged;
-(void)_searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_searchBarCancelButtonClicked:(id)arg1 ;
-(void)_searchBarTextDidBeginEditing:(id)arg1 ;
-(void)_searchBarSearchButtonClicked:(id)arg1 ;
-(BOOL)_searchBarShouldFinalizeBecomingFirstResponder;
-(void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2 ;
-(BOOL)_searchbarWasTableHeaderView;
-(BOOL)_resultsControllerWillLayoutVisibleUnderContainerView;
-(void)set_resultsContentScrollViewPresentationOffset:(double)arg1 ;
-(void)_dismissPresentation:(BOOL)arg1 ;
-(id)_searchPresentationController;
-(void)set_previousSearchBarPosition:(long long)arg1 ;
-(double)_resultsContentScrollViewPresentationOffset;
-(UIView *)_resultsControllerViewContainer;
-(long long)_previousSearchBarPosition;
-(BOOL)obscuresBackgroundDuringPresentation;
-(UISystemInputViewController *)_systemInputViewController;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)_updateSearchResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_connectSearchBar:(id)arg1 ;
-(void)_adjustSearchBarSizeForOrientation:(long long)arg1 ;
-(id)_createAnimationCoordinator;
-(void)setObscuresBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1 ;
-(id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(BOOL)arg2 ;
-(void)_resizeResultsControllerWithDelta:(CGSize)arg1 ;
-(void)_performAutomaticPresentation;
-(id)_locatePresentingViewController;
-(void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1 ;
-(id<UISearchResultsUpdating>)searchResultsUpdater;
-(void)_watchScrollView:(id)arg1 forScrolling:(BOOL)arg2 ;
-(void)_sizeSearchViewToPresentingViewController:(id)arg1 ;
-(void)_willPresentFromViewController:(id)arg1 ;
-(void)_didPresentFromViewController:(id)arg1 ;
-(void)_willDismissSearchController;
-(void)_didDismissSearchController;
-(void)_updateBarPresentationStyleForPresentingViewController:(id)arg1 ;
-(BOOL)_allowFormSheetStylePresentation;
-(void)_updateSearchResultsContentScrollViewWithDelta:(CGSize)arg1 ;
-(void)_updateSearchResultsPositionWithDelta:(CGSize)arg1 ;
-(void)_beginWatchingPresentingController;
-(void)_endWatchingPresentingController;
-(void)_navigationControllerWillShowViewController:(id)arg1 ;
-(void)setDimsBackgroundDuringPresentation:(BOOL)arg1 ;
-(void)set_resultsControllerViewContainer:(UIView *)arg1 ;
-(void)setSearchResultsUpdater:(id<UISearchResultsUpdating>)arg1 ;
-(void)setHidesNavigationBarDuringPresentation:(BOOL)arg1 ;
-(void)_setShowResultsForEmptySearch:(BOOL)arg1 ;
@end

