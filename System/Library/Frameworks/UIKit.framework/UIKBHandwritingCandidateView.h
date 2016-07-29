/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidatePocketShadow, UIKeyboardCandidateLogButton, NSArray, NSString;

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	id<UIKeyboardCandidateListDelegate> _delegate;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	UIKBCandidateCollectionView* _candidatesCollectionView;
	UIKeyboardCandidatePocketShadow* _pocketShadow;
	UIKeyboardCandidatePocketShadow* _leftBorder;
	SCD_Struct_UI39 _visualStyling;
	UIKeyboardCandidateLogButton* _logButton;
	unsigned long long _dummyCellCount;
	double _dummyCellWidth;

}

@property (assign,nonatomic) id<UIKeyboardCandidateListDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<UIKeyboardCandidateList> candidateList; 
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                   //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,retain) UIKBCandidateCollectionView * candidatesCollectionView;              //@synthesize candidatesCollectionView=_candidatesCollectionView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * pocketShadow;                      //@synthesize pocketShadow=_pocketShadow - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * leftBorder;                        //@synthesize leftBorder=_leftBorder - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI39 visualStyling;                                       //@synthesize visualStyling=_visualStyling - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateLogButton * logButton;                            //@synthesize logButton=_logButton - In the implementation block
@property (assign,nonatomic) unsigned long long dummyCellCount;                                   //@synthesize dummyCellCount=_dummyCellCount - In the implementation block
@property (assign,nonatomic) double dummyCellWidth;                                               //@synthesize dummyCellWidth=_dummyCellWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(void)setDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<UIKeyboardCandidateListDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)setRenderConfig:(id)arg1 ;
-(NSArray *)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(BOOL)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
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
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(void)jumpToCompositions;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(void)setVisualStyling:(SCD_Struct_UI39)arg1 ;
-(SCD_Struct_UI39)visualStyling;
-(void)updatePocketShadowForKeyplane:(id)arg1 ;
-(void)updateLeftBorderForKeyplane:(id)arg1 ;
-(void)calculateDummyCellAttributes;
-(UIKBCandidateCollectionView *)candidatesCollectionView;
-(UIKeyboardCandidateLogButton *)logButton;
-(UIKeyboardCandidatePocketShadow *)pocketShadow;
-(void)setPocketShadow:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(UIKeyboardCandidatePocketShadow *)leftBorder;
-(void)setLeftBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(void)setDummyCellWidth:(double)arg1 ;
-(void)setDummyCellCount:(unsigned long long)arg1 ;
-(void)reloadDataByAppendingAtEnd:(BOOL)arg1 ;
-(unsigned long long)dummyCellCount;
-(double)dummyCellWidth;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCandidatesCollectionView:(UIKBCandidateCollectionView *)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id<UIKeyboardCandidateList>)candidateList;
-(void)setLogButton:(UIKeyboardCandidateLogButton *)arg1 ;
@end

