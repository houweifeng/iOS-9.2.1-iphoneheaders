/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateBarDelegate, UIKeyboardCandidateListDelegate;
@class NSString, UIImageView, NSArray, UIKBThemedView, TIKeyboardCandidateResultSet, UIKeyboardCandidatePocketShadow, NSIndexPath, UIKBCandidateCollectionView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource> {

	BOOL _canExtend;
	BOOL _forceReloadInitiallyHiddenCandidates;
	BOOL _shouldSkipLayoutUntilScrollViewAnimationEnds;
	BOOL _didSkipLayout;
	NSString* _inlineText;
	UIImageView* _candidateMaskView;
	id<UIKeyboardCandidateBarDelegate> _delegate;
	double _upArrowWidth;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	NSArray* _candidateViews;
	unsigned long long _currentCandidateViewIndex;
	UIKBThemedView* _secondaryCandidatesViewEdgeGradient;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSArray* _filteredCandidates;
	UIKeyboardCandidatePocketShadow* _leftBorder;
	UIKeyboardCandidatePocketShadow* _rightBorder;
	NSIndexPath* _dragStartNextPageIndexPath;
	NSIndexPath* _dragStartPreviousPageIndexPath;
	/*^block*/id _skippedSetCandidatesBlock;
	CGPoint _dragStartOffset;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (nonatomic,copy) NSString * inlineText;                                                    //@synthesize inlineText=_inlineText - In the implementation block
@property (nonatomic,retain) UIImageView * candidateMaskView;                                        //@synthesize candidateMaskView=_candidateMaskView - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateBarDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double upArrowWidth;                                                    //@synthesize upArrowWidth=_upArrowWidth - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) NSArray * candidateViews;                                               //@synthesize candidateViews=_candidateViews - In the implementation block
@property (assign,nonatomic) unsigned long long currentCandidateViewIndex;                           //@synthesize currentCandidateViewIndex=_currentCandidateViewIndex - In the implementation block
@property (nonatomic,readonly) UIKBCandidateCollectionView * currentCandidateView; 
@property (nonatomic,retain) UIKBThemedView * secondaryCandidatesViewEdgeGradient;                   //@synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                      //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,retain) NSArray * filteredCandidates;                                           //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (assign,nonatomic) BOOL canExtend;                                                         //@synthesize canExtend=_canExtend - In the implementation block
@property (assign,nonatomic) BOOL forceReloadInitiallyHiddenCandidates;                              //@synthesize forceReloadInitiallyHiddenCandidates=_forceReloadInitiallyHiddenCandidates - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * leftBorder;                           //@synthesize leftBorder=_leftBorder - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * rightBorder;                          //@synthesize rightBorder=_rightBorder - In the implementation block
@property (assign,nonatomic) CGPoint dragStartOffset;                                                //@synthesize dragStartOffset=_dragStartOffset - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartNextPageIndexPath;                                 //@synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartPreviousPageIndexPath;                             //@synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipLayoutUntilScrollViewAnimationEnds;                      //@synthesize shouldSkipLayoutUntilScrollViewAnimationEnds=_shouldSkipLayoutUntilScrollViewAnimationEnds - In the implementation block
@property (assign,nonatomic) BOOL didSkipLayout;                                                     //@synthesize didSkipLayout=_didSkipLayout - In the implementation block
@property (nonatomic,copy) id skippedSetCandidatesBlock;                                             //@synthesize skippedSetCandidatesBlock=_skippedSetCandidatesBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfRows;
+(double)height;
+(double)heightForInterfaceOrientation:(long long)arg1 ;
+(void)setScreenTraits:(id)arg1 ;
+(unsigned long long)numberOfRowsForInterfaceOrientation:(long long)arg1 ;
+(double)heightForRowAtIndex:(unsigned long long)arg1 interfaceOrientation:(long long)arg2 ;
+(double)interRowOverlap;
+(double)defaultPagingVelocityThreshold;
+(double)defaultPagingDistanceThreshold;
+(double)heightForRowAtIndex:(unsigned long long)arg1 ;
+(double)heightForLastRow;
+(double)widthForCurrentScreenTraits;
+(double)defaultCandidateWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<UIKeyboardCandidateBarDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<UIKeyboardCandidateBarDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(TIKeyboardCandidateResultSet *)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(BOOL)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(void)setInlineText:(NSString *)arg1 ;
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(UIKeyboardCandidatePocketShadow *)leftBorder;
-(void)setLeftBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(NSArray *)filteredCandidates;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)_clearData;
-(NSArray *)candidateViews;
-(long long)_sectionForSectionIndex:(unsigned long long)arg1 candidateView:(id)arg2 ;
-(unsigned long long)_countOfItemsInSection:(long long)arg1 ;
-(id)_itemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(Class)_barCellClassForSection:(long long)arg1 ;
-(double)_widthOfItemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(void)_updateCanExtendState;
-(void)setCurrentCandidateViewIndex:(unsigned long long)arg1 ;
-(BOOL)_showingInitiallyHiddenCandidates;
-(void)setShouldSkipLayoutUntilScrollViewAnimationEnds:(BOOL)arg1 ;
-(BOOL)shouldSkipLayoutUntilScrollViewAnimationEnds;
-(void)_scrollToFirstCandidateInSection:(long long)arg1 withAnimation:(BOOL)arg2 ;
-(UIKBCandidateCollectionView *)currentCandidateView;
-(BOOL)didSkipLayout;
-(void)_performSkippedLayoutIfNeeded;
-(void)setDragStartOffset:(CGPoint)arg1 ;
-(id)_nextPageIndexPath;
-(void)setDragStartNextPageIndexPath:(NSIndexPath *)arg1 ;
-(id)_previousPageIndexPath;
-(void)setDragStartPreviousPageIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)dragStartOffset;
-(id)_indexPathForFirstVisibleItem;
-(NSIndexPath *)dragStartNextPageIndexPath;
-(BOOL)canExtend;
-(id)_candidateViewForSection:(long long)arg1 ;
-(NSIndexPath *)dragStartPreviousPageIndexPath;
-(id)_indexPathForLastVisibleItem;
-(id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2 ;
-(void)adjustSelectionToNearestVisibleCandidate;
-(void)setSkippedSetCandidatesBlock:(id)arg1 ;
-(void)setDidSkipLayout:(BOOL)arg1 ;
-(BOOL)forceReloadInitiallyHiddenCandidates;
-(void)setForceReloadInitiallyHiddenCandidates:(BOOL)arg1 ;
-(void)setFilteredCandidates:(NSArray *)arg1 ;
-(void)_reloadDataByAppendingAtEnd:(BOOL)arg1 initiallyHiddenCandidatesChanged:(BOOL)arg2 ;
-(void)_reloadData;
-(void)_showCandidateAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 scrollCellToVisible:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_showPageAtIndexPath:(id)arg1 ;
-(unsigned long long)currentCandidateViewIndex;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 candidateView:(id)arg2 section:(long long)arg3 ;
-(id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1 ;
-(void)setCandidateViews:(NSArray *)arg1 ;
-(double)upArrowWidth;
-(UIKBThemedView *)secondaryCandidatesViewEdgeGradient;
-(void)setSecondaryCandidatesViewEdgeGradient:(UIKBThemedView *)arg1 ;
-(void)_updateBorders;
-(UIKeyboardCandidatePocketShadow *)rightBorder;
-(void)setRightBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(void)_updateCandidateViews;
-(id)skippedSetCandidatesBlock;
-(unsigned long long)_sectionIndexForSection:(long long)arg1 ;
-(void)setCanExtend:(BOOL)arg1 ;
-(void)candidateBarLayoutDidFinishPreparingLayout;
-(double)_emptySpaceForItemsToIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(id)visibleCandidates;
-(void)setUpArrowWidth:(double)arg1 ;
-(UIImageView *)candidateMaskView;
-(void)setCandidateMaskView:(UIImageView *)arg1 ;
@end

