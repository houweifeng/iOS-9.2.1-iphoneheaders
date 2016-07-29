/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateGridLayoutDelegate.h>

@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateListDelegate;
@class NSArray, TIKeyboardCandidateResultSet, UIButton, UIView, UIKBCandidateCollectionView, UIKeyboardCandidateGridCollectionView, UIKeyboardCandidateGridLayout, NSString;

@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateList, UIKeyboardCandidateGridLayoutDelegate> {

	BOOL _alwaysShowExtensionCandidates;
	BOOL _hasSecondaryCandidates;
	BOOL _showHiddenCandidatesOnly;
	BOOL _singleLineMode;
	BOOL _supportsNumberKeySelection;
	BOOL _secondaryCandidatesViewIsCurrent;
	BOOL __usesDeemphasizedTextAppearance;
	int _candidatesVisualStyle;
	NSArray* _filteredCandidates;
	id<UIKeyboardCandidateGridCollectionViewControllerDelegate> _delegate;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSArray* _candidateGroups;
	double _rowHeight;
	SCD_Struct_UI39 _visualStyling;
	UIButton* _padInlineFloatingArrowButton;
	UIView* _headerView;
	UIKBCandidateCollectionView* _secondaryCandidatesView;
	double _groupBarWidth;

}

@property (nonatomic,readonly) UIKeyboardCandidateGridCollectionView * collectionView; 
@property (assign,nonatomic) id<UIKeyboardCandidateGridCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                         //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                       //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,retain) NSArray * candidateGroups;                                                         //@synthesize candidateGroups=_candidateGroups - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                  //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI39 visualStyling;                                                     //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                                         //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowExtensionCandidates;                                                //@synthesize alwaysShowExtensionCandidates=_alwaysShowExtensionCandidates - In the implementation block
@property (nonatomic,readonly) UIButton * padInlineFloatingArrowButton;                                         //@synthesize padInlineFloatingArrowButton=_padInlineFloatingArrowButton - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                               //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryCandidates;                                                       //@synthesize hasSecondaryCandidates=_hasSecondaryCandidates - In the implementation block
@property (nonatomic,retain) UIKBCandidateCollectionView * secondaryCandidatesView;                             //@synthesize secondaryCandidatesView=_secondaryCandidatesView - In the implementation block
@property (assign,nonatomic) BOOL showHiddenCandidatesOnly;                                                     //@synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly - In the implementation block
@property (assign,nonatomic) BOOL singleLineMode;                                                               //@synthesize singleLineMode=_singleLineMode - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateGridLayout * collectionViewGridLayout; 
@property (assign,nonatomic) double groupBarWidth;                                                              //@synthesize groupBarWidth=_groupBarWidth - In the implementation block
@property (assign,nonatomic) BOOL supportsNumberKeySelection;                                                   //@synthesize supportsNumberKeySelection=_supportsNumberKeySelection - In the implementation block
@property (assign,nonatomic) BOOL secondaryCandidatesViewIsCurrent;                                             //@synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent - In the implementation block
@property (assign,nonatomic) BOOL _usesDeemphasizedTextAppearance;                                              //@synthesize _usesDeemphasizedTextAppearance=__usesDeemphasizedTextAppearance - In the implementation block
@property (nonatomic,readonly) NSArray * filteredCandidates;                                                    //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<UIKeyboardCandidateGridCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<UIKeyboardCandidateGridCollectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)layout;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(UIKeyboardCandidateGridCollectionView *)collectionView;
-(id)selectedItemIndexPath;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(BOOL)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
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
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setVisualStyling:(SCD_Struct_UI39)arg1 ;
-(SCD_Struct_UI39)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(void)loadSecondaryCandidatesView;
-(BOOL)hasSecondaryCandidates;
-(UIKBCandidateCollectionView *)secondaryCandidatesView;
-(int)candidatesVisualStyle;
-(void)setSecondaryCandidatesView:(UIKBCandidateCollectionView *)arg1 ;
-(UIView *)headerView;
-(void)scrollToTopWithAnimation:(BOOL)arg1 ;
-(void)scrollToTopWithAnimation:(BOOL)arg1 revealHeaderView:(BOOL)arg2 ;
-(void)scrollToBottomWithAnimation:(BOOL)arg1 ;
-(void)set_usesDeemphasizedTextAppearance:(BOOL)arg1 ;
-(UIKeyboardCandidateGridLayout *)collectionViewGridLayout;
-(BOOL)_usesDeemphasizedTextAppearance;
-(NSArray *)candidateGroups;
-(unsigned long long)padInlineHighlightedRowIndex;
-(void)padInlineFloatingExpand;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSecondaryCandidatesViewIsCurrent:(BOOL)arg1 ;
-(unsigned long long)groupsCount;
-(BOOL)secondaryCandidatesViewIsCurrent;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)candidateIndexOffset;
-(id)firstCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1 ;
-(id)lastCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1 ;
-(void)updateHeaderView;
-(void)updateIndexTitles;
-(BOOL)supportsNumberKeySelection;
-(void)setSupportsNumberKeySelection:(BOOL)arg1 ;
-(BOOL)padInlineFloatingIsExpanded;
-(void)setCandidateGroups:(NSArray *)arg1 ;
-(void)setHasSecondaryCandidates:(BOOL)arg1 ;
-(double)groupBarWidth;
-(void)setGroupBarWidth:(double)arg1 ;
-(void)scrollViewIndexChanged:(id)arg1 ;
-(id)indexPathForCandidate:(id)arg1 ;
-(id)firstCandidateIndexPath;
-(void)stepOneLine:(BOOL)arg1 ;
-(id)candidateAtIndexPath:(id)arg1 ;
-(BOOL)showHiddenCandidatesOnly;
-(NSArray *)filteredCandidates;
-(unsigned long long)rowIndexForCellAtIndexPath:(id)arg1 ;
-(CGSize)rowSizeForGridLayout;
-(void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1 ;
-(void)candidateViewDidFinishExtending;
-(id)lastCandidateIndexPath;
-(BOOL)alwaysShowExtensionCandidates;
-(void)setAlwaysShowExtensionCandidates:(BOOL)arg1 ;
-(UIButton *)padInlineFloatingArrowButton;
-(void)setShowHiddenCandidatesOnly:(BOOL)arg1 ;
-(BOOL)singleLineMode;
-(void)setSingleLineMode:(BOOL)arg1 ;
@end

