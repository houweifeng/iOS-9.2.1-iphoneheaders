/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUINavigationStackObserver.h>

@protocol SKUIScrollingTabBarControllerItemContextDelegate;
@class UIScrollView, SKUIViewControllerContainerCollectionViewCell, UIViewController, NSString;

@interface SKUIScrollingTabBarControllerItemContext : NSObject <SKUINavigationStackObserver> {

	BOOL _adjustingNestedPagingScrollViewContentOffset;
	UIEdgeInsets _appliedContentInsetsAdjustment;
	SCD_Struct_SK32 _desiredContentInsetAdjustmentDescriptor;
	UIScrollView* _insetAdjustedContentScrollView;
	double _lastSeenContentWidth;
	SCD_Struct_SK8 _lastSentAppearanceStatus;
	UIScrollView* _observedNestedPagingScrollView;
	unsigned long long _originalAutoresizingMask;
	BOOL _readyForDisplay;
	char _viewControllerIsNavigationController;
	SKUIViewControllerContainerCollectionViewCell* _collectionViewCell;
	id<SKUIScrollingTabBarControllerItemContextDelegate> _delegate;
	unsigned long long _lastSelectedPageIndex;
	UIViewController* _viewController;

}

@property (nonatomic,retain) SKUIViewControllerContainerCollectionViewCell * collectionViewCell;                //@synthesize collectionViewCell=_collectionViewCell - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIScrollingTabBarControllerItemContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long lastSelectedPageIndex;                                          //@synthesize lastSelectedPageIndex=_lastSelectedPageIndex - In the implementation block
@property (nonatomic,readonly) UIScrollView * nestedPagingScrollView; 
@property (nonatomic,readonly) double nestedPagingScrollViewContentWidth; 
@property (nonatomic,readonly) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) BOOL viewControllerIsNavigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIScrollingTabBarControllerItemContextDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SKUIScrollingTabBarControllerItemContextDelegate>)delegate;
-(UIViewController *)viewController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithViewController:(id)arg1 ;
-(UIScrollView *)nestedPagingScrollView;
-(SKUIViewControllerContainerCollectionViewCell *)collectionViewCell;
-(void)setCollectionViewCell:(SKUIViewControllerContainerCollectionViewCell *)arg1 ;
-(BOOL)viewControllerIsNavigationController;
-(void)applyNewContentInsetDescriptor:(SCD_Struct_SK19)arg1 ;
-(void)prepareViewControllerForDisplayWithSize:(CGSize)arg1 ;
-(void)notifyOfUpdatedAppearanceStatus:(SCD_Struct_SK8)arg1 ;
-(double)nestedPagingScrollViewContentWidth;
-(id)viewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1 ;
-(void)setLastSelectedPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastSelectedPageIndex;
-(void)prepareViewControllerForTearDown;
-(void)updateNestedPagingScrollViewContentOffset:(CGPoint)arg1 ;
-(void)updateForPossibleNestedPagingScrollViewChange;
-(void)_applyNewContentInset:(UIEdgeInsets)arg1 withOldContentInset:(UIEdgeInsets)arg2 toContentScrollView:(id)arg3 ;
-(void)observedNavigationStackDidChange:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;
-(id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(BOOL)arg1 ;
-(void)_updateAppliedContentInsetsAdjustment;
-(id)_appearanceStatusObserver;
-(void)_prepareViewControllerForDisplayWithViewFrame:(CGRect)arg1 updateContentOffset:(BOOL)arg2 contentOffset:(CGPoint)arg3 ;
-(void)_prepareViewControllerForTearDown;
@end

